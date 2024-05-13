#include "application.h"

static lv_obj_t * container;
static lv_obj_t * label_week;
static lv_obj_t * label_date;
static lv_obj_t * label_time_hour;
static lv_obj_t * label_time_minute;
static lv_obj_t * label_time_second;

lv_timer_t * timer;

LV_IMG_DECLARE(img_datetime)
LV_IMG_DECLARE(gif_radiantboy)

// static void guest_move_event_cb(lv_event_t * e)
//{
//     lv_event_code_t event_code = lv_event_get_code(e);
//     uint32_t i;
//     for(i = 0; i < lv_obj_get_child_count(e->user_data); i++) {
//         lv_obj_t * tile_obj = lv_obj_get_child(e->user_data, i);
//         if(lv_tileview_get_tile_active(e->user_data) == tile_obj) {
//             break;
//         }
//     }
//     i++;
//     if(i >= lv_obj_get_child_count(e->user_data)) {
//         i = 0;
//     }
//     lv_log("切换页面：i=%d\n", i);
//     lv_tileview_set_tile_by_index(e->user_data, i, 0, LV_ANIM_ON);
// }

static void init_date_time_widget();

static void timer_refresh_datetime(lv_timer_t * timer);

void init_date_time(lv_obj_t * root)
{
    // 添加滑动切换页面功能
    // lv_obj_add_event_cb(root, guest_move_event_cb, LV_EVENT_GESTURE, root);

    // 初始化时间表盘
    container = lv_tileview_add_tile(root, 1, 0, LV_DIR_HOR);
    lv_obj_set_style_bg_image_src(container, &img_datetime, 0);
    lv_obj_set_style_bg_opa(container, 255, 0);

    // 添加小猫GIF动图
    lv_obj_t * gif = lv_gif_create(container);
    lv_gif_set_src(gif, &gif_radiantboy);
    lv_obj_set_pos(gif, 112, 40);

    init_date_time_widget();

    timer = lv_timer_create(timer_refresh_datetime, 500, NULL);
}

static void init_date_time_widget()
{
    label_week = lv_label_create(container);
    label_date = lv_label_create(container);
    set_label_style(label_week, lv_color_hex(0xACF48C), 129, 217, &douyin_12);
    set_label_style(label_date, lv_color_hex(0xACF48C), 233, 217, &douyin_12);

    label_time_hour   = lv_label_create(container);
    label_time_minute = lv_label_create(container);
    label_time_second = lv_label_create(container);
    set_label_style(label_time_hour, lv_color_hex(0x2EFC33), 208, 64, &font_dignum);
    set_label_style(label_time_minute, lv_color_hex(0x2EFC33), 208, 128, &font_dignum);
    set_label_style(label_time_second, lv_color_hex(0x2EFC33), 282, 166, &douyin_12);

    /*lv_label_set_text(label_week, "星期五");
    lv_label_set_text(label_date, "24年 5月/3日");
    lv_label_set_text(label_time_hour, "18");
    lv_label_set_text(label_time_minute, "00");*/
}

static void timer_refresh_datetime(lv_timer_t * timer)
{
    static datetime_t datetime;
    get_current_datetime(&datetime);
   /* printf("当前时间：%d年%d月%d日 %d时%d分%d秒 %s\n", datetime.year, datetime.month, datetime.day, datetime.hour,
           datetime.minute, datetime.second, datetime.week_str);*/

    lv_label_set_text(label_week, datetime.week_str);
    lv_label_set_text_fmt(label_date, "%" LV_PRId32 "年 %02" LV_PRId32 "月/%02" LV_PRId32 "日", datetime.year % 100,
                          datetime.month, datetime.day);
    lv_label_set_text_fmt(label_time_hour, "%02" LV_PRId32, datetime.hour);
    lv_label_set_text_fmt(label_time_minute, "%02" LV_PRId32, datetime.minute);
    lv_label_set_text_fmt(label_time_second, "%02" LV_PRId32, datetime.second);
}
