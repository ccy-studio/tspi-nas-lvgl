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

double get_sys_cpu_usage();
double get_sys_cpu_temp();
void get_sys_cpu(cpu_info_t* info);

#ifdef __cplusplus
}
#endif
