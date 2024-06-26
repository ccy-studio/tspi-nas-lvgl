﻿#include "application.h"
#include "monitor/cpu_monitor.h"
#include "monitor/disk_monitor.h"
#include "monitor/memory_monitor.h"
#include "monitor/net_monitor.h"

static lv_obj_t * tv;
static lv_obj_t * container;              // 页面根
static lv_obj_t * label_net_up;           // 网络-上行
static lv_obj_t * label_net_dn;           // 网络-下行
static lv_obj_t * label_cpu_name;         // CPU名称
static lv_obj_t * label_cpu_core;         // CPU核心数
static lv_obj_t * label_cpu_temp;         // CPU温度
static lv_obj_t * label_mem_desc;         // 内存使用详情
static lv_obj_t * label_disk_mount;       // 硬盘-挂载名称
static lv_obj_t * label_disk_space_use;   // 硬盘-已用
static lv_obj_t * label_disk_space_total; // 硬盘-总量

static lv_obj_t * arc_cpu; // 百分比环-CPU
static lv_obj_t * arc_mem; // 百分比环-MEM

static lv_obj_t * bar_cpu_temp; // 温度图形Bar控件

static lv_obj_t * bar_disk; // 硬盘-Bar进度条控件

static lv_obj_t * gif_cat_lv;
extern lv_obj_t * gif_boy_lv;

static pthread_t sys_thread;
static cpu_info_t cpu;
static disk_info_t disk;
static mem_info_t mem;
static net_info_t net;

// 声明图片文件
LV_IMG_DECLARE(img_cpu)
LV_IMG_DECLARE(img_disk)
LV_IMG_DECLARE(img_logo_txt)
LV_IMG_DECLARE(img_net_dn)
LV_IMG_DECLARE(img_net_up)
LV_IMG_DECLARE(img_zd)
LV_IMG_DECLARE(gif_cat)

extern void init_date_time(lv_obj_t * root);

static void update_arc_val(lv_obj_t * arc, int32_t val);
static void tv_replace_event_cb(lv_event_t * e);

/**
 * @brief 返回GIF播放状态，true正在运行，false暂停
 * @param gif
 * @return
 */
bool is_gif_status(lv_obj_t * gif)
{
    lv_gif_t * gifobj = (lv_gif_t *)gif;
    return lv_timer_get_paused(gifobj->timer);
}

static void refresh_ui_monitor()
{
    static char buf[30];
    static char buf2[30];
    memset(buf, 0, sizeof(buf));
    memset(buf2, 0, sizeof(buf2));
    lv_label_set_text(label_cpu_name, cpu.model_name);
    lv_label_set_text_fmt(label_cpu_core, "Core:%" LV_PRId32, cpu.core_num);
    lv_label_set_text(label_disk_mount, SYS_MONITOR_DISK_NAME);
    lv_label_set_text_fmt(label_disk_space_use, "使用: %s 剩余:%s", disk.used, disk.avail);
    lv_label_set_text_fmt(label_disk_space_total, "总量: %s", disk.size);
    lv_bar_set_value(bar_disk, disk.use_percent_int, LV_ANIM_ON);
    lv_label_set_text_fmt(label_cpu_temp, "CPU:%.1fC", cpu.temp);
    lv_bar_set_value(bar_cpu_temp, cpu.temp, LV_ANIM_ON);
    update_arc_val(arc_cpu, (int32_t)cpu.usage);
    update_arc_val(arc_mem, (int32_t)mem.memory_use_percent);

    format_sys_mem_str(mem.memory_use_count, buf);
    format_sys_mem_str(mem.memory_size, buf2);
    lv_label_set_text_fmt(label_mem_desc, "%s/%s", buf, buf2);
    lv_label_set_text(label_net_up, net.tx_speed);
    lv_label_set_text(label_net_dn, net.rx_speed);
}

/**
 * @brief 刷新系统监控指标
 * @param timer
 */
