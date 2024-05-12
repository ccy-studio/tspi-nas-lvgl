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

void get_sys_current_net_speed(net_info_t * net_info)
{
    if(strlen(net_info->net_name) <= 0) {
        return;
    }

    static unsigned long long rx_bytes_prev, tx_bytes_prev;
    static unsigned long long rx_bytes_curr, tx_bytes_curr;

    // 获取初始接收和发送字节数
    get_net_speed(&rx_bytes_prev, &tx_bytes_prev, net_info->net_name);

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
}
