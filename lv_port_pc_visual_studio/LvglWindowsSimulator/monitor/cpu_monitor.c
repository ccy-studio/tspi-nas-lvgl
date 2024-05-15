#include "cpu_monitor.h"
#include "string.h"
#include <stdlib.h>
#include <time.h>

// 生成指定范围内的随机整数
extern int generate_random_int(int min, int max);

// double get_sys_cpu_usage() {
//     return generate_random_int(1, 90);
// }
// double get_sys_cpu_temp()
//{
//     return generate_random_int(10,80);
// }
// void get_sys_cpu(cpu_info_t* info) {
//     info->core_num = 32;
//     info->temp     = 30.3;
//     info->usage    = 12.5;
//     strcpy(info->model_name, "ARMv7 Processor rev 5(v7l)");
// }

void get_sys_cpu_usage(cpu_info_t * info)
{
    info->usage = 12.5;
}
void get_sys_cpu_temp(cpu_info_t * info)
{
    info->temp = 30.3;
}
void get_sys_cpu(cpu_info_t * info)
{
    info->core_num = 32;
    info->temp     = 30.3;
    info->usage    = 12.5;
    strcpy(info->model_name, "ARMv7 Processor rev 5(v7l)");
}
