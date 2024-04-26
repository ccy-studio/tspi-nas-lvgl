#include "application.h"

static lv_obj_t* container;

static void on_page_create(ui_data_t* ui_dat, void* params) {
    container = lv_obj_create(NULL);
    lv_obj_t* label = lv_label_create(container);
    lv_label_set_text_fmt(label, "Hello %d\n", 123);
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
