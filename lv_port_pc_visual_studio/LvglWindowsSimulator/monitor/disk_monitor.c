#include "disk_monitor.h"
#include "string.h"

// 获取磁盘空间
void get_sys_disk_usage(disk_info_t * disk_info, char * fs_name)
{
    strcpy(disk_info->fs, "/");
    strcpy(disk_info->mount, "ubi0:rootfs");
    strcpy(disk_info->size, "67.1Mb");
    strcpy(disk_info->used, "12.1Mb");
    strcpy(disk_info->avail, "22Mb");
    strcpy(disk_info->use_percent, "70%");
}
