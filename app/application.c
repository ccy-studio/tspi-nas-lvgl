#include "application.h"

extern ui_data_t page_lunch;

static ui_data_t* pages[] = {
    &page_lunch
};

/**
 * @brief 初始化页面加载，启动app
 */
void app_lunch() {
    ui_init_and_start(pages, sizeof(pages));
}
