#include "cpu_monitor.h"
#include <string.h>
#include <unistd.h>

typedef struct cpu_occupy_  // 定义一个cpu occupy的结构体
{
    char name[20];      // 定义一个char类型的数组名name有20个元素
    unsigned int user;  // 定义一个无符号的int类型的user
    unsigned int nice;  // 定义一个无符号的int类型的nice
    unsigned int system;  // 定义一个无符号的int类型的system
    unsigned int idle;    // 定义一个无符号的int类型的idle
    unsigned int iowait;
    unsigned int irq;
    unsigned int softirq;
} cpu_occupy_t;

double cal_cpuoccupy(cpu_occupy_t* o, cpu_occupy_t* n) {
    double od, nd;
    double id, sd;
    double cpu_use;

    od = (double)(o->user + o->nice + o->system + o->idle + o->softirq +
                  o->iowait +
                  o->irq);  // 第一次(用户+优先级+系统+空闲)的时间再赋给od
    nd = (double)(n->user + n->nice + n->system + n->idle + n->softirq +
                  n->iowait +
                  n->irq);  // 第二次(用户+优先级+系统+空闲)的时间再赋给od

    id = (double)(n->idle);  // 用户第一次和第二次的时间之差再赋给id
    sd = (double)(o->idle);  // 系统第一次和第二次的时间之差再赋给sd
    if ((nd - od) != 0)
        cpu_use =
            100.0 -
            ((id - sd)) / (nd - od) *
                100.00;  //((用户+系统)乖100)除(第一次和第二次的时间差)再赋给g_cpu_used
    else
        cpu_use = 0;
    return cpu_use;
}

void get_cpuoccupy(cpu_occupy_t* cpust) {
    FILE* fd;
    int n;
    char buff[256];
    cpu_occupy_t* cpu_occupy;
    cpu_occupy = cpust;

    fd = fopen("/proc/stat", "r");
    if (fd == NULL) {
        perror("fopen:");
        exit(0);
    }
    fgets(buff, sizeof(buff), fd);

    sscanf(buff, "%s %u %u %u %u %u %u %u", cpu_occupy->name, &cpu_occupy->user,
           &cpu_occupy->nice, &cpu_occupy->system, &cpu_occupy->idle,
           &cpu_occupy->iowait, &cpu_occupy->irq, &cpu_occupy->softirq);

    fclose(fd);
}

void get_sys_cpu_usage(cpu_info_t* info) {
    cpu_occupy_t cpu_stat1;
    cpu_occupy_t cpu_stat2;
    double cpu;
    get_cpuoccupy((cpu_occupy_t*)&cpu_stat1);
    sleep(1);
    // 第二次获取cpu使用情况
    get_cpuoccupy((cpu_occupy_t*)&cpu_stat2);

    // 计算cpu使用率
    cpu = cal_cpuoccupy((cpu_occupy_t*)&cpu_stat1, (cpu_occupy_t*)&cpu_stat2);

    info->usage = cpu;
}

void get_sys_cpu_temp(cpu_info_t* info) {
    FILE* fd;
    long temp;
    fd = fopen("/sys/class/thermal/thermal_zone0/temp", "r");
    if (fd == NULL) {
        perror("get_sys_cpu_temp:");
        return 0;
    }
    fscanf(fd, "%ld", &temp);

    fclose(fd);
    info->temp = temp / 1000.0;
}

void get_sys_cpu_name(char* name) {
    FILE* fd;
    fd = popen("cat /proc/cpuinfo | grep 'model name'", "r");
    if (fd == NULL) {
        perror("get_sys_cpu_name:");
        return;
    }
    fscanf(fd, "%*[^:]:%[^\n]", name);
    pclose(fd);

    if (strlen(name) <= 0) {
        memset(name, 0, strlen(name));
        strcpy(name, "ARM Cortex-A55 RK3566");
    }
}

unsigned int get_sys_cpu_core_num() {
    FILE* fd;
    unsigned int core;
    fd = popen("cat /proc/cpuinfo | grep 'processor' | wc -l", "r");
    if (fd == NULL) {
        perror("get_sys_cpu_core_num:");
        return 0;
    }
    fscanf(fd, "%d", &core);
    pclose(fd);
    return core;
}

void get_sys_cpu(cpu_info_t* info) {
    get_sys_cpu_usage(info);
    get_sys_cpu_temp(info);
    info->core_num = get_sys_cpu_core_num();
    get_sys_cpu_name(info->model_name);
}