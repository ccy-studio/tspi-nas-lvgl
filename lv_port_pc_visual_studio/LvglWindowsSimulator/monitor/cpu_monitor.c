#include "cpu_monitor.h"
#include "string.h"


double get_sys_cpu_usage() {
    return 12.4;
}
double get_sys_cpu_temp()
{
    return 30.3;
}
void get_sys_cpu(cpu_info_t* info) {
    info->core_num = 32;
    info->temp     = 30.3;
    info->usage    = 12.5;
    strcpy(info->model_name, "ARMv7 Processor rev 5(v7l)");
}
