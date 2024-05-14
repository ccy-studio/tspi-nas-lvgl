#include "util.h"
#include <time.h>

#ifdef LV_LINUX
#include <unistd.h>
#endif

const char* format_time(uint32_t run_second) {
    int hours, minutes, seconds;
    hours = run_second / 3600;
    minutes = (run_second % 3600) / 60;
    seconds = (run_second % 3600) % 60;
    const char str[50] = {0};
    if (hours > 0) {
        sprintf(str, "%d小时%d分钟%d秒", hours, minutes, seconds);
    } else if (minutes > 0) {
        sprintf(str, "%d分钟%d秒", minutes, seconds);
    } else {
        sprintf(str, "%d秒", seconds);
    }
    return str;
}

/**
 * @brief 设置字体样式
 * @param label 组件
 * @param color 颜色
 * @param x x
 * @param y y
 * @param font 字体
 */
void set_label_style(lv_obj_t* label,
                     lv_color_t color,
                     int32_t x,
                     int32_t y,
                     lv_font_t* font) {
    lv_obj_set_width(label, LV_SIZE_CONTENT);
    lv_obj_set_height(label, LV_SIZE_CONTENT);
    lv_obj_set_x(label, x);
    lv_obj_set_y(label, y);
    lv_obj_set_style_text_color(label, color, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(label, font, LV_PART_MAIN | LV_STATE_DEFAULT);
}

void get_current_datetime(datetime_t* current_time) {
    time_t raw_time;
    struct tm* time_info;

    time(&raw_time);
    time_info = localtime(&raw_time);

    current_time->hour = time_info->tm_hour;
    current_time->minute = time_info->tm_min;
    current_time->second = time_info->tm_sec;
    current_time->week = time_info->tm_wday;
    current_time->year =
        time_info->tm_year + 1900;  // tm_year表示自1900年以来的年数
    current_time->month = time_info->tm_mon + 1;  // tm_mon表示月份，从0开始
    current_time->day = time_info->tm_mday;

    // 设置星期字符串
    switch (current_time->week) {
        case 0:
            current_time->week_str = "星期日";
            break;
        case 1:
            current_time->week_str = "星期一";
            break;
        case 2:
            current_time->week_str = "星期二";
            break;
        case 3:
            current_time->week_str = "星期三";
            break;
        case 4:
            current_time->week_str = "星期四";
            break;
        case 5:
            current_time->week_str = "星期五";
            break;
        case 6:
            current_time->week_str = "星期六";
            break;
        default:
            current_time->week_str = "--";
    }
}

void my_sleep(unsigned int milliseconds) {
#ifdef LV_LINUX
    usleep(milliseconds * 1000);
#endif
}