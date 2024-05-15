#include "memory_monitor.h"
#include <string.h>


/**
 * 返回的结果是Kbyte
 */
void get_sys_memory_usage(mem_info_t* info) {
    info->memory_size             = 3782700;
    info->memory_free_count       = 136368;
    unsigned long long buffers_kb = 205188;
    unsigned long long cached_kb  = 932964;
    // Calculate used memory including buffers and cached
    info->memory_use_count =
        info->memory_size - info->memory_free_count - buffers_kb - cached_kb;
    // 计算百分比
    info->memory_use_percent =
        ((double)info->memory_use_count / info->memory_size) * 100.0;
}


void format_sys_mem_str(unsigned long long size, char * result)
{
    static const char * units[] = {"B", "KB", "MB", "GB"}; // 后缀单位
    int index                   = 1;
    double size_dbl             = (double)size; // 将输入转换为浮点数以进行除法运算
    while(size_dbl >= 1024 && index < 3) {      // 检查是否需要转换单位
        size_dbl /= 1024;
        index++;
    }
    sprintf(result, "%.2f %s", size_dbl, units[index]); // 将结果格式化为字符串
    return result;
}
