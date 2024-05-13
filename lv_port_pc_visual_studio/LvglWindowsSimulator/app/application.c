/*
 * @Description: 
 * @Blog: saisaiwa.com
 * @Author: ccy
 * @Date: 2024-04-24 17:35:35
 * @LastEditTime: 2024-05-13 09:54:19
 */
#include "application.h"

extern ui_data_t page_lunch;
extern ui_data_t page_monitor;

static ui_data_t* pages[] = {&page_lunch, &page_monitor};

/**
 * @brief 初始化页面加载，启动app
 */
void app_lunch() {
    ui_init_and_start(pages, sizeof(pages));
}