void * timer_refresh_system_monitor(void * arg)
{
    while(true) {
        if(!is_gif_status(gif_cat_lv) && arg == NULL) {
            my_sleep(100);
            continue;
        }
        static bool init_frist = false;
        if(!init_frist) {
            strcpy(net.net_name, SYS_NET_NAME);
            init_frist = true;
            get_sys_cpu(&cpu);
        }
        get_sys_disk_usage(&disk, SYS_MONITOR_DISK_NAME);
        get_sys_memory_usage(&mem);
        get_sys_current_net_speed(&net);
        get_sys_cpu_temp(&cpu);
        get_sys_cpu_usage(&cpu);
        lv_async_call(refresh_ui_monitor, NULL);
        if(arg != NULL) {
            return NULL;
        }
        my_sleep(1000);
    }
    return NULL;
}

/**
 * @brief 初始化磁盘进度Bar控件
 * @param
 */
static void init_disk_bar(void)
{
    bar_disk = lv_bar_create(container);
    lv_obj_set_size(bar_disk, 130, 18);
    lv_obj_set_pos(bar_disk, 150, 215);
    lv_bar_set_start_value(bar_disk, 0, LV_ANIM_ON);
    lv_obj_set_style_bg_opa(bar_disk, LV_OPA_COVER, 0);
    lv_obj_set_style_bg_color(bar_disk, lv_color_hex(0x2d2e36), LV_PART_MAIN);
    lv_obj_set_style_bg_color(bar_disk, lv_color_hex(0x12a182), LV_PART_INDICATOR);
    lv_bar_set_value(bar_disk, 0, LV_ANIM_ON);
}

/**
 * @brief 初始化CPU温度控件
 * @param
 */
static void init_bar_cpu_temp(void)
{
    static lv_style_t style_indic;
    lv_style_init(&style_indic);
    lv_style_set_bg_opa(&style_indic, LV_OPA_COVER);
    lv_style_set_bg_color(&style_indic, lv_palette_main(LV_PALETTE_RED));
    lv_style_set_bg_grad_color(&style_indic, lv_palette_main(LV_PALETTE_BLUE));
    lv_style_set_bg_grad_dir(&style_indic, LV_GRAD_DIR_VER);

    bar_cpu_temp = lv_bar_create(container);
    lv_obj_add_style(bar_cpu_temp, &style_indic, LV_PART_INDICATOR);
    lv_obj_set_size(bar_cpu_temp, 15, 90);
    lv_obj_set_pos(bar_cpu_temp, 24, 90);
    lv_bar_set_range(bar_cpu_temp, 0, 100);
}

/**
 * @brief 初始化文本控件
 * @param
 */
