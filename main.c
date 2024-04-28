/*
 * @Description:
 * @Blog: saisaiwa.com
 * @Author: ccy
 * @Date: 2024-04-24 10:34:42
 * @LastEditTime: 2024-04-24 15:18:32
 */
#include <pthread.h>
#include <time.h>
#include <unistd.h>
#include "lvgl/demos/lv_demos.h"
#include "lvgl/lvgl.h"

int main(int argc, char** argv) {
    lv_init();

    /*Linux frame buffer device init*/
    // 设置屏幕尺寸
    lv_display_t* disp = lv_linux_fbdev_create(DISP_WIDTH, DISP_HIGHT);
    lv_linux_fbdev_set_file(disp, "/dev/fb0");

    // 初始化Inpu输入子系统. 这里需要设置
    lv_indev_t* cdev =
        lv_evdev_create(LV_INDEV_TYPE_POINTER, "/dev/input/event0");
    lv_evdev_set_swap_axes(cdev, true);  // 设置xy交换翻转
    lv_evdev_set_calibration(cdev, 0, 0, DISP_WIDTH,
                             DISP_HIGHT);  // 设置触摸最大范围和最小范围

    /*Create a Demo*/
    lv_demo_widgets();

    /*Handle LVGL tasks*/
    while (1) {
        lv_timer_handler();
        usleep(5000);
    }

    return 0;
}
