﻿/*******************************************************************************
 * Size: 12 px
 * Bpp: 4
 * Opts: --bpp 4 --size 12 --no-compress --font DouyinSansBold.otf --symbols
 *年月日时分秒总量剩余可用星期一二三四五六天使 --range 32-127 --format lvgl -o douyin_12.c
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef DOUYIN_12
#define DOUYIN_12 1
#endif

#if DOUYIN_12

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */
    0xdc, 0xcc, 0xcb, 0xba, 0xaa, 0x76, 0x88, 0xdd,

    /* U+0022 "\"" */
    0xf, 0x3e, 0x50, 0xf3, 0xd5, 0x7, 0x16, 0x20,

    /* U+0023 "#" */
    0x0, 0x4f, 0xb, 0x90, 0x0, 0x8c, 0xf, 0x50, 0xe, 0xff, 0xff, 0xf3, 0x2, 0xf7, 0x7e, 0x20, 0x1, 0xf2, 0x9b, 0x0,
    0x6f, 0xff, 0xff, 0xb0, 0x1a, 0xc3, 0xf6, 0x10, 0xc, 0x73, 0xf1, 0x0,

    /* U+0024 "$" */
    0x0, 0x4e, 0x0, 0x0, 0x7e, 0xff, 0xa0, 0x5f, 0xbe, 0x87, 0x6, 0xf4, 0xd0, 0x0, 0x1e, 0xfe, 0x60, 0x0, 0x7, 0xff,
    0xd0, 0x0, 0x1d, 0x6f, 0x43, 0xa7, 0xec, 0xf2, 0x5d, 0xff, 0xc5, 0x0, 0x4, 0xe0, 0x0,

    /* U+0025 "%" */
    0x1b, 0xe8, 0x0, 0xc8, 0x6, 0xc2, 0xf0, 0x6d, 0x0, 0x6c, 0x2f, 0x1e, 0x40, 0x1, 0xbe, 0x89, 0xa0, 0x0, 0x0, 0x3,
    0xf5, 0xcd, 0x50, 0x0, 0xd7, 0xa8, 0x6c, 0x0, 0x7d, 0xa, 0x85, 0xc0, 0x1f, 0x30, 0x4c, 0xd5,

    /* U+0026 "&" */
    0x0, 0x9e, 0xc4, 0x0, 0x0, 0x6f, 0x39, 0xd0, 0x0, 0x2, 0xf2, 0xb7, 0x0, 0x0, 0x1d, 0xf9, 0x5, 0x50, 0x1e, 0xa6,
    0xf5, 0xd8, 0x5, 0xf2, 0x7, 0xff, 0x20, 0x3f, 0x93, 0x6f, 0xf3, 0x0, 0x6e, 0xfc, 0x4a, 0xe2,

    /* U+0027 "'" */
    0xf, 0x30, 0xf3, 0x7, 0x10,

    /* U+0028 "(" */
    0x0, 0x1, 0x0, 0xaa, 0x4, 0xf1, 0xb, 0x90, 0xe, 0x60, 0x1f, 0x40, 0x1f, 0x40, 0xe, 0x70, 0xb, 0xa0, 0x3, 0xf2, 0x0,
    0x9a,

    /* U+0029 ")" */
    0x10, 0x0, 0x9c, 0x0, 0x1f, 0x50, 0x9, 0xd0, 0x6, 0xf0, 0x3, 0xf3, 0x3, 0xf3, 0x6, 0xf0, 0x9, 0xd0, 0x1f, 0x50,
    0xab, 0x0,

    /* U+002A "*" */
    0x1, 0xb5, 0x10, 0x4e, 0xed, 0xc0, 0x1b, 0xff, 0x60, 0x28, 0xc8, 0x90, 0x0, 0x52, 0x0,

    /* U+002B "+" */
    0x0, 0x24, 0x0, 0x0, 0x7b, 0x0, 0x0, 0x7b, 0x0, 0xbf, 0xff, 0xfe, 0x12, 0x9c, 0x22, 0x0, 0x7b, 0x0,

    /* U+002C "," */
    0x39, 0x27, 0xe0, 0xa9, 0x0,

    /* U+002D "-" */
    0x2f, 0xff, 0x60, 0x22, 0x21,

    /* U+002E "." */
    0x28, 0x24, 0xf4,

    /* U+002F "/" */
    0x0, 0x0, 0x17, 0x10, 0x0, 0x7, 0xe0, 0x0, 0x0, 0xe7, 0x0, 0x0, 0x5f, 0x10, 0x0, 0xc, 0x90, 0x0, 0x3, 0xf3, 0x0,
    0x0, 0x9c, 0x0, 0x0, 0x1f, 0x50, 0x0, 0x7, 0xe0, 0x0, 0x0, 0xe7, 0x0, 0x0,

    /* U+0030 "0" */
    0x3, 0xcf, 0xd4, 0x0, 0xfb, 0x4b, 0xf0, 0x4f, 0x40, 0x4f, 0x45, 0xf3, 0x3, 0xf5, 0x5f, 0x30, 0x3f, 0x54, 0xf4, 0x4,
    0xf4, 0xf, 0xb5, 0xbf, 0x0, 0x4d, 0xfd, 0x40,

    /* U+0031 "1" */
    0x18, 0xfa, 0xaa, 0xea, 0x0, 0xda, 0x0, 0xda, 0x0, 0xda, 0x0, 0xda, 0x0, 0xda, 0x0, 0xda,

    /* U+0032 "2" */
    0x5, 0xcf, 0xc4, 0x3, 0xf8, 0x6d, 0xf0, 0x2, 0x0, 0x6f, 0x20, 0x0, 0xb, 0xd0, 0x0, 0xa, 0xe2, 0x0, 0xb, 0xe2, 0x0,
    0xc, 0xf4, 0x22, 0x5, 0xff, 0xff, 0xf4,

    /* U+0033 "3" */
    0x4f, 0xff, 0xfc, 0x1, 0x44, 0xaf, 0x50, 0x0, 0x7e, 0x30, 0x0, 0x2f, 0xfd, 0x40, 0x0, 0x34, 0xcf, 0x0, 0x0, 0x6,
    0xf2, 0x2d, 0x76, 0xde, 0x0, 0x9e, 0xfb, 0x20,

    /* U+0034 "4" */
    0x0, 0x7, 0xf6, 0x0, 0x3, 0xff, 0x60, 0x0, 0xd7, 0xe6, 0x0, 0x8c, 0xe, 0x60, 0x3f, 0x20, 0xf7, 0x9, 0xff, 0xff,
    0xf6, 0x23, 0x33, 0xf8, 0x10, 0x0, 0xe, 0x60,

    /* U+0035 "5" */
    0xe, 0xff, 0xfd, 0x0, 0xf8, 0x44, 0x30, 0x1f, 0x50, 0x0, 0x2, 0xfc, 0xec, 0x40, 0x19, 0x43, 0xbf, 0x10, 0x0, 0x4,
    0xf3, 0x3d, 0x54, 0xce, 0x10, 0x8d, 0xfc, 0x30,

    /* U+0036 "6" */
    0x0, 0x2f, 0x90, 0x0, 0xb, 0xe0, 0x0, 0x5, 0xf5, 0x0, 0x0, 0xef, 0xfd, 0x50, 0x6f, 0x94, 0xbf, 0x27, 0xf1, 0x3,
    0xf5, 0x3f, 0xa5, 0xbf, 0x20, 0x6d, 0xfc, 0x40,

    /* U+0037 "7" */
    0x9f, 0xff, 0xff, 0x24, 0x45, 0xeb, 0x0, 0x4, 0xf5, 0x0, 0xb, 0xe0, 0x0, 0x2f, 0x70, 0x0, 0x8f, 0x10, 0x0, 0xea,
    0x0, 0x6, 0xf3, 0x0,

    /* U+0038 "8" */
    0x6, 0xce, 0xb4, 0x3, 0xf9, 0x4c, 0xf0, 0x1f, 0x60, 0xad, 0x0, 0x6f, 0xff, 0x20, 0x3f, 0x83, 0xbe, 0x8, 0xf0, 0x4,
    0xf4, 0x5f, 0x94, 0xbf, 0x20, 0x7e, 0xfd, 0x50,

    /* U+0039 "9" */
    0x7, 0xdf, 0xc3, 0x5, 0xf9, 0x6d, 0xe0, 0x9f, 0x0, 0x5f, 0x37, 0xf5, 0x1a, 0xf1, 0xb, 0xff, 0xfa, 0x0, 0x1, 0x9f,
    0x10, 0x0, 0x3f, 0x70, 0x0, 0xd, 0xc0, 0x0,

    /* U+003A ":" */
    0x4f, 0x42, 0x82, 0x0, 0x0, 0x0, 0x28, 0x24, 0xf4,

    /* U+003B ";" */
    0x4f, 0x42, 0x82, 0x0, 0x0, 0x0, 0x39, 0x27, 0xe0, 0xa9, 0x0,

    /* U+003C "<" */
    0x0, 0x0, 0x48, 0x0, 0x5c, 0xf8, 0x4d, 0xe8, 0x10, 0x8f, 0x91, 0x0, 0x4, 0xbf, 0xa3, 0x0, 0x3, 0xac, 0x0, 0x0, 0x1,

    /* U+003D "=" */
    0xbf, 0xff, 0xfe, 0x11, 0x11, 0x11, 0x0, 0x0, 0x0, 0xaf, 0xff, 0xfe, 0x12, 0x22, 0x22,

    /* U+003E ">" */
    0x65, 0x0, 0x0, 0x5f, 0xe6, 0x0, 0x0, 0x6d, 0xe6, 0x0, 0x7, 0xfb, 0x29, 0xfd, 0x50, 0x8c, 0x40, 0x0, 0x10, 0x0, 0x0,

    /* U+003F "?" */
    0x1a, 0xee, 0xa0, 0x2b, 0x56, 0xf7, 0x0, 0x0, 0xe8, 0x0, 0xb, 0xe1, 0x0, 0x8e, 0x10, 0x0, 0x55, 0x0, 0x0, 0x97, 0x0,
    0x0, 0xec, 0x0,

    /* U+0040 "@" */
    0x0, 0x2a, 0xde, 0xda, 0x20, 0x4, 0xf6, 0x10, 0x17, 0xf2, 0xd, 0x73, 0xdb, 0xd7, 0x9a, 0x1f, 0x1d, 0x70, 0xe7, 0x4e,
    0x3f, 0xe, 0x40, 0xd7, 0x4e, 0x2f, 0xb, 0x71, 0xf8, 0x7b, 0xe, 0x54, 0xdc, 0x4d, 0xc3, 0x4, 0xe6, 0x10, 0x2, 0x10,
    0x0, 0x2a, 0xde, 0xca, 0x40,

    /* U+0041 "A" */
    0x0, 0x2f, 0xf0, 0x0, 0x0, 0x8e, 0xf5, 0x0, 0x0, 0xe8, 0xbb, 0x0, 0x4, 0xf3, 0x6f, 0x10, 0xa, 0xe0, 0x1f, 0x70, 0xf,
    0xff, 0xff, 0xd0, 0x5f, 0x53, 0x38, 0xf2, 0xbd, 0x0, 0x1, 0xf8,

    /* U+0042 "B" */
    0xff, 0xff, 0xb1, 0xf, 0x92, 0x5f, 0xa0, 0xf8, 0x2, 0xf8, 0xf, 0xff, 0xfc, 0x0, 0xf9, 0x24, 0xeb, 0xf, 0x80, 0x9,
    0xf0, 0xf9, 0x24, 0xdd, 0xf, 0xff, 0xfc, 0x30,

    /* U+0043 "C" */
    0x2, 0xbe, 0xea, 0x10, 0xee, 0x87, 0xd1, 0x3f, 0x70, 0x0, 0x3, 0xf5, 0x0, 0x0, 0x3f, 0x50, 0x0, 0x2, 0xf7, 0x0, 0x0,
    0xd, 0xe7, 0x7e, 0x30, 0x2b, 0xee, 0xa1,

    /* U+0044 "D" */
    0xff, 0xfe, 0xa2, 0xf, 0xb6, 0x8e, 0xd0, 0xf8, 0x0, 0x7f, 0x2f, 0x80, 0x5, 0xf3, 0xf8, 0x0, 0x5f, 0x3f, 0x80, 0x7,
    0xf2, 0xfb, 0x68, 0xee, 0xf, 0xff, 0xeb, 0x20,

    /* U+0045 "E" */
    0xff, 0xff, 0xf4, 0xfb, 0x55, 0x51, 0xf9, 0x11, 0x10, 0xff, 0xff, 0xf0, 0xfa, 0x44, 0x40, 0xf8, 0x0, 0x0, 0xfb,
    0x55, 0x52, 0xff, 0xff, 0xf6,

    /* U+0046 "F" */
    0xff, 0xff, 0xf6, 0xfb, 0x55, 0x52, 0xf9, 0x11, 0x10, 0xff, 0xff, 0xf3, 0xfa, 0x44, 0x40, 0xf8, 0x0, 0x0, 0xf8, 0x0,
    0x0, 0xf8, 0x0, 0x0,

    /* U+0047 "G" */
    0x2, 0xbe, 0xeb, 0x20, 0xd, 0xe8, 0x6a, 0x30, 0x3f, 0x80, 0x0, 0x0, 0x3f, 0x52, 0xff, 0xf1, 0x3f, 0x50, 0x39, 0xf1,
    0x2f, 0x70, 0x9, 0xf0, 0xe, 0xe7, 0x9f, 0xb0, 0x2, 0xbf, 0xea, 0x10,

    /* U+0048 "H" */
    0xf8, 0x0, 0xb, 0xcf, 0x80, 0x0, 0xbc, 0xf9, 0x11, 0x1c, 0xcf, 0xff, 0xff, 0xfc, 0xfa, 0x44, 0x4d, 0xcf, 0x80, 0x0,
    0xbc, 0xf8, 0x0, 0xb, 0xcf, 0x80, 0x0, 0xbc,

    /* U+0049 "I" */
    0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8,

    /* U+004A "J" */
    0x0, 0x8f, 0x0, 0x8, 0xf0, 0x0, 0x8f, 0x0, 0x8, 0xf0, 0x0, 0x8f, 0x0, 0x9, 0xf0, 0x56, 0xed, 0xb, 0xfd, 0x40,

    /* U+004B "K" */
    0xf8, 0x0, 0xdd, 0xf, 0x80, 0xbe, 0x10, 0xf8, 0x8f, 0x20, 0xf, 0xdf, 0x40, 0x0, 0xfc, 0xf8, 0x0, 0xf, 0x87, 0xf5,
    0x0, 0xf8, 0xa, 0xf3, 0xf, 0x80, 0xd, 0xe1,

    /* U+004C "L" */
    0xf8, 0x0, 0x0, 0xf8, 0x0, 0x0, 0xf8, 0x0, 0x0, 0xf8, 0x0, 0x0, 0xf8, 0x0, 0x0, 0xf8, 0x0, 0x0, 0xfb, 0x66, 0x61,
    0xff, 0xff, 0xf4,

    /* U+004D "M" */
    0xff, 0x40, 0x2, 0xff, 0x1f, 0xfc, 0x0, 0xaf, 0xf1, 0xfc, 0xf3, 0x2f, 0xcf, 0x1f, 0x8c, 0xba, 0xc8, 0xf1, 0xf8,
    0x4f, 0xf4, 0x8f, 0x1f, 0x80, 0xcd, 0x8, 0xf1, 0xf8, 0x0, 0x0, 0x8f, 0x1f, 0x80, 0x0, 0x8, 0xf1,

    /* U+004E "N" */
    0xfd, 0x0, 0xd, 0xaf, 0xf9, 0x0, 0xda, 0xfe, 0xf3, 0xd, 0xaf, 0x8b, 0xd0, 0xda, 0xf8, 0x2f, 0x8d, 0xaf, 0x80, 0x7f,
    0xfa, 0xf8, 0x0, 0xcf, 0xaf, 0x80, 0x2, 0xfa,

    /* U+004F "O" */
    0x2, 0xbe, 0xea, 0x20, 0xe, 0xe8, 0x8e, 0xd0, 0x3f, 0x80, 0x7, 0xf3, 0x3f, 0x50, 0x5, 0xf3, 0x3f, 0x50, 0x5, 0xf3,
    0x2f, 0x80, 0x8, 0xf3, 0xd, 0xf8, 0x8f, 0xe0, 0x2, 0xbe, 0xeb, 0x20,

    /* U+0050 "P" */
    0xff, 0xff, 0xb2, 0xf, 0xb4, 0x7e, 0xd0, 0xf8, 0x0, 0x9f, 0xf, 0x90, 0x3d, 0xe0, 0xff, 0xff, 0xf5, 0xf, 0xa3, 0x30,
    0x0, 0xf8, 0x0, 0x0, 0xf, 0x80, 0x0, 0x0,

    /* U+0051 "Q" */
    0x2, 0xbe, 0xea, 0x20, 0xe, 0xe8, 0x8e, 0xd0, 0x3f, 0x80, 0x7, 0xf3, 0x3f, 0x50, 0x5, 0xf3, 0x3f, 0x50, 0x5, 0xf3,
    0x2f, 0x80, 0x99, 0xf3, 0xd, 0xf8, 0xef, 0xd0, 0x2, 0xbe, 0xed, 0xd0, 0x0, 0x0, 0x0, 0x40,

    /* U+0052 "R" */
    0xff, 0xfe, 0xb2, 0xf, 0xb5, 0x7f, 0xc0, 0xf8, 0x0, 0xaf, 0xf, 0x91, 0x3e, 0xd0, 0xff, 0xff, 0xd3, 0xf, 0xa4, 0xea,
    0x0, 0xf8, 0x5, 0xf5, 0xf, 0x80, 0xb, 0xe1,

    /* U+0053 "S" */
    0x6, 0xdf, 0xe9, 0x4, 0xfb, 0x67, 0x70, 0x6f, 0x30, 0x0, 0x1, 0xee, 0xa5, 0x0, 0x0, 0x59, 0xfd, 0x0, 0x0, 0x6, 0xf4,
    0x39, 0x66, 0xdf, 0x24, 0xdf, 0xfc, 0x40,

    /* U+0054 "T" */
    0xbf, 0xff, 0xff, 0x53, 0x5a, 0xf6, 0x52, 0x0, 0x6f, 0x10, 0x0, 0x6, 0xf1, 0x0, 0x0, 0x6f, 0x10, 0x0, 0x6, 0xf1,
    0x0, 0x0, 0x6f, 0x10, 0x0, 0x6, 0xf1, 0x0,

    /* U+0055 "U" */
    0x1f, 0x60, 0x4, 0xf3, 0x1f, 0x60, 0x4, 0xf3, 0x1f, 0x60, 0x4, 0xf3, 0x1f, 0x60, 0x4, 0xf3, 0x1f, 0x60, 0x4, 0xf3,
    0x1f, 0x80, 0x7, 0xf2, 0xd, 0xe8, 0x7e, 0xe0, 0x2, 0xbe, 0xfb, 0x20,

    /* U+0056 "V" */
    0xcd, 0x0, 0xa, 0xe0, 0x7f, 0x20, 0xf, 0x90, 0x2f, 0x70, 0x4f, 0x40, 0xc, 0xc0, 0x9e, 0x0, 0x7, 0xf1, 0xe9, 0x0,
    0x2, 0xf8, 0xf4, 0x0, 0x0, 0xdf, 0xe0, 0x0, 0x0, 0x8f, 0x90, 0x0,

    /* U+0057 "W" */
    0xcf, 0x0, 0x4f, 0x90, 0xc, 0xd8, 0xf3, 0x9, 0xfd, 0x0, 0xf9, 0x3f, 0x70, 0xde, 0xf1, 0x4f, 0x50, 0xfb, 0x2f, 0x6f,
    0x67, 0xf1, 0xb, 0xe6, 0xf0, 0xda, 0xbc, 0x0, 0x7f, 0xdc, 0x9, 0xef, 0x80, 0x3, 0xff, 0x80, 0x5f, 0xf4, 0x0, 0xe,
    0xf3, 0x1, 0xff, 0x0,

    /* U+0058 "X" */
    0x7f, 0x50, 0xc, 0xd0, 0xc, 0xe0, 0x5f, 0x40, 0x3, 0xf8, 0xe9, 0x0, 0x0, 0x8f, 0xe1, 0x0, 0x0, 0x9f, 0xe1, 0x0, 0x4,
    0xf7, 0xea, 0x0, 0xd, 0xc0, 0x6f, 0x40, 0x9f, 0x30, 0xd, 0xe0,

    /* U+0059 "Y" */
    0xaf, 0x10, 0xe, 0xb2, 0xf9, 0x7, 0xf2, 0x9, 0xf2, 0xe9, 0x0, 0x1f, 0xef, 0x10, 0x0, 0x7f, 0x70, 0x0, 0x4, 0xf5,
    0x0, 0x0, 0x4f, 0x50, 0x0, 0x4, 0xf5, 0x0,

    /* U+005A "Z" */
    0x3f, 0xff, 0xff, 0x60, 0x44, 0x4d, 0xf2, 0x0, 0x6, 0xf6, 0x0, 0x2, 0xfb, 0x0, 0x0, 0xce, 0x10, 0x0, 0x8f, 0x50,
    0x0, 0x3f, 0xd4, 0x44, 0x18, 0xff, 0xff, 0xf6,

    /* U+005B "[" */
    0xcf, 0xcc, 0x91, 0xc8, 0xc, 0x80, 0xc8, 0xc, 0x80, 0xc8, 0xc, 0x80, 0xc8, 0xc, 0xfc, 0x12, 0x10,

    /* U+005C "\\" */
    0x7, 0x20, 0x0, 0x0, 0xbb, 0x0, 0x0, 0x4, 0xf2, 0x0, 0x0, 0xd, 0x80, 0x0, 0x0, 0x6e, 0x0, 0x0, 0x0, 0xe6, 0x0, 0x0,
    0x8, 0xd0, 0x0, 0x0, 0x1f, 0x40, 0x0, 0x0, 0xab, 0x0, 0x0, 0x3, 0xf2,

    /* U+005D "]" */
    0xbf, 0xd1, 0x8d, 0x7, 0xd0, 0x7d, 0x7, 0xd0, 0x7d, 0x7, 0xd0, 0x7d, 0x7, 0xdb, 0xfd, 0x12, 0x20,

    /* U+005E "^" */
    0x0, 0x27, 0x0, 0x0, 0xb, 0xf6, 0x0, 0x3, 0xf9, 0xe0, 0x0, 0xca, 0xf, 0x70, 0x4f, 0x30, 0x8e, 0x0,

    /* U+005F "_" */
    0xee, 0xee, 0xe5,

    /* U+0060 "`" */
    0xd, 0x70, 0x3, 0xe1,

    /* U+0061 "a" */
    0xa, 0xee, 0x90, 0x4, 0x34, 0xf4, 0x9, 0xee, 0xf7, 0x7e, 0x22, 0xf7, 0x8e, 0x38, 0xf7, 0x1c, 0xf9, 0xe7,

    /* U+0062 "b" */
    0x1f, 0x50, 0x0, 0x1, 0xf5, 0x0, 0x0, 0x1f, 0xae, 0xd5, 0x1, 0xfd, 0x5b, 0xf0, 0x1f, 0x70, 0x5f, 0x31, 0xf7, 0x4,
    0xf3, 0x1f, 0xc2, 0xaf, 0x1, 0xfa, 0xed, 0x50,

    /* U+0063 "c" */
    0x5, 0xdf, 0xb0, 0x2f, 0xa5, 0x70, 0x5f, 0x30, 0x0, 0x5f, 0x30, 0x0, 0x2f, 0xa4, 0x70, 0x6, 0xdf, 0xb0,

    /* U+0064 "d" */
    0x0, 0x0, 0x7f, 0x0, 0x0, 0x7f, 0x6, 0xee, 0xbf, 0x2f, 0xa5, 0xef, 0x5f, 0x20, 0x9f, 0x5f, 0x20, 0x9f, 0x2f, 0xa4,
    0xef, 0x7, 0xee, 0xaf,

    /* U+0065 "e" */
    0x5, 0xdf, 0xc3, 0x1, 0xf7, 0x3b, 0xd0, 0x5f, 0xff, 0xff, 0x5, 0xf3, 0x0, 0x0, 0x2f, 0xb3, 0x64, 0x0, 0x5d, 0xfd,
    0x50,

    /* U+0066 "f" */
    0x3, 0xdf, 0x0, 0xae, 0x20, 0xbf, 0xff, 0x1, 0xbd, 0x20, 0xa, 0xc0, 0x0, 0xac, 0x0, 0xa, 0xc0, 0x0, 0xac, 0x0,

    /* U+0067 "g" */
    0x7, 0xee, 0xaf, 0x2f, 0x82, 0xdf, 0x5f, 0x20, 0x9f, 0x5f, 0x30, 0x9f, 0x2f, 0xa4, 0xef, 0x7, 0xee, 0xcf, 0x4, 0x44,
    0xdb, 0xb, 0xfe, 0xb2,

    /* U+0068 "h" */
    0x1f, 0x60, 0x0, 0x1, 0xf6, 0x0, 0x0, 0x1f, 0xad, 0xe7, 0x1, 0xfc, 0x4c, 0xf0, 0x1f, 0x60, 0x5f, 0x11, 0xf5, 0x5,
    0xf1, 0x1f, 0x50, 0x5f, 0x11, 0xf5, 0x5, 0xf1,

    /* U+0069 "i" */
    0x1f, 0x60, 0x52, 0x1f, 0x51, 0xf5, 0x1f, 0x51, 0xf5, 0x1f, 0x51, 0xf5,

    /* U+006A "j" */
    0x1, 0xf6, 0x0, 0x52, 0x1, 0xf5, 0x1, 0xf5, 0x1, 0xf5, 0x1, 0xf5, 0x1, 0xf5, 0x1, 0xf5, 0x5, 0xf4, 0x3f, 0xb0,

    /* U+006B "k" */
    0x1f, 0x60, 0x0, 0x1, 0xf6, 0x0, 0x0, 0x1f, 0x61, 0xdc, 0x1, 0xf6, 0xbd, 0x10, 0x1f, 0xee, 0x20, 0x1, 0xfd, 0xf4,
    0x0, 0x1f, 0x6a, 0xf2, 0x1, 0xf5, 0xc, 0xe1,

    /* U+006C "l" */
    0x1f, 0x51, 0xf5, 0x1f, 0x51, 0xf5, 0x1f, 0x51, 0xf5, 0x1f, 0x51, 0xf5,

    /* U+006D "m" */
    0x1f, 0x9e, 0xe6, 0x9e, 0xd3, 0x1f, 0xc5, 0xcf, 0xa5, 0xec, 0x1f, 0x60, 0x5f, 0x20, 0x9e, 0x1f, 0x50, 0x5f, 0x20,
    0x9e, 0x1f, 0x50, 0x5f, 0x20, 0x9e, 0x1f, 0x50, 0x5f, 0x20, 0x9e,

    /* U+006E "n" */
    0x1f, 0x9e, 0xe6, 0x1, 0xfc, 0x5c, 0xf0, 0x1f, 0x60, 0x5f, 0x11, 0xf5, 0x5, 0xf1, 0x1f, 0x50, 0x5f, 0x11, 0xf5, 0x5,
    0xf1,

    /* U+006F "o" */
    0x6, 0xdf, 0xb2, 0x2, 0xfa, 0x4e, 0xb0, 0x5f, 0x20, 0x9f, 0x5, 0xf2, 0x9, 0xf0, 0x2f, 0xa4, 0xeb, 0x0, 0x6d, 0xfc,
    0x20,

    /* U+0070 "p" */
    0x1f, 0x9e, 0xd5, 0x1, 0xfd, 0x4b, 0xf0, 0x1f, 0x70, 0x4f, 0x31, 0xf7, 0x5, 0xf3, 0x1f, 0xd4, 0xbf, 0x1, 0xfb, 0xed,
    0x50, 0x1f, 0x50, 0x0, 0x1, 0xf5, 0x0, 0x0,

    /* U+0071 "q" */
    0x6, 0xee, 0xaf, 0x2f, 0x82, 0xdf, 0x5f, 0x20, 0x9f, 0x5f, 0x30, 0x9f, 0x2f, 0xa4, 0xef, 0x7, 0xee, 0xbf, 0x0, 0x0,
    0x7f, 0x0, 0x0, 0x7f,

    /* U+0072 "r" */
    0x1f, 0x8e, 0x61, 0xfd, 0x41, 0x1f, 0x70, 0x1, 0xf5, 0x0, 0x1f, 0x50, 0x1, 0xf5, 0x0,

    /* U+0073 "s" */
    0x1a, 0xee, 0x70, 0x9e, 0x46, 0x30, 0x6f, 0x96, 0x0, 0x3, 0x8d, 0xc0, 0x27, 0x4a, 0xf0, 0x5d, 0xfc, 0x60,

    /* U+0074 "t" */
    0xc, 0xa0, 0xc, 0xa0, 0xaf, 0xfe, 0x1d, 0xb2, 0xc, 0xa0, 0xc, 0xa0, 0xb, 0xd3, 0x4, 0xde,

    /* U+0075 "u" */
    0x2f, 0x40, 0x6f, 0x2, 0xf4, 0x6, 0xf0, 0x2f, 0x40, 0x6f, 0x2, 0xf5, 0x7, 0xf0, 0x1f, 0xb4, 0xdf, 0x0, 0x7f, 0xd9,
    0xf0,

    /* U+0076 "v" */
    0xcc, 0x0, 0x8e, 0x6, 0xf1, 0xe, 0x90, 0x1f, 0x73, 0xf3, 0x0, 0xbc, 0x8d, 0x0, 0x5, 0xfe, 0x70, 0x0, 0xf, 0xf1, 0x0,

    /* U+0077 "w" */
    0xbd, 0x4, 0xf7, 0xa, 0xe0, 0x7f, 0x18, 0xfb, 0xe, 0x90, 0x2f, 0x5c, 0xaf, 0x3f, 0x40, 0xe, 0xbf, 0x2f, 0xaf, 0x0,
    0x9, 0xfd, 0xb, 0xfa, 0x0, 0x4, 0xf8, 0x7, 0xf6, 0x0,

    /* U+0078 "x" */
    0x8f, 0x20, 0xe9, 0xd, 0xb8, 0xe0, 0x3, 0xff, 0x40, 0x3, 0xff, 0x50, 0xd, 0xa9, 0xe1, 0x9f, 0x11, 0xfa,

    /* U+0079 "y" */
    0xcd, 0x0, 0xcc, 0x6f, 0x21, 0xf5, 0xf, 0x76, 0xe0, 0x9, 0xdc, 0x90, 0x3, 0xff, 0x20, 0x0, 0xdc, 0x0, 0x4, 0xf6,
    0x0, 0x1f, 0xa0, 0x0,

    /* U+007A "z" */
    0x6f, 0xff, 0xf3, 0x13, 0x4e, 0xd0, 0x0, 0x9f, 0x20, 0x6, 0xf5, 0x0, 0x3f, 0xb3, 0x30, 0x9f, 0xff, 0xf3,

    /* U+007B "{" */
    0x2, 0xca, 0x8, 0xe2, 0x9, 0xc0, 0xb, 0xb0, 0x7f, 0x30, 0x1d, 0x90, 0x9, 0xc0, 0x9, 0xc0, 0x8, 0xe0, 0x2, 0xeb, 0x0,
    0x1,

    /* U+007C "|" */
    0x94, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6, 0xd6,

    /* U+007D "}" */
    0x8c, 0x30, 0x1d, 0x90, 0xa, 0xa0, 0x9, 0xc0, 0x2, 0xf8, 0x7, 0xe1, 0xa, 0xa0, 0xa, 0xa0, 0xc, 0x90, 0x9f, 0x40,
    0x0, 0x0,

    /* U+007E "~" */
    0x0, 0x0, 0x0, 0x2, 0xde, 0x93, 0x14, 0x47, 0x5b, 0xff, 0x60, 0x0, 0x1, 0x10,

    /* U+4E00 "一" */
    0x14, 0x44, 0x44, 0x44, 0x44, 0x41, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xf6,

    /* U+4E09 "三" */
    0xa, 0xff, 0xff, 0xff, 0xff, 0xb0, 0x3, 0x44, 0x44, 0x44, 0x44, 0x30, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x5, 0xff, 0xff, 0xff, 0xff, 0x50, 0x1, 0x44, 0x44, 0x44, 0x44, 0x10, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x6f, 0xff, 0xff, 0xff, 0xff, 0xf6, 0x15, 0x55, 0x55, 0x55, 0x55, 0x52,

    /* U+4E8C "二" */
    0x6, 0xee, 0xee, 0xee, 0xee, 0x70, 0x2, 0x55, 0x55, 0x55, 0x55, 0x20, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xf6, 0x15, 0x55, 0x55, 0x55, 0x55, 0x52,

    /* U+4E94 "五" */
    0xf, 0xff, 0xff, 0xff, 0xff, 0xf1, 0x3, 0x33, 0xdc, 0x33, 0x33, 0x30, 0x0, 0x0, 0xf8, 0x0, 0x0, 0x0, 0x2, 0x45,
    0xf9, 0x44, 0x41, 0x0, 0x7, 0xff, 0xff, 0xff, 0xfd, 0x0, 0x0, 0x7, 0xf0, 0x0, 0x8e, 0x0, 0x0, 0x9, 0xd0, 0x0, 0x8e,
    0x0, 0x0, 0xc, 0xb0, 0x0, 0x8e, 0x0, 0x13, 0x3f, 0xa3, 0x33, 0xaf, 0x31, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xf7,

    /* U+4F59 "余" */
    0x0, 0x0, 0x3e, 0xf5, 0x0, 0x0, 0x0, 0x3, 0xfd, 0xcf, 0x60, 0x0, 0x0, 0x7f, 0xc1, 0xa, 0xf9, 0x10, 0x2c, 0xfe, 0x43,
    0x34, 0xcf, 0xe4, 0x3c, 0x4b, 0xff, 0xff, 0xf3, 0xb6, 0x0, 0x0, 0x8, 0xe0, 0x0, 0x0, 0xa, 0xff, 0xff, 0xff, 0xff,
    0xe0, 0x2, 0x44, 0x3a, 0xf3, 0x44, 0x30, 0x2, 0xf4, 0x8, 0xe0, 0x3f, 0x40, 0x8, 0xf2, 0x4b, 0xe0, 0xe, 0x90, 0x7,
    0x63, 0xef, 0x70, 0x6, 0x70,

    /* U+4F7F "使" */
    0x0, 0x9f, 0x10, 0xf, 0x60, 0x0, 0x0, 0xeb, 0xbe, 0xef, 0xfe, 0xe4, 0x7, 0xf4, 0x35, 0x5f, 0xa5, 0x51, 0x3f, 0x70,
    0x3d, 0xdf, 0xed, 0xa0, 0x6f, 0x90, 0x7f, 0x5f, 0x99, 0xf0, 0x17, 0xf3, 0x7e, 0xf, 0x76, 0xf0, 0x3, 0xf3, 0x5f,
    0xff, 0xff, 0xe0, 0x3, 0xf3, 0x38, 0x5f, 0x62, 0x0, 0x3, 0xf3, 0x1e, 0xee, 0x0, 0x0, 0x3, 0xf5, 0x8e, 0xff, 0xc8,
    0x62, 0x3, 0xf7, 0xc7, 0x3, 0x9c, 0xf5, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+516D "六" */
    0x0, 0x0, 0xe, 0x80, 0x0, 0x0, 0x0, 0x0, 0xe, 0x80, 0x0, 0x0, 0x1, 0x11, 0x1e, 0x91, 0x11, 0x10, 0x7f, 0xff, 0xff,
    0xff, 0xff, 0xf1, 0x2, 0x22, 0x22, 0x22, 0x22, 0x20, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x8f, 0x10, 0x7, 0xf1, 0x0,
    0x0, 0xe9, 0x0, 0x1, 0xf9, 0x0, 0x7, 0xf2, 0x0, 0x0, 0x9f, 0x10, 0xe, 0xb0, 0x0, 0x0, 0x1f, 0x80, 0x5f, 0x40, 0x0,
    0x0, 0xa, 0xe0,

    /* U+5206 "分" */
    0x0, 0x6, 0xf1, 0x4f, 0x40, 0x0, 0x0, 0xd, 0xc0, 0xf, 0xb0, 0x0, 0x0, 0x6f, 0x50, 0x7, 0xf4, 0x0, 0x6, 0xfa, 0x0,
    0x0, 0xcf, 0x50, 0x6f, 0xf5, 0x55, 0x55, 0x6d, 0xf5, 0x48, 0xbf, 0xff, 0xff, 0xf8, 0x92, 0x0, 0x8, 0xe0, 0x0, 0xd9,
    0x0, 0x0, 0xc, 0xc0, 0x0, 0xd9, 0x0, 0x0, 0x6f, 0x50, 0x0, 0xd9, 0x0, 0x9, 0xf9, 0x4, 0x45, 0xf7, 0x0, 0xe, 0x70,
    0x9, 0xef, 0xb1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+5269 "剩" */
    0x0, 0x0, 0x2, 0x70, 0x3, 0xf3, 0xf, 0xff, 0xff, 0xc0, 0x96, 0xf3, 0x26, 0x6c, 0xc5, 0x53, 0xe8, 0xf3, 0x3b, 0xbe,
    0xeb, 0xb6, 0xe8, 0xf3, 0x28, 0xe9, 0x9e, 0x98, 0xe8, 0xf3, 0x19, 0xea, 0x9e, 0x94, 0xe8, 0xf3, 0x4f, 0xed, 0x9e,
    0xba, 0xe8, 0xf3, 0x1, 0xcf, 0xe9, 0x61, 0xe8, 0xf3, 0x9, 0xec, 0xde, 0xc3, 0x13, 0xf3, 0x8e, 0x39, 0x91, 0xa7,
    0x47, 0xf2, 0x21, 0x9, 0x90, 0x0, 0xaf, 0xb0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+53EF "可" */
    0x6f, 0xff, 0xff, 0xff, 0xff, 0xf6, 0x13, 0x33, 0x33, 0x33, 0x7f, 0x51, 0x3, 0xdd, 0xdd, 0xb0, 0x4f, 0x20, 0x7,
    0xf5, 0x58, 0xf1, 0x4f, 0x20, 0x7, 0xe0, 0x4, 0xf1, 0x4f, 0x20, 0x7, 0xe0, 0x5, 0xf1, 0x4f, 0x20, 0x6, 0xff, 0xff,
    0xf0, 0x4f, 0x20, 0x0, 0x33, 0x33, 0x10, 0x4f, 0x20, 0x0, 0x0, 0x6, 0x65, 0x9f, 0x10, 0x0, 0x0, 0xa, 0xde, 0xe8,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+56DB "四" */
    0xbf, 0xff, 0xff, 0xff, 0xfb, 0xf9, 0x5f, 0x78, 0xf4, 0x9f, 0xf7, 0x1f, 0x46, 0xf0, 0x7f, 0xf7, 0x2f, 0x46, 0xf0,
    0x7f, 0xf7, 0x6f, 0x26, 0xf0, 0x7f, 0xf9, 0xec, 0x6, 0xfc, 0xff, 0xfd, 0xe2, 0x2, 0xa8, 0xbf, 0xf8, 0x20, 0x0, 0x0,
    0x7f, 0xf9, 0x44, 0x44, 0x44, 0xaf, 0xbf, 0xff, 0xff, 0xff, 0xfb,

    /* U+5929 "天" */
    0xb, 0xff, 0xff, 0xff, 0xff, 0x70, 0x2, 0x33, 0x3f, 0xa3, 0x33, 0x10, 0x0, 0x0, 0xe, 0x80, 0x0, 0x0, 0x25, 0x55,
    0x5f, 0xb5, 0x55, 0x50, 0x6f, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x0, 0x0, 0x4f, 0xe0, 0x0, 0x0, 0x0, 0x0, 0xde, 0xf8,
    0x0, 0x0, 0x0, 0x2c, 0xf3, 0x8f, 0x90, 0x0, 0x2a, 0xfe, 0x40, 0x8, 0xfe, 0x71, 0x8f, 0x91, 0x0, 0x0, 0x2b, 0xf2,
    0x10, 0x0, 0x0, 0x0, 0x0, 0x20,

    /* U+5E74 "年" */
    0x0, 0x4f, 0x30, 0x0, 0x0, 0x0, 0x0, 0xaf, 0x65, 0x55, 0x55, 0x40, 0x5, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x3f, 0xe1,
    0x0, 0xf7, 0x0, 0x0, 0x5e, 0x55, 0x55, 0xfa, 0x55, 0x30, 0x11, 0xdf, 0xff, 0xff, 0xff, 0xa0, 0x0, 0xe8, 0x0, 0xf7,
    0x0, 0x0, 0x13, 0xfa, 0x33, 0xf9, 0x33, 0x31, 0x6f, 0xff, 0xff, 0xff, 0xff, 0xf5, 0x0, 0x0, 0x0, 0xf8, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xf7, 0x0, 0x0,

    /* U+603B "总" */
    0x0, 0x4f, 0x20, 0x2, 0xf5, 0x0, 0x0, 0xa, 0x50, 0x7, 0xf0, 0x0, 0x3, 0xee, 0xee, 0xef, 0xfe, 0x40, 0x7, 0xf5, 0x55,
    0x55, 0x5e, 0x80, 0x7, 0xe0, 0x0, 0x0, 0xe, 0x80, 0x6, 0xff, 0xff, 0xff, 0xff, 0x60, 0x0, 0x34, 0x47, 0xa3, 0x33,
    0x0, 0x9, 0xba, 0xd6, 0xf1, 0xa, 0x90, 0xd, 0x9a, 0xd1, 0x86, 0xb9, 0xe0, 0x1f, 0x69, 0xf6, 0x5a, 0xf5, 0xf2, 0x0,
    0x2, 0xce, 0xed, 0x60, 0x0,

    /* U+65E5 "日" */
    0x4f, 0xff, 0xff, 0xff, 0xf4, 0x7f, 0x44, 0x44, 0x44, 0xf8, 0x7f, 0x0, 0x0, 0x0, 0xf8, 0x7f, 0x0, 0x0, 0x0, 0xf8,
    0x7f, 0xff, 0xff, 0xff, 0xf8, 0x7f, 0x44, 0x44, 0x44, 0xf8, 0x7f, 0x0, 0x0, 0x0, 0xf8, 0x7f, 0x0, 0x0, 0x0, 0xf8,
    0x7f, 0x44, 0x44, 0x44, 0xf8, 0x4f, 0xff, 0xff, 0xff, 0xf4,

    /* U+65F6 "时" */
    0x0, 0x0, 0x0, 0x0, 0x3f, 0x30, 0xe, 0xff, 0xb0, 0x0, 0x3f, 0x30, 0x1f, 0x58, 0xe9, 0xdd, 0xef, 0xe5, 0x1f, 0x36,
    0xe3, 0x55, 0x8f, 0x82, 0x1f, 0x36, 0xe1, 0x30, 0x3f, 0x30, 0x1f, 0xef, 0xe2, 0xf2, 0x3f, 0x30, 0x1f, 0x68, 0xe0,
    0xf5, 0x3f, 0x30, 0x1f, 0x36, 0xe0, 0xc7, 0x3f, 0x30, 0x1f, 0x36, 0xe0, 0x0, 0x3f, 0x30, 0xf, 0xff, 0xd0, 0x34,
    0x8f, 0x20, 0x1, 0x33, 0x10, 0x6e, 0xf9, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+661F "星" */
    0x3, 0xff, 0xff, 0xff, 0xff, 0x30, 0x6, 0xf8, 0x77, 0x77, 0x8f, 0x60, 0x6, 0xf9, 0x88, 0x88, 0x9f, 0x60, 0x5, 0xff,
    0xff, 0xff, 0xff, 0x40, 0x0, 0x87, 0x38, 0xb3, 0x32, 0x0, 0x2b, 0xfe, 0xde, 0xfd, 0xdd, 0xc0, 0x5c, 0x65, 0x5b,
    0xf5, 0x55, 0x40, 0x7, 0xff, 0xff, 0xff, 0xff, 0x80, 0x13, 0x33, 0x3b, 0xf3, 0x33, 0x31, 0x4f, 0xff, 0xff, 0xff,
    0xff, 0xf5,

    /* U+6708 "月" */
    0x0, 0xdf, 0xff, 0xff, 0xff, 0x50, 0xf, 0x83, 0x33, 0x34, 0xf8, 0x0, 0xf8, 0x33, 0x33, 0x3f, 0x80, 0x1f, 0xff, 0xff,
    0xff, 0xf8, 0x1, 0xf5, 0x0, 0x0, 0xe, 0x80, 0x1f, 0xee, 0xee, 0xee, 0xf8, 0x3, 0xf7, 0x44, 0x44, 0x4f, 0x80, 0x5f,
    0x0, 0x0, 0x0, 0xe8, 0xa, 0xd0, 0x0, 0x24, 0x4f, 0x80, 0xf7, 0x0, 0x3, 0xdf, 0xd2, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+671F "期" */
    0x6, 0xe0, 0x6e, 0x0, 0x0, 0x0, 0x9, 0xf3, 0x9f, 0x2d, 0xff, 0xe0, 0x1f, 0xff, 0xff, 0x8f, 0x76, 0xf2, 0x6, 0xf3,
    0x8e, 0xf, 0x76, 0xf2, 0x6, 0xfe, 0xfe, 0xf, 0xfe, 0xf2, 0x6, 0xf3, 0x9e, 0xf, 0x42, 0xf2, 0x6, 0xfe, 0xfe, 0xf,
    0x87, 0xf2, 0x19, 0xf4, 0x9f, 0x3f, 0xdd, 0xf2, 0x2f, 0xff, 0xff, 0xaf, 0x32, 0xf2, 0x4, 0xf2, 0xca, 0x6f, 0x25,
    0xf2, 0xb, 0xa0, 0x6f, 0xad, 0x8f, 0xc0, 0x0, 0x0, 0x0, 0x11, 0x0, 0x0,

    /* U+7528 "用" */
    0x5, 0xff, 0xff, 0xff, 0xff, 0xb0, 0x8f, 0x43, 0xaf, 0x33, 0xae, 0x8, 0xf4, 0x4a, 0xf4, 0x4a, 0xe0, 0x8f, 0xff,
    0xff, 0xff, 0xfe, 0x8, 0xe0, 0x8, 0xe0, 0x8, 0xe0, 0x8e, 0x44, 0xaf, 0x44, 0xae, 0xa, 0xff, 0xff, 0xff, 0xff, 0xe0,
    0xcc, 0x0, 0x8e, 0x0, 0x8e, 0x1f, 0x90, 0x8, 0xe3, 0x3b, 0xe5, 0xf3, 0x0, 0x7c, 0x6e, 0xf7, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0,

    /* U+79D2 "秒" */
    0x0, 0x13, 0x80, 0x8, 0xe0, 0x0, 0x1f, 0xff, 0xf0, 0x8, 0xe0, 0x0, 0x3, 0xac, 0x2, 0xa8, 0xe6, 0x60, 0x26, 0xcd,
    0x67, 0xd8, 0xe5, 0xe0, 0x4e, 0xff, 0xea, 0xa8, 0xe1, 0xf4, 0x9, 0x9b, 0xe, 0x78, 0xe0, 0x53, 0xf, 0xde, 0xa6, 0x13,
    0x6a, 0xc0, 0x2c, 0x9c, 0x50, 0x0, 0x5f, 0x50, 0x68, 0x9b, 0x0, 0x18, 0xf9, 0x0, 0x22, 0x9b, 0x3a, 0xff, 0x70, 0x0,
    0x0, 0x9b, 0x3d, 0x82, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+91CF "量" */
    0x4, 0xfd, 0xdd, 0xdd, 0xdf, 0x40, 0x7, 0xfb, 0xbb, 0xbb, 0xbf, 0x70, 0x3, 0xbc, 0xbb, 0xbb, 0xcb, 0x30, 0x5e, 0xee,
    0xee, 0xee, 0xee, 0xe6, 0x1, 0xbb, 0xbc, 0xcb, 0xbc, 0x10, 0x5, 0xfc, 0xcf, 0xec, 0xcf, 0x50, 0x4, 0xf9, 0x8f, 0xc8,
    0x9f, 0x40, 0x1, 0x88, 0x8f, 0xc8, 0x87, 0x0, 0x6, 0xee, 0xef, 0xfe, 0xee, 0x70, 0x5f, 0xff, 0xff, 0xff, 0xff,
    0xf6};

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 48, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 63, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 8, .adv_w = 85, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 16, .adv_w = 125, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 48, .adv_w = 109, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 83, .adv_w = 151, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 119, .adv_w = 138, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 155, .adv_w = 51, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 160, .adv_w = 65, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 182, .adv_w = 66, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 204, .adv_w = 89, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 219, .adv_w = 131, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 237, .adv_w = 48, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 242, .adv_w = 84, .box_w = 5, .box_h = 2, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 247, .adv_w = 48, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 250, .adv_w = 84, .box_w = 7, .box_h = 10, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 285, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 313, .adv_w = 80, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 329, .adv_w = 108, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 357, .adv_w = 108, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 385, .adv_w = 108, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 413, .adv_w = 108, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 441, .adv_w = 108, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 469, .adv_w = 102, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 493, .adv_w = 108, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 521, .adv_w = 108, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 549, .adv_w = 48, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 558, .adv_w = 48, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 569, .adv_w = 131, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 590, .adv_w = 131, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 605, .adv_w = 131, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 626, .adv_w = 99, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 650, .adv_w = 171, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 695, .adv_w = 125, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 727, .adv_w = 123, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 755, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 783, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 811, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 835, .adv_w = 109, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 859, .adv_w = 125, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 891, .adv_w = 141, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 919, .adv_w = 57, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 927, .adv_w = 78, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 947, .adv_w = 119, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 975, .adv_w = 106, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 999, .adv_w = 162, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1035, .adv_w = 139, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1063, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1095, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1123, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1159, .adv_w = 122, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1187, .adv_w = 109, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1215, .adv_w = 107, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1243, .adv_w = 129, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1275, .adv_w = 115, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1307, .adv_w = 177, .box_w = 11, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1351, .adv_w = 118, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1383, .adv_w = 113, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1411, .adv_w = 110, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1439, .adv_w = 65, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1456, .adv_w = 84, .box_w = 7, .box_h = 10, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 1491, .adv_w = 65, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1508, .adv_w = 107, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 1526, .adv_w = 86, .box_w = 6, .box_h = 1, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1529, .adv_w = 73, .box_w = 4, .box_h = 2, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1533, .adv_w = 100, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1551, .adv_w = 110, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1579, .adv_w = 89, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1597, .adv_w = 110, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1621, .adv_w = 105, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1642, .adv_w = 69, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1662, .adv_w = 110, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1686, .adv_w = 111, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1714, .adv_w = 52, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1726, .adv_w = 52, .box_w = 4, .box_h = 10, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 1746, .adv_w = 103, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1774, .adv_w = 52, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1786, .adv_w = 171, .box_w = 10, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1816, .adv_w = 111, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1837, .adv_w = 106, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1858, .adv_w = 110, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1886, .adv_w = 110, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1910, .adv_w = 72, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1925, .adv_w = 88, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1943, .adv_w = 68, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1959, .adv_w = 111, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1980, .adv_w = 99, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2001, .adv_w = 146, .box_w = 10, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2031, .adv_w = 97, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2049, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2073, .adv_w = 91, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2091, .adv_w = 65, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2113, .adv_w = 57, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2123, .adv_w = 65, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2145, .adv_w = 116, .box_w = 7, .box_h = 4, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 2159, .adv_w = 192, .box_w = 12, .box_h = 2, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 2171, .adv_w = 192, .box_w = 12, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2231, .adv_w = 192, .box_w = 12, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2291, .adv_w = 192, .box_w = 12, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2351, .adv_w = 192, .box_w = 12, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2417, .adv_w = 192, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2489, .adv_w = 192, .box_w = 12, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2555, .adv_w = 192, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2627, .adv_w = 192, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2699, .adv_w = 192, .box_w = 12, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2765, .adv_w = 192, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2815, .adv_w = 192, .box_w = 12, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2881, .adv_w = 192, .box_w = 12, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2947, .adv_w = 192, .box_w = 12, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 3013, .adv_w = 192, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 3063, .adv_w = 192, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3135, .adv_w = 192, .box_w = 12, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 3195, .adv_w = 192, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3256, .adv_w = 192, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3328, .adv_w = 192, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3389, .adv_w = 192, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3461, .adv_w = 192, .box_w = 12, .box_h = 10, .ofs_x = 0, .ofs_y = -1}};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_1[] = {0x0,    0x9,    0x8c,   0x94,   0x159,  0x17f,  0x36d,  0x406,
                                          0x469,  0x5ef,  0x8db,  0xb29,  0x1074, 0x123b, 0x17e5, 0x17f6,
                                          0x181f, 0x1908, 0x191f, 0x2728, 0x2bd2, 0x43cf};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] = {{.range_start       = 32,
                                                .range_length      = 95,
                                                .glyph_id_start    = 1,
                                                .unicode_list      = NULL,
                                                .glyph_id_ofs_list = NULL,
                                                .list_length       = 0,
                                                .type              = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY},
                                               {.range_start       = 19968,
                                                .range_length      = 17360,
                                                .glyph_id_start    = 96,
                                                .unicode_list      = unicode_list_1,
                                                .glyph_id_ofs_list = NULL,
                                                .list_length       = 22,
                                                .type              = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY}};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap  = glyph_bitmap,
    .glyph_dsc     = glyph_dsc,
    .cmaps         = cmaps,
    .kern_dsc      = NULL,
    .kern_scale    = 0,
    .cmap_num      = 2,
    .bpp           = 4,
    .kern_classes  = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};

/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t douyin_12 = {
#else
lv_font_t douyin_12 = {
#endif
    .get_glyph_dsc    = lv_font_get_glyph_dsc_fmt_txt, /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height      = 12,                            /*The maximum line height required by the font*/
    .base_line        = 2,                             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position  = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc, /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};

#endif /*#if DOUYIN_12*/