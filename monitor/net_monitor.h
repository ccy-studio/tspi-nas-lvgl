#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char net_name[20];  // 网卡名称
    char rx_speed[50];
    char tx_speed[50];
} net_info_t;

void get_sys_current_net_speed(net_info_t* net_info);

#ifdef __cplusplus
}
#endif