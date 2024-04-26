#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "uikit/ui.h"
#include "uikit/data_bus.h"


    /* LVGL-9 */

#define APP_VERSION "v1.0.0" /*版本信息*/
#define APP_VERSION_CODE 1 /*版本信息*/
#define APP_NAME "TSPI_MONITOR" /*产品名称*/


    /**
     * @brief 页面ID定义
     */
    typedef enum {
        PAGE_LUNCH,
        PAGE_HOME,
        PAGE_DATETIME,
    } page_id_t;


    typedef struct {
        uint8_t cpu_rate; //CPU使用率百分比
        double mem_use; //已用内存
        double mem_total; //总内存
        double mem_free; //可用内存
        uint8_t mem_rate; //内存占用百分比

    } monitor_t;


    void app_lunch();

#ifdef __cplusplus
}
#endif
