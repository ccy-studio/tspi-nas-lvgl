#include "net_monitor.h"
#include "string.h"
#include <stdlib.h>
#include <time.h>

// 生成指定范围内的随机整数
int generate_random_int(int min, int max)
{
    return min + rand() % (max - min + 1);
}

static void get_net_speed(unsigned long long * rx_bytes, unsigned long long * tx_bytes, char * net_name)
{

    srand(time(NULL));

    // 模拟网速，生成随机的rx_bytes和tx_bytes
    *rx_bytes = generate_random_int(10000000, 100000000000); // 假设范围在1000到10000之间
    *tx_bytes = generate_random_int(10000000, 100000000000); // 假设范围在1000到10000之间
}


static void format_bytes(unsigned long long bytes, char * buf)
{
    if(bytes < 1024 * 1024) {
        sprintf(buf, "%.2f/KB", (double)(bytes / 1024.0));
    } else {
        sprintf(buf, "%.2f/MB", (double)(bytes / (1024.0 * 1024.0)));
    }
}

void get_sys_current_net_speed(net_info_t * net_info)
{
    if(strlen(net_info->net_name) <= 0) {
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
