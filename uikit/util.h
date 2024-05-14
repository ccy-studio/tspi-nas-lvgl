#pragma once

#ifdef __cplusplus
extern "C" {
#endif
#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"
#include "stdbool.h"
#include "lvgl.h"

typedef struct
{
    uint8_t hour;
    uint8_t minute;
    uint8_t second;
    uint8_t week;    // 星期
    char * week_str; // 星期一，星期二等...
    int32_t year;
    uint8_t month;
    uint8_t day;

} datetime_t;

/**
 * @brief 时间格式化
 * @param run_second 单位秒
 * @return
 */
const char * format_time(uint32_t run_second);

void set_label_style(lv_obj_t * label, lv_color_t color, int32_t x, int32_t y, lv_font_t * font);

void get_current_datetime(datetime_t * dat);

void my_sleep(unsigned int milliseconds);

#ifdef __cplusplus
}
#endif
