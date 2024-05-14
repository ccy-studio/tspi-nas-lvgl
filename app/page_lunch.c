#include "application.h"

static lv_obj_t * container;
static ui_data_t * ui;

LV_IMG_DECLARE(img_start_lunch)

static void timer_cb(lv_timer_t * timer)
{
    ui_intent_t intent;
    intent.anim = true; //开启页面切换动画
    ui_fun_fast_create_intent(ui, PAGE_MONITOR_STYLE1, &intent);
    ui_fun_start_activity(&intent);
    // 销毁当前页面
    ui_fun_finish(ui, false);
}

static void on_page_create(ui_data_t * ui_dat, void * params)
{
    ui        = ui_dat;
    container = lv_image_create(lv_screen_active());
    lv_img_set_src(container, &img_start_lunch);

    lv_timer_t * timer = lv_timer_create(timer_cb, 1000, NULL);
    lv_timer_set_repeat_count(timer, 1);
}

static void on_page_destoy(void * params)
{}

static lv_obj_t * page_get_view()
{
    return container;
}

ui_data_t page_lunch = {.id = PAGE_LUNCH,
                        .launcher      = true,
                        .launcher_mode = SINGLE_TASK,
                        .fun_get_view  = page_get_view,
                        .fun_on_create = on_page_create,
                        .fun_on_destoy = on_page_destoy};
