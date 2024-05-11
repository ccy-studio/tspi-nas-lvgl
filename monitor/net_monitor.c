#include "net_monitor.h"
#include <unistd.h>


static void get_net_speed(unsigned long long* rx_bytes,
                          unsigned long long* tx_bytes,
                          char* net_name) {
    FILE* fp;
    char buffer[256];

    // 打开 /proc/net/dev 文件
    fp = fopen("/proc/net/dev", "r");
    if (fp == NULL) {
        perror("Error opening /proc/net/dev");
        exit(EXIT_FAILURE);
    }

    // 查找指定网络接口的行
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        if (strstr(buffer, net_name) != NULL) {
            // 解析接收和发送的字节数
            sscanf(buffer + strlen(net_name) + 1,
                   " %llu %*u %*u %*u %*u %*u %*u %*u %*u %llu", rx_bytes,
                   tx_bytes);
            break;
        }
    }
    fclose(fp);
}

void get_sys_current_net_speed(net_info_t* net_info) {
    if (strlen(net_info->net_name) <= 0) {
        return;
    }

    unsigned long long rx_bytes_prev, tx_bytes_prev;
    unsigned long long rx_bytes_curr, tx_bytes_curr;

    // 获取初始接收和发送字节数
    get_net_speed(&rx_bytes_prev, &tx_bytes_prev, net_info->net_name);
    sleep(1);
    while (1) {
        // 获取当前的接收和发送字节数
        get_net_speed(&rx_bytes_curr, &tx_bytes_curr, net_info->net_name);

        // 计算接收和发送速度（字节/秒）
        net_info->rx_speed = (rx_bytes_curr - rx_bytes_prev) / 1 / 1024.0;
        net_info->tx_speed = (tx_bytes_curr - tx_bytes_prev) / 1 / 1024.0;

        // 转换为Kbit/s和Mbit/s
        // rx_speed *= 8;  // 转换为Kbit/s
        // tx_speed *= 8;  // 转换为Kbit/s

        // 更新前一个值
        rx_bytes_prev = rx_bytes_curr;
        tx_bytes_prev = tx_bytes_curr;

        // 每秒钟更新一次速度信息
        sleep(1);
    }
}