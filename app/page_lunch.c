#include "application.h"

static lv_obj_t* container;


static void event_handler(lv_event_t* e)
{
    lv_event_code_t code = lv_event_get_code(e);

    if (code == LV_EVENT_CLICKED) {
        LV_LOG_USER("Clicked");
    }
    else if (code == LV_EVENT_VALUE_CHANGED) {
        LV_LOG_USER("Toggled");
    }
}



static void on_page_create(ui_data_t* ui_dat, void* params) {
    container = lv_obj_create(NULL);
    lv_obj_t* label = lv_label_create(container);
    lv_label_set_text_fmt(label, "Hello %d\n", 123);

    //add一个按钮
    lv_obj_t* btn = lv_btn_create(container);
    lv_obj_add_event_cb(btn, event_handler, LV_EVENT_ALL, NULL);
    lv_obj_align(btn, LV_ALIGN_CENTER, 0, -40);
    lv_obj_remove_flag(btn, LV_OBJ_FLAG_PRESS_LOCK);

    label = lv_label_create(btn);
    lv_label_set_text(label, "Button");
    lv_obj_center(label);
}


static void on_page_destoy(void* params) {

}

static lv_obj_t* page_get_view() {
    return container;
}

ui_data_t page_lunch = {
    .id = PAGE_LUNCH,
    .launcher = true,
    .launcher_mode = SINGLE_TASK,
    .fun_get_view = page_get_view,
    .fun_on_create = on_page_create,
    .fun_on_destoy = on_page_destoy
};
