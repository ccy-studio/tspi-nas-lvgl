#include "net_monitor.h"
#include <unistd.h>

static void get_net_speed(unsigned long long* rx_bytes,
                          unsigned long long* tx_bytes,
                          char* net_name) {
    FILE* fp;
    static char buffer[256];
    // 打开 /proc/net/dev 文件
    fp = fopen("/proc/net/dev", "r");
    if (fp == NULL) {
        perror("Error opening /proc/net/dev");
        exit(EXIT_FAILURE);
    }

    // 查找指定网络接口的行
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        if (strstr(buffer, net_name) != NULL) {
            // printf("NET:%s\n",buffer);
            // 解析接收和发送的字节数
            sscanf(buffer, " %*s %llu %*u %*u %*u %*u %*u %*u %*u %llu",
                   rx_bytes, tx_bytes);
            // printf("rx_bytes: %llu\n", *rx_bytes);
            // printf("tx_bytes: %llu\n", *tx_bytes);
            break;
        }
    }
    fclose(fp);
    fp = NULL;
    memset(buffer, 0, sizeof(buffer));
}

static void format_bytes(unsigned long long bytes, char* buf) {
    if (bytes < 1024 * 1024) {
        sprintf(buf, "%.2f/KB", (double)(bytes / 1024.0));
    } else {
        sprintf(buf, "%.2f/MB", (double)(bytes / (1024.0 * 1024.0)));
    }
}

void get_sys_current_net_speed(net_info_t* net_info) {
    if (strlen(net_info->net_name) <= 0) {
        return;
    }

    static unsigned long long rx_bytes_prev, tx_bytes_prev;
    static unsigned long long rx_bytes_curr, tx_bytes_curr;

    // 获取当前的接收和发送字节数
    get_net_speed(&rx_bytes_curr, &tx_bytes_curr, net_info->net_name);

    memset(net_info->rx_speed, 0, strlen(net_info->rx_speed));
    memset(net_info->tx_speed, 0, strlen(net_info->tx_speed));

    format_bytes(rx_bytes_curr - rx_bytes_prev, net_info->rx_speed);
    format_bytes(tx_bytes_curr - tx_bytes_prev, net_info->tx_speed);
    // 更新前一个值
    rx_bytes_prev = rx_bytes_curr;
    tx_bytes_prev = tx_bytes_curr;
}