#include "application.h"

extern ui_data_t page_lunch;
extern ui_data_t page_monitor;

static ui_data_t* pages[] = {&page_lunch, &page_monitor};

// 监视器初始参数
monitor_params_t monitor_dat = {.disk_name = "/", .net_name = "eth0"};

/**
 * @brief 初始化页面加载，启动app
 */
void app_lunch() {
    ui_init_and_start(pages, sizeof(pages));
}
