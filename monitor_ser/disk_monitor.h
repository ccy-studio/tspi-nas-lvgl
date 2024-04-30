#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


typedef struct {
    char fs[50];
    char mount[50];
    char size[20];
    char used[20];
    char avail[20];
    char use_percent[20];
} disk_info_t;

void get_sys_disk_usage(disk_info_t* disk_info, char* fs_name);

#ifdef __cplusplus
}
#endif