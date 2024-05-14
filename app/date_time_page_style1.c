#include "application.h"

static lv_obj_t* container;
static lv_obj_t* label_week;
static lv_obj_t* label_date;
static lv_obj_t* label_time_hour;
static lv_obj_t* label_time_minute;
static lv_obj_t* label_time_second;

pthread_t sys_date_timer;

static datetime_t datetime;

LV_IMG_DECLARE(img_datetime)
LV_IMG_DECLARE(gif_radiantboy)

static void init_date_time_widget();
static void refresh_ui_timer();
static void* timer_refresh_datetime(void* arg);

void init_date_time(lv_obj_t* root) {
    // 初始化时间表盘
    container = lv_tileview_add_tile(root, 1, 0, LV_DIR_HOR);
    lv_obj_set_style_bg_image_src(container, &img_datetime, 0);
    lv_obj_set_style_bg_opa(container, 255, 0);

    // 添加GIF动图
    lv_obj_t* gif = lv_gif_create(container);
    lv_gif_set_src(gif, &gif_radiantboy);
    lv_obj_set_pos(gif, 112, 40);

    init_date_time_widget();

    pthread_create(&sys_date_timer, NULL, timer_refresh_datetime, NULL);
}

static void init_date_time_widget() {
    label_week = lv_label_create(container);
    label_date = lv_label_create(container);
    set_label_style(label_week, lv_color_hex(0xACF48C), 129, 217, &douyin_12);
    set_label_style(label_date, lv_color_hex(0xACF48C), 233, 217, &douyin_12);

    label_time_hour = lv_label_create(container);
    label_time_minute = lv_label_create(container);
    label_time_second = lv_label_create(container);
    set_label_style(label_time_hour, lv_color_hex(0x2EFC33), 208, 64,
                    &font_dignum);
    set_label_style(label_time_minute, lv_color_hex(0x2EFC33), 208, 128,
                    &font_dignum);
    set_label_style(label_time_second, lv_color_hex(0x2EFC33), 282, 166,
                    &douyin_12);

    /*lv_label_set_text(label_week, "星期五");
    lv_label_set_text(label_date, "24年 5月/3日");
    lv_label_set_text(label_time_hour, "18");
    lv_label_set_text(label_time_minute, "00");*/
}

static void* timer_refresh_datetime(void* arg) {
    printf("========创建线程 timer_refresh_datetime\n");
    while (true) {
        get_current_datetime(&datetime);
        printf("当前时间：%d年%d月%d日 %d时%d分%d秒 %s\n", datetime.year,
               datetime.month, datetime.day, datetime.hour, datetime.minute,
               datetime.second, datetime.week_str);
		lv_async_call(refresh_ui_timer,NULL);
        my_sleep(500);
    }
    return NULL;
}

static void refresh_ui_timer() {
    lv_label_set_text(label_week, datetime.week_str);
    lv_label_set_text_fmt(
        label_date, "%" LV_PRId32 "年 %02" LV_PRId32 "月/%02" LV_PRId32 "日",
        datetime.year % 100, datetime.month, datetime.day);
    lv_label_set_text_fmt(label_time_hour, "%02" LV_PRId32, datetime.hour);
    lv_label_set_text_fmt(label_time_minute, "%02" LV_PRId32, datetime.minute);
    lv_label_set_text_fmt(label_time_second, "%02" LV_PRId32, datetime.second);
}
