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
    lv_display_t* disp = lv_linux_fbdev_create(240, 320);
    lv_linux_fbdev_set_file(disp, "/dev/fb0");

    // 初始化Inpu输入子系统. 这里需要设置
    lv_evdev_create(LV_INDEV_TYPE_POINTER, "/dev/input/event0");

    /*Create a Demo*/
    lv_demo_widgets();
    lv_demo_widgets_start_slideshow();

    /*Handle LVGL tasks*/
    while (1) {
        lv_timer_handler();
        usleep(5000);
    }

    return 0;
}
