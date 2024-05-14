#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "uikit/ui.h"
#include "uikit/data_bus.h"
#include "uikit/util.h"
#include <pthread.h>

/* LVGL-9 */

#define APP_VERSION "v1.0.0"    /*版本信息*/
#define APP_VERSION_CODE 1      /*版本信息*/
#define APP_NAME "TSPI_MONITOR" /*产品名称*/

#define SYS_MONITOR_DISK_NAME "/" //监控的硬盘名称
#define SYS_NET_NAME "wlan0" //监控的网口

/*加载字体声明*/
LV_FONT_DECLARE(douyin_12);
LV_FONT_DECLARE(douyin_10);
LV_FONT_DECLARE(font_dignum);

/**
 * @brief 页面ID定义
 */
typedef enum {
    PAGE_LUNCH,
    PAGE_MONITOR_STYLE1,
} page_id_t;

void app_lunch();

#ifdef __cplusplus
}
#endif