static void init_labels(void)
{
    label_net_up = lv_label_create(container);
    label_net_dn = lv_label_create(container);

    label_cpu_temp         = lv_label_create(container);
    label_mem_desc         = lv_label_create(container);
    label_disk_mount       = lv_label_create(container);
    label_disk_space_use   = lv_label_create(container);
    label_disk_space_total = lv_label_create(bar_disk);

    // Set Style
    set_label_style(label_net_up, lv_color_white(), 57, 17.5, &douyin_12);
    set_label_style(label_net_dn, lv_color_white(), 57, 47.5, &douyin_12);
    set_label_style(label_cpu_temp, lv_color_white(), 12, 72, &douyin_10);
    set_label_style(label_mem_desc, lv_color_white(), lv_obj_get_x(arc_mem) + 3, lv_obj_get_y2(arc_mem) + 2,
                    &douyin_10);

    set_label_style(label_disk_mount, lv_color_white(), 6, 205 + 6, &douyin_12);
    set_label_style(label_disk_space_use, lv_color_white(), 6, 222 + 6, &douyin_12);
    set_label_style(label_disk_space_total, lv_color_white(), 135, 215 + 6, &douyin_12);
    lv_obj_center(label_disk_space_total);

    // SetDefaiultValue
    /*lv_label_set_text(label_net_up, "0.0K/s");
    lv_label_set_text(label_net_dn, "0.0K/s");
    lv_label_set_text(label_cpu_temp, "CPU: -");
    lv_label_set_text(label_mem_desc, "33.48MB/27.96 MB");

    lv_label_set_text(label_disk_mount, "ubi0:rootfs: /");
    lv_label_set_text(label_disk_space_use, "使用: 61.2MB 剩余: 6MB");
    lv_label_set_text(label_disk_space_total, "总量: 67.1MB");*/

    // Init CPU INFO
    lv_obj_t * flex = lv_obj_create(container);
    lv_obj_remove_style_all(flex);
    lv_obj_set_layout(flex, LV_LAYOUT_FLEX);
    lv_obj_set_pos(flex, 118, 30);
    lv_obj_set_size(flex, lv_disp_get_hor_res(NULL) - 118, 50);
    lv_obj_set_style_pad_hor(flex, 6, 0);
    // lv_obj_set_size(flex, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
    lv_obj_set_flex_flow(flex, LV_FLEX_FLOW_ROW_WRAP);
    lv_obj_set_flex_align(flex, LV_FLEX_ALIGN_END, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_START);

    /*lv_obj_set_style_bg_opa(flex, 255, 0);
    lv_obj_set_style_bg_color(flex, lv_color_hex(0xff0000), 0);*/

    lv_obj_t * icon = lv_image_create(flex);
    lv_image_set_src(icon, &img_cpu);
    label_cpu_name = lv_label_create(flex);
    label_cpu_core = lv_label_create(flex);
    lv_obj_add_flag(label_cpu_core, LV_OBJ_FLAG_FLEX_IN_NEW_TRACK);

    lv_obj_set_style_text_color(label_cpu_name, lv_color_white(), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(label_cpu_name, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(label_cpu_name, &douyin_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_text_color(label_cpu_core, lv_color_white(), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(label_cpu_core, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(label_cpu_core, &douyin_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    /* lv_label_set_text(label_cpu_name, "ARMv7 Processor rev 5(v7l)");
     lv_label_set_text(label_cpu_core, "Core: 1");*/
    lv_obj_align_to(label_cpu_core, label_cpu_name, LV_ALIGN_LEFT_MID, 0, 0);

    // lv_obj_set_style_pad_row(flex, 5, 0);
    lv_obj_set_style_pad_column(flex, 10, 0);
}

/**
 * @brief 初始化指示器控件
 * @param x
 * @param title
 * @return
 */
static lv_obj_t * init_arcs(int32_t x, char * title)
{
    lv_obj_t * arc;
    lv_obj_t * label = lv_label_create(container);
    /*Create an Arc*/
    arc = lv_arc_create(container);
    lv_obj_remove_flag(arc, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_set_size(arc, 100, 100);
    lv_obj_set_pos(arc, x, 90);
    lv_arc_set_rotation(arc, 135);
    lv_arc_set_bg_angles(arc, 0, 270);
    lv_arc_set_range(arc, 0, 100);
    lv_arc_set_value(arc, 0);
    arc->user_data = label;
    lv_obj_set_style_text_font(label, &douyin_12, 0);
    lv_obj_set_style_text_color(label, lv_color_white(), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_label_set_text_fmt(label, "%" LV_PRId32 "%%", lv_arc_get_value(arc));
    lv_arc_rotate_obj_to_angle(arc, label, 25);

    // 内部文字
    label = lv_label_create(arc);
    lv_obj_center(label);
    lv_label_set_text(label, title);
    lv_obj_set_style_text_font(label, &douyin_12, 0);
    lv_obj_set_style_text_color(label, lv_color_white(), LV_PART_MAIN | LV_STATE_DEFAULT);

    // 添加图标
    lv_obj_t * icon = lv_image_create(arc);
    lv_image_set_src(icon, &img_zd);
    lv_obj_align(icon, LV_ALIGN_BOTTOM_MID, 0, -(lv_obj_get_height(arc) / 2 / 2));

    return arc;
}

/**
 * @brief 设置百分比环的占率值
 * @param arc
 * @param val
 */
static void update_arc_val(lv_obj_t * arc, int32_t val)
{
    lv_arc_set_value(arc, val);
    lv_label_set_text_fmt(arc->user_data, "%" LV_PRId32 "%%", lv_arc_get_value(arc));
    lv_arc_rotate_obj_to_angle(arc, arc->user_data, 20);
}

static void init_icon(void)
{
    lv_obj_t * icon = lv_img_create(container);
    lv_image_set_src(icon, &img_net_dn);
    lv_obj_set_size(icon, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
    lv_obj_set_pos(icon, 15, 40);

    icon = lv_img_create(container);
    lv_image_set_src(icon, &img_net_up);
    lv_obj_set_size(icon, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
    lv_obj_set_pos(icon, 15, 10);

    icon = lv_img_create(container);
    lv_image_set_src(icon, &img_logo_txt);
    lv_obj_set_size(icon, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
    lv_obj_set_pos(icon, 224, 8);

    icon = lv_img_create(container);
    lv_image_set_src(icon, &img_disk);
    lv_obj_set_size(icon, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
    lv_obj_set_pos(icon, 294, 213);
}

static void tv_replace_event_cb(lv_event_t * e)
{
    if(lv_tileview_get_tile_active(tv) == container) {
        lv_gif_pause(gif_boy_lv);
        lv_gif_resume(gif_cat_lv);
    } else {
        lv_gif_pause(gif_cat_lv);
        lv_gif_resume(gif_boy_lv);
    }
}

static void on_page_create(ui_data_t * ui_dat, void * params)
{
    tv = lv_tileview_create(NULL);
    lv_obj_set_size(tv, lv_disp_get_hor_res(NULL), lv_disp_get_ver_res(NULL));
    lv_obj_set_style_bg_opa(tv, 0, 0);
    lv_obj_set_style_bg_color(tv, lv_color_black(), 0);
    // lv_obj_add_flag(tv, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_CHAIN |
    // LV_OBJ_FLAG_GESTURE_BUBBLE);
    lv_obj_set_scrollbar_mode(tv, LV_SCROLLBAR_MODE_OFF);
    lv_obj_remove_flag(tv, LV_OBJ_FLAG_SCROLL_MOMENTUM);
    lv_obj_remove_flag(tv, LV_OBJ_FLAG_SCROLL_ELASTIC);

    container     = lv_tileview_add_tile(tv, 0, 0, LV_DIR_HOR);
    tv->user_data = ui_dat;
    lv_obj_set_style_bg_color(container, lv_color_black(), LV_PART_MAIN);
    lv_obj_set_style_bg_opa(container, 255, LV_PART_MAIN);

    /*lv_obj_add_flag(container, LV_OBJ_FLAG_SCROLLABLE |
     * LV_OBJ_FLAG_SCROLL_CHAIN | LV_OBJ_FLAG_GESTURE_BUBBLE);*/

    // 构建UI组件
    init_bar_cpu_temp();

    init_icon();

    arc_cpu = init_arcs(68, "CPU");
    arc_mem = init_arcs(lv_obj_get_x2(arc_cpu) + 30, "MEM");

    init_disk_bar();

    // 添加小猫GIF动图
    gif_cat_lv = lv_gif_create(container);
    lv_gif_set_src(gif_cat_lv, &gif_cat);
    lv_obj_set_pos(gif_cat_lv, 97, 163);
    lv_obj_add_event_cb(tv, tv_replace_event_cb, LV_EVENT_VALUE_CHANGED, NULL);

    init_labels();

    // 初始时间控件
    init_date_time(tv);

    // 手动先调用一遍,随便传入一个指针不为空的
    timer_refresh_system_monitor(arc_cpu);
    pthread_create(&sys_thread, NULL, timer_refresh_system_monitor, NULL);
}

static void on_page_destoy(void * params)
{}

static lv_obj_t * page_get_view()
{
    return tv;
}

ui_data_t page_monitor = {.id            = PAGE_MONITOR_STYLE1,
                          .launcher_mode = SINGLE_TASK,
                          //.launcher      = true,
                          .fun_get_view  = page_get_view,
                          .fun_on_create = on_page_create,
                          .fun_on_destoy = on_page_destoy};
