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
#include "lvgl/demos/lv_demos.h"
#include "lvgl/lvgl.h"

int main(int argc, char** argv) {
    char* flag_fb = NULL;
    char* flag_ev = NULL;

    // 遍历所有的命令行参数
    for (int i = 1; i < argc; ++i) {
        // 检查当前参数是否是标志 "-fb"
        if (strcmp(argv[i], "-fb") == 0) {
            // 检查下一个参数是否存在，并且它不是另一个标志
            if (i + 1 < argc && argv[i + 1][0] != '-') {
                flag_fb = argv[i + 1];
                // 跳过下一个参数，因为它是已处理的值
                ++i;
            } else {
                printf("-fb is missing a value\n");
            }
        }
        // 类似地处理 "-ev"
        else if (strcmp(argv[i], "-ev") == 0) {
            if (i + 1 < argc && argv[i + 1][0] != '-') {
                flag_ev = argv[i + 1];
                ++i;
            } else {
                printf("-ev is missing a value\n");
            }
        }
        // 处理其他标志...
        else {
            printf("Unknown flag: %s\n", argv[i]);
        }
    }

    // 输出处理后的标志及其值
    if (flag_fb == NULL) {
        printf("Place Input fb num: exmple: 0\n");
        return -1;
    }
    if (flag_ev == NULL) {
        printf("Place Input evdev num: exmple: 1\n");
        return -1;
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
