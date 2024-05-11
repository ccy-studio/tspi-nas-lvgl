#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char net_name[20];  // 网卡名称
    double rx_speed;    // 单位Kbyte
    double tx_speed;    // 单位Kbyte
} net_info_t;

void get_sys_current_net_speed(net_info_t* net_info);

#ifdef __cplusplus
}
#endif