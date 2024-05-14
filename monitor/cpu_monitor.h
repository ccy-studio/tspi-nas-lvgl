#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    double usage;
    double temp;
    char model_name[46];
    unsigned int core_num;
} cpu_info_t;

void get_sys_cpu_usage(cpu_info_t* info);
void get_sys_cpu_temp(cpu_info_t* info);
void get_sys_cpu(cpu_info_t* info);

#ifdef __cplusplus
}
#endif