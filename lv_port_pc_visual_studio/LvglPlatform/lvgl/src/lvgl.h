/**
 * @file lvgl.h
 * This file exists only to be compatible with Arduino's library structure
 */

#ifndef LVGL_SRC_H
#define LVGL_SRC_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#include "../lvgl.h"
#include "lv_conf_internal.h"

/*********************
 *      DEFINES
 *********************/

#define pthread_t lv_timer_t *

void inline pthread_create(void * arg1, void * arg2, void * arg3, void * arg4)
{
    /*lv_timer_create(arg3, 500, arg4);*/
}
/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*LVGL_SRC_H*/
