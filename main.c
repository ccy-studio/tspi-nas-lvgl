/*
 * @Description:
 * @Blog: saisaiwa.com
 * @Author: ccy
 * @Date: 2024-04-24 10:34:42
 * @LastEditTime: 2024-05-13 09:53:50
 */
#include <pthread.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include "app/application.h"
// #include "lvgl/demos/lv_demos.h"
#include "lvgl/lvgl.h"

extern monitor_params_t monitor_dat;

int extractData(int argc, char* argv[], char* buf, const char* key) {
    // 遍历命令行参数，查找指定前缀的数据
    for (int i = 1; i < argc; i++) {
        if (strncmp(argv[i], key, strlen(key)) == 0) {
            // 找到指定前缀的数据，将数据填充到buf中
            if (i + 1 < argc) {
                strcpy(buf, argv[i + 1]);
                return 0;  // 返回0表示找到数据
            } else {
                return -2;  // 参数不足，返回-2
            }
        }
    }
    return -1;  // 返回-1表示未找到数据
}

int main(int argc, char** argv) {
    char flag_fb[2] = "0";
    char flag_ev[2] = "1";

    extractData(argc, argv, flag_fb, "-fb");
    extractData(argc, argv, flag_ev, "-evdev");
    extractData(argc, argv, monitor_dat.disk_name, "-disk");
    extractData(argc, argv, monitor_dat.net_name, "-net");
    if(extractData(argc, argv, NULL, "-h") == -2){
        printf("\tNAS MONITOR Helper\n \
        INPUT:-fb DESC: Display Output; Example: -fb 0\n \
        INPUT:-evdev DESC: Touch the input subsystem used; Example:-evdev 1\n \
        INPUT:-disk DESC: The hard drive to be monitored; Example: -disk /dev/sda1\n \
        INPUT:-net DESC: The name of the NIC to which you want to monitor the network speed; Example: -net eth0\n");
        return 0;
    }

    char fb[41] = "/dev/fb";
    char evdev[41] = "/dev/input/event";

    strcat(fb, flag_fb);
    strcat(evdev, flag_ev);

    lv_init();

    /*Linux frame buffer device init*/
    // 设置屏幕尺寸
    lv_display_t* disp = lv_linux_fbdev_create(DISP_WIDTH, DISP_HIGHT);
    lv_linux_fbdev_set_file(disp, fb);

    // 初始化Inpu输入子系统. 这里需要设置
    lv_indev_t* cdev = lv_evdev_create(LV_INDEV_TYPE_POINTER, evdev);
    lv_evdev_set_swap_axes(cdev, true);  // 设置xy交换翻转
    lv_evdev_set_calibration(cdev, 0, 0, DISP_WIDTH,
                             DISP_HIGHT);  // 设置触摸最大范围和最小范围

    /*Create a Demo*/
    // lv_demo_widgets();

    // 启动
    app_lunch();

    /*Handle LVGL tasks*/
    while (1) {
        lv_timer_handler();
        usleep(5000);
    }

    return 0;
}
