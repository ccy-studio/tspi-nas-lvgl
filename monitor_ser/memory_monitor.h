#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct {
    unsigned long long memory_use_count;   // 内存使用量
    unsigned long long memory_free_count;  // 内存剩余可用量
    unsigned long long memory_size;        // 内存总量
    double memory_use_percent;             // 内存使用百分比
} mem_info_t;

void get_sys_memory_usage(mem_info_t* info);

/**
 * 格式化返回内存大小: kb,mb,gb
 * @size 入参字节
*/
char* format_sys_mem_str(unsigned long long size);

#ifdef __cplusplus
}
#endif