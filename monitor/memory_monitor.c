#include "memory_monitor.h"
#include <string.h>
#include <unistd.h>


#define MEMINFO_FILE "/proc/meminfo"
#define BUF_SIZE 256

// Function to extract memory information from /proc/meminfo
long get_memory_info(const char* keyword) {
    FILE* file = fopen(MEMINFO_FILE, "r");
    if (file == NULL) {
        fprintf(stderr, "Error opening %s\n", MEMINFO_FILE);
        exit(1);
    }

    char line[BUF_SIZE];
    long value = -1;

    while (fgets(line, BUF_SIZE, file)) {
        if (strstr(line, keyword)) {
            sscanf(line + strlen(keyword), "%ld", &value);
            break;
        }
    }

    fclose(file);
    return value;
}

/**
 * 返回的结果是Kbyte
 */
void get_sys_memory_usage(mem_info_t* info) {
    info->memory_size = get_memory_info("MemTotal:");
    info->memory_free_count = get_memory_info("MemFree:");
    unsigned long long buffers_kb = get_memory_info("Buffers:");
    unsigned long long cached_kb = get_memory_info("Cached:");

    // Calculate used memory including buffers and cached
    info->memory_use_count =
        info->memory_size - info->memory_free_count - buffers_kb - cached_kb;
    // 计算百分比
    info->memory_use_percent =
        ((double)info->memory_use_count / info->memory_size) * 100.0;
}

char* format_sys_mem_str(unsigned long long size) {
    static char result[20];  // 用于存储结果的静态字符数组
    const char* units[] = {"B", "KB", "MB", "GB"};  // 后缀单位
    int index = 1;

    double size_dbl = (double)size;  // 将输入转换为浮点数以进行除法运算

    while (size_dbl >= 1024 && index < 3) {  // 检查是否需要转换单位
        size_dbl /= 1024;
        index++;
    }

    sprintf(result, "%.2f %s", size_dbl, units[index]);  // 将结果格式化为字符串
    return result;
}