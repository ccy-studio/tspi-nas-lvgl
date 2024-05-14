#include "disk_monitor.h"
#include <unistd.h>

// 获取磁盘空间
void get_sys_disk_usage(disk_info_t* disk_info, char* fs_name) {
    FILE* fp;
    char buffer[1024];

    // 执行 df -h ? 命令并读取输出
    char command[50] = {0};
    strcpy(command, "df -h ");
    strcat(command, fs_name);
    fp = popen(command, "r");
    if (fp == NULL) {
        perror("Error executing df");
        return;
    }

    // 跳过头部信息
    fgets(buffer, sizeof(buffer), fp);
    fgets(buffer, sizeof(buffer), fp);

    // 读取挂载点和磁盘空间信息
    sscanf(buffer, "%s %s %s %s %s %s", disk_info->fs, disk_info->size,
           disk_info->used, disk_info->avail, disk_info->use_percent,
           disk_info->mount);
    pclose(fp);

    char percent_temp[20];
    strcpy(percent_temp, disk_info->use_percent);
    // 去除百分号
    if (disk_info->use_percent[strlen(disk_info->use_percent) - 1] == '%') {
        percent_temp[strlen(percent_temp) - 1] =
            '\0';  // 将百分号替换为字符串结束符
    }
    // 将剩余的部分转换为数字
    disk_info->use_percent_int = atoi(percent_temp);
}