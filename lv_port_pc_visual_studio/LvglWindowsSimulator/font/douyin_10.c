/*******************************************************************************
 * Size: 10 px
 * Bpp: 4
 * Opts: --bpp 4 --size 10 --no-compress --font DouyinSansBold.otf --range 32-127 --format lvgl -o douyin_10.c
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef DOUYIN_10
#define DOUYIN_10 1
#endif

#if DOUYIN_10

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */
    0xf, 0x50, 0xf4, 0xf, 0x30, 0xe3, 0xa, 0x10,
    0x52, 0xf, 0x50,

    /* U+0022 "\"" */
    0x2d, 0x6a, 0x1d, 0x5a, 0x0, 0x0,

    /* U+0023 "#" */
    0x0, 0xb5, 0x98, 0x0, 0xe, 0x2c, 0x40, 0x1f,
    0xff, 0xfe, 0x0, 0x5b, 0x3d, 0x0, 0x7f, 0xff,
    0xf8, 0x0, 0xd4, 0xa6, 0x0, 0xf, 0x1d, 0x30,
    0x0,

    /* U+0024 "$" */
    0x0, 0x94, 0x0, 0x9, 0xff, 0xa0, 0x6e, 0xb5,
    0x40, 0x7e, 0xb3, 0x0, 0x9, 0xff, 0x70, 0x0,
    0x88, 0xf2, 0x25, 0xa9, 0xf1, 0x5d, 0xfe, 0x70,
    0x0, 0x94, 0x0,

    /* U+0025 "%" */
    0x2c, 0xc1, 0xd, 0x30, 0x77, 0x95, 0x6a, 0x0,
    0x77, 0x96, 0xe1, 0x0, 0x1b, 0xba, 0x9b, 0xa0,
    0x0, 0x2d, 0x87, 0xa4, 0x0, 0xb4, 0x86, 0x94,
    0x5, 0xb0, 0x2b, 0xb0,

    /* U+0026 "&" */
    0x3, 0xcd, 0x50, 0x0, 0xa, 0x84, 0xc0, 0x0,
    0x5, 0xdc, 0x60, 0x0, 0x9, 0xed, 0x19, 0x40,
    0x4e, 0x9, 0xcf, 0x20, 0x6e, 0x11, 0xed, 0x0,
    0xa, 0xfd, 0x7c, 0xa0,

    /* U+0027 "'" */
    0x2d, 0x1d, 0x0,

    /* U+0028 "(" */
    0x0, 0x51, 0x4, 0xc0, 0xd, 0x40, 0x1f, 0x0,
    0x3d, 0x0, 0x2e, 0x0, 0xf, 0x10, 0xa, 0x70,
    0x1, 0xe1,

    /* U+0029 ")" */
    0x52, 0x6, 0xb0, 0xe, 0x40, 0xa8, 0x8, 0xb0,
    0x9a, 0xb, 0x71, 0xe2, 0xa7, 0x0,

    /* U+002A "*" */
    0x13, 0xc3, 0x3, 0xdf, 0xb1, 0x5d, 0xed, 0x10,
    0x19, 0x0,

    /* U+002B "+" */
    0x0, 0x70, 0x0, 0x1e, 0x0, 0xef, 0xff, 0xb0,
    0x1e, 0x0, 0x1, 0xe0, 0x0,

    /* U+002C "," */
    0x12, 0x8b, 0xb5,

    /* U+002D "-" */
    0x4f, 0xfa,

    /* U+002E "." */
    0x13, 0x6e,

    /* U+002F "/" */
    0x0, 0x0, 0xe3, 0x0, 0x5, 0xc0, 0x0, 0xc,
    0x60, 0x0, 0x3e, 0x0, 0x0, 0x98, 0x0, 0x1,
    0xf1, 0x0, 0x7, 0xa0, 0x0, 0xd, 0x40, 0x0,

    /* U+0030 "0" */
    0x8, 0xee, 0x60, 0x3f, 0x35, 0xf1, 0x6d, 0x0,
    0xf4, 0x7d, 0x0, 0xf4, 0x6d, 0x0, 0xf4, 0x3f,
    0x35, 0xf1, 0x9, 0xee, 0x70,

    /* U+0031 "1" */
    0x3b, 0xf0, 0x88, 0xf0, 0x3, 0xf0, 0x3, 0xf0,
    0x3, 0xf0, 0x3, 0xf0, 0x3, 0xf0,

    /* U+0032 "2" */
    0x9, 0xee, 0x60, 0x4b, 0x27, 0xf1, 0x0, 0x3,
    0xf1, 0x0, 0xc, 0xa0, 0x0, 0xbb, 0x0, 0xc,
    0xb0, 0x0, 0x7f, 0xff, 0xf3,

    /* U+0033 "3" */
    0x6f, 0xff, 0xc0, 0x0, 0x3f, 0x40, 0x1, 0xd6,
    0x0, 0x7, 0xfe, 0x60, 0x0, 0x6, 0xf1, 0x16,
    0x27, 0xf1, 0x2c, 0xfd, 0x50,

    /* U+0034 "4" */
    0x0, 0x1f, 0x80, 0x0, 0x9f, 0x80, 0x3, 0xea,
    0x80, 0xc, 0x59, 0x80, 0x5c, 0x9, 0x80, 0xaf,
    0xef, 0xf4, 0x11, 0x1a, 0x90,

    /* U+0035 "5" */
    0x1f, 0xff, 0xd0, 0x3f, 0x0, 0x0, 0x4f, 0xcd,
    0x50, 0x16, 0x6, 0xf1, 0x0, 0x1, 0xf3, 0x49,
    0x17, 0xf0, 0xa, 0xed, 0x40,

    /* U+0036 "6" */
    0x0, 0x9b, 0x0, 0x3, 0xd1, 0x0, 0xc, 0xfe,
    0x60, 0x5e, 0x26, 0xf1, 0x9b, 0x0, 0xf4, 0x7e,
    0x37, 0xf1, 0x9, 0xfe, 0x50,

    /* U+0037 "7" */
    0xaf, 0xff, 0xf0, 0x11, 0xaa, 0x0, 0x1f, 0x40,
    0x7, 0xe0, 0x0, 0xd8, 0x0, 0x3f, 0x10, 0xa,
    0xb0, 0x0,

    /* U+0038 "8" */
    0x9, 0xec, 0x50, 0x5f, 0x16, 0xf0, 0x3f, 0x16,
    0xd0, 0xb, 0xff, 0x50, 0x7d, 0x14, 0xf1, 0x8d,
    0x14, 0xf3, 0x1a, 0xec, 0x70,

    /* U+0039 "9" */
    0xa, 0xfd, 0x50, 0x7e, 0x38, 0xf0, 0xa9, 0x1,
    0xf2, 0x8d, 0x17, 0xe0, 0xa, 0xff, 0x60, 0x0,
    0x5c, 0x0, 0x2, 0xf3, 0x0,

    /* U+003A ":" */
    0x6e, 0x13, 0x0, 0x13, 0x6e,

    /* U+003B ";" */
    0x6e, 0x13, 0x0, 0x12, 0x8b, 0xb5,

    /* U+003C "<" */
    0x0, 0x3, 0x50, 0x3b, 0xe5, 0xad, 0x60, 0x6,
    0xea, 0x30, 0x0, 0x6d, 0x90, 0x0, 0x2,

    /* U+003D "=" */
    0xde, 0xee, 0xb0, 0x0, 0x0, 0xde, 0xee, 0xb0,

    /* U+003E ">" */
    0x62, 0x0, 0x7, 0xea, 0x20, 0x0, 0x7e, 0x70,
    0x5c, 0xd4, 0xbc, 0x50, 0x2, 0x0, 0x0,

    /* U+003F "?" */
    0x3c, 0xfb, 0x22, 0x51, 0xba, 0x0, 0xc, 0x80,
    0xb, 0xb0, 0x0, 0xd1, 0x0, 0x15, 0x0, 0x4,
    0xf2, 0x0,

    /* U+0040 "@" */
    0x0, 0x8c, 0xcc, 0x91, 0x0, 0xa8, 0x0, 0x6,
    0xc0, 0x2d, 0x1c, 0xae, 0x3d, 0x25, 0xa5, 0xa0,
    0xe3, 0xb3, 0x5a, 0x5b, 0xe, 0x4d, 0x12, 0xd1,
    0xbb, 0x6c, 0x80, 0xa, 0x91, 0x0, 0x30, 0x0,
    0x7, 0xbc, 0xb9, 0x0,

    /* U+0041 "A" */
    0x0, 0xaf, 0x20, 0x0, 0xf, 0xb8, 0x0, 0x5,
    0xc4, 0xe0, 0x0, 0xb7, 0xe, 0x30, 0x1f, 0xfe,
    0xf9, 0x6, 0xd1, 0x16, 0xe0, 0xc8, 0x0, 0x1f,
    0x40,

    /* U+0042 "B" */
    0x2f, 0xff, 0xc1, 0x2f, 0x11, 0xd8, 0x2f, 0x11,
    0xe6, 0x2f, 0xff, 0xd1, 0x2f, 0x10, 0xab, 0x2f,
    0x10, 0xac, 0x2f, 0xff, 0xd3,

    /* U+0043 "C" */
    0x6, 0xdf, 0xb1, 0x2f, 0x83, 0x80, 0x5f, 0x0,
    0x0, 0x5f, 0x0, 0x0, 0x5f, 0x0, 0x0, 0x2f,
    0x83, 0x81, 0x6, 0xdf, 0xb2,

    /* U+0044 "D" */
    0x2f, 0xff, 0xb2, 0x2, 0xf4, 0x4b, 0xc0, 0x2f,
    0x10, 0x4f, 0x2, 0xf1, 0x4, 0xf0, 0x2f, 0x10,
    0x5f, 0x2, 0xf4, 0x4b, 0xc0, 0x2f, 0xff, 0xc3,
    0x0,

    /* U+0045 "E" */
    0x2f, 0xff, 0xf3, 0x2f, 0x32, 0x20, 0x2f, 0x10,
    0x0, 0x2f, 0xff, 0xf0, 0x2f, 0x42, 0x20, 0x2f,
    0x32, 0x20, 0x2f, 0xff, 0xf4,

    /* U+0046 "F" */
    0x2f, 0xff, 0xf5, 0x2f, 0x32, 0x20, 0x2f, 0x10,
    0x0, 0x2f, 0xff, 0xf2, 0x2f, 0x42, 0x20, 0x2f,
    0x10, 0x0, 0x2f, 0x10, 0x0,

    /* U+0047 "G" */
    0x5, 0xdf, 0xc3, 0x2f, 0x83, 0x71, 0x5f, 0x0,
    0x0, 0x5f, 0xb, 0xed, 0x5f, 0x1, 0x8e, 0x2f,
    0x83, 0xdb, 0x6, 0xef, 0xc2,

    /* U+0048 "H" */
    0x2f, 0x10, 0xc, 0x72, 0xf1, 0x0, 0xc7, 0x2f,
    0x10, 0xc, 0x72, 0xff, 0xff, 0xf7, 0x2f, 0x42,
    0x2d, 0x72, 0xf1, 0x0, 0xc7, 0x2f, 0x10, 0xc,
    0x70,

    /* U+0049 "I" */
    0x2f, 0x12, 0xf1, 0x2f, 0x12, 0xf1, 0x2f, 0x12,
    0xf1, 0x2f, 0x10,

    /* U+004A "J" */
    0x0, 0xe5, 0x0, 0xe5, 0x0, 0xe5, 0x0, 0xe5,
    0x0, 0xf5, 0x24, 0xf4, 0xcf, 0xa0,

    /* U+004B "K" */
    0x2f, 0x10, 0xca, 0x2, 0xf1, 0x9c, 0x0, 0x2f,
    0x8e, 0x10, 0x2, 0xff, 0x80, 0x0, 0x2f, 0x6f,
    0x30, 0x2, 0xf1, 0x8e, 0x10, 0x2f, 0x10, 0xcc,
    0x0,

    /* U+004C "L" */
    0x2f, 0x10, 0x0, 0x2f, 0x10, 0x0, 0x2f, 0x10,
    0x0, 0x2f, 0x10, 0x0, 0x2f, 0x10, 0x0, 0x2f,
    0x42, 0x20, 0x2f, 0xff, 0xf4,

    /* U+004D "M" */
    0x2f, 0xb0, 0x5, 0xf9, 0x2f, 0xf3, 0xc, 0xf9,
    0x2f, 0xaa, 0x4e, 0xc9, 0x2f, 0x3f, 0xd7, 0xc9,
    0x2f, 0x1a, 0xf0, 0xc9, 0x2f, 0x11, 0x20, 0xc9,
    0x2f, 0x10, 0x0, 0xc9,

    /* U+004E "N" */
    0x2f, 0x70, 0xe, 0x52, 0xff, 0x20, 0xe5, 0x2f,
    0xbb, 0xe, 0x52, 0xf3, 0xe5, 0xe5, 0x2f, 0x16,
    0xee, 0x52, 0xf1, 0xc, 0xf5, 0x2f, 0x10, 0x2f,
    0x50,

    /* U+004F "O" */
    0x6, 0xdf, 0xb2, 0x2, 0xf8, 0x3c, 0xc0, 0x5f,
    0x0, 0x5f, 0x5, 0xf0, 0x4, 0xf0, 0x5f, 0x0,
    0x5f, 0x2, 0xf8, 0x3c, 0xd0, 0x6, 0xdf, 0xc3,
    0x0,

    /* U+0050 "P" */
    0x2f, 0xff, 0xc3, 0x2f, 0x32, 0xbd, 0x2f, 0x10,
    0x9d, 0x2f, 0xff, 0xe5, 0x2f, 0x31, 0x0, 0x2f,
    0x10, 0x0, 0x2f, 0x10, 0x0,

    /* U+0051 "Q" */
    0x6, 0xdf, 0xb2, 0x2, 0xf8, 0x3c, 0xc0, 0x5f,
    0x0, 0x5f, 0x5, 0xf0, 0x4, 0xf0, 0x5f, 0x2,
    0x5f, 0x2, 0xf8, 0xbf, 0xc0, 0x6, 0xdf, 0xea,
    0x0, 0x0, 0x0, 0x30,

    /* U+0052 "R" */
    0x2f, 0xff, 0xc2, 0x2, 0xf3, 0x2c, 0xb0, 0x2f,
    0x10, 0xbb, 0x2, 0xff, 0xfe, 0x30, 0x2f, 0x39,
    0xb0, 0x2, 0xf1, 0x1f, 0x40, 0x2f, 0x10, 0x9d,
    0x0,

    /* U+0053 "S" */
    0xa, 0xef, 0xa0, 0x7e, 0x43, 0x40, 0x7e, 0x30,
    0x0, 0x19, 0xfe, 0x60, 0x0, 0x6, 0xf2, 0x25,
    0x27, 0xf2, 0x6e, 0xfd, 0x70,

    /* U+0054 "T" */
    0xcf, 0xff, 0xf4, 0x11, 0xe7, 0x10, 0x0, 0xd6,
    0x0, 0x0, 0xd6, 0x0, 0x0, 0xd6, 0x0, 0x0,
    0xd6, 0x0, 0x0, 0xd6, 0x0,

    /* U+0055 "U" */
    0x4f, 0x0, 0x4f, 0x4, 0xf0, 0x4, 0xf0, 0x4f,
    0x0, 0x4f, 0x4, 0xf0, 0x4, 0xf0, 0x3f, 0x0,
    0x4f, 0x1, 0xf8, 0x3b, 0xd0, 0x6, 0xdf, 0xc3,
    0x0,

    /* U+0056 "V" */
    0xc8, 0x0, 0x9c, 0x7d, 0x0, 0xd7, 0x2f, 0x22,
    0xf2, 0xd, 0x67, 0xc0, 0x9, 0xbb, 0x70, 0x4,
    0xff, 0x20, 0x0, 0xed, 0x0,

    /* U+0057 "W" */
    0xca, 0x1, 0xf8, 0x5, 0xf0, 0x8e, 0x5, 0xfc,
    0x9, 0xc0, 0x4f, 0x19, 0xcf, 0xc, 0x80, 0xf,
    0x5e, 0x5f, 0x4f, 0x40, 0xc, 0xbf, 0xb, 0xbf,
    0x0, 0x8, 0xfc, 0x7, 0xfc, 0x0, 0x4, 0xf8,
    0x3, 0xf8, 0x0,

    /* U+0058 "X" */
    0x8e, 0x10, 0xbb, 0x0, 0xd8, 0x3f, 0x20, 0x4,
    0xfd, 0x70, 0x0, 0xd, 0xf1, 0x0, 0x5, 0xed,
    0x80, 0x1, 0xe6, 0x4f, 0x20, 0x9d, 0x0, 0xbb,
    0x0,

    /* U+0059 "Y" */
    0xbb, 0x0, 0xc8, 0x2f, 0x35, 0xf1, 0xa, 0xbd,
    0x70, 0x2, 0xfe, 0x0, 0x0, 0xc9, 0x0, 0x0,
    0xc9, 0x0, 0x0, 0xc9, 0x0,

    /* U+005A "Z" */
    0x5f, 0xff, 0xf5, 0x0, 0xa, 0xe0, 0x0, 0x3f,
    0x40, 0x0, 0xda, 0x0, 0x8, 0xe1, 0x0, 0x3f,
    0x61, 0x10, 0x9f, 0xff, 0xf5,

    /* U+005B "[" */
    0xff, 0x2f, 0x10, 0xf1, 0xf, 0x10, 0xf1, 0xf,
    0x10, 0xf1, 0xf, 0xf2,

    /* U+005C "\\" */
    0xd, 0x40, 0x0, 0x7, 0xa0, 0x0, 0x1, 0xf1,
    0x0, 0x0, 0x98, 0x0, 0x0, 0x2e, 0x0, 0x0,
    0xc, 0x60, 0x0, 0x5, 0xc0, 0x0, 0x0, 0xe3,

    /* U+005D "]" */
    0xbf, 0x60, 0xb6, 0xb, 0x60, 0xb6, 0xb, 0x60,
    0xb6, 0xb, 0x6b, 0xf6,

    /* U+005E "^" */
    0x0, 0xe7, 0x0, 0x6, 0xde, 0x0, 0xd, 0x4b,
    0x70, 0x5d, 0x4, 0xe0,

    /* U+005F "_" */
    0xbb, 0xbb, 0x50,

    /* U+0060 "`" */
    0x17, 0x0, 0x97,

    /* U+0061 "a" */
    0x1c, 0xea, 0x10, 0x30, 0xc7, 0x2b, 0xdf, 0x88,
    0x90, 0xc8, 0x3d, 0xdc, 0x80,

    /* U+0062 "b" */
    0x3f, 0x0, 0x0, 0x3f, 0x0, 0x0, 0x3f, 0xbe,
    0x80, 0x3f, 0x66, 0xf1, 0x3f, 0x0, 0xf3, 0x3f,
    0x43, 0xf1, 0x3e, 0xce, 0x80,

    /* U+0063 "c" */
    0xa, 0xfd, 0x15, 0xf3, 0x40, 0x7c, 0x0, 0x5,
    0xf3, 0x40, 0xa, 0xfd, 0x10,

    /* U+0064 "d" */
    0x0, 0x3, 0xf0, 0x0, 0x3f, 0xb, 0xfc, 0xf5,
    0xf3, 0x9f, 0x7c, 0x4, 0xf5, 0xe3, 0x9f, 0xb,
    0xfb, 0xf0,

    /* U+0065 "e" */
    0x9, 0xed, 0x40, 0x5e, 0x17, 0xd0, 0x7f, 0xcd,
    0xe0, 0x5e, 0x11, 0x10, 0xa, 0xfe, 0x60,

    /* U+0066 "f" */
    0x6, 0xe6, 0xd, 0x60, 0xbf, 0xf5, 0xd, 0x50,
    0xd, 0x50, 0xd, 0x50, 0xd, 0x50,

    /* U+0067 "g" */
    0xb, 0xfb, 0xf5, 0xe1, 0x8f, 0x7c, 0x4, 0xf5,
    0xf3, 0x9f, 0xb, 0xfc, 0xf0, 0x20, 0x8d, 0x1d,
    0xfd, 0x40,

    /* U+0068 "h" */
    0x3f, 0x0, 0x0, 0x3f, 0x0, 0x0, 0x3f, 0xae,
    0x80, 0x3f, 0x35, 0xf0, 0x3f, 0x1, 0xf1, 0x3f,
    0x1, 0xf1, 0x3f, 0x1, 0xf1,

    /* U+0069 "i" */
    0x4f, 0x1, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f,

    /* U+006A "j" */
    0x4, 0xf0, 0x1, 0x3, 0xf0, 0x3f, 0x3, 0xf0,
    0x3f, 0x3, 0xf0, 0x5f, 0x2f, 0x80,

    /* U+006B "k" */
    0x3f, 0x0, 0x0, 0x3f, 0x0, 0x0, 0x3f, 0xa,
    0xb0, 0x3f, 0x8d, 0x10, 0x3f, 0xf5, 0x0, 0x3f,
    0x6e, 0x20, 0x3f, 0x9, 0xd1,

    /* U+006C "l" */
    0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f,

    /* U+006D "m" */
    0x3f, 0xbf, 0x8b, 0xe9, 0x3, 0xf4, 0x6f, 0x63,
    0xf2, 0x3f, 0x1, 0xf1, 0xf, 0x33, 0xf0, 0x1f,
    0x10, 0xf3, 0x3f, 0x1, 0xf1, 0xf, 0x30,

    /* U+006E "n" */
    0x3f, 0xbe, 0x70, 0x3f, 0x36, 0xf0, 0x3f, 0x1,
    0xf1, 0x3f, 0x1, 0xf1, 0x3f, 0x1, 0xf1,

    /* U+006F "o" */
    0xa, 0xfd, 0x40, 0x5f, 0x39, 0xd0, 0x7c, 0x4,
    0xf0, 0x5f, 0x39, 0xd0, 0xa, 0xfd, 0x40,

    /* U+0070 "p" */
    0x3e, 0xbe, 0x70, 0x3f, 0x55, 0xf1, 0x3f, 0x0,
    0xf3, 0x3f, 0x56, 0xf1, 0x3f, 0xce, 0x80, 0x3f,
    0x0, 0x0, 0x3f, 0x0, 0x0,

    /* U+0071 "q" */
    0xb, 0xfb, 0xf5, 0xe1, 0x8f, 0x7c, 0x4, 0xf5,
    0xf3, 0x9f, 0xb, 0xfc, 0xf0, 0x0, 0x3f, 0x0,
    0x3, 0xf0,

    /* U+0072 "r" */
    0x3f, 0xaa, 0x3f, 0x50, 0x3f, 0x0, 0x3f, 0x0,
    0x3f, 0x0,

    /* U+0073 "s" */
    0x4c, 0xfa, 0xa, 0xa0, 0x20, 0x3c, 0xe9, 0x2,
    0x22, 0xf2, 0x6e, 0xe9, 0x0,

    /* U+0074 "t" */
    0x7, 0x10, 0xf, 0x30, 0xbf, 0xf4, 0xf, 0x30,
    0xf, 0x30, 0xf, 0x40, 0x8, 0xf4,

    /* U+0075 "u" */
    0x4e, 0x2, 0xf0, 0x4e, 0x2, 0xf0, 0x4e, 0x2,
    0xf0, 0x3f, 0x26, 0xf0, 0xa, 0xea, 0xf0,

    /* U+0076 "v" */
    0xc8, 0x5, 0xe0, 0x6d, 0xa, 0x80, 0x1f, 0x3f,
    0x20, 0xb, 0xcc, 0x0, 0x5, 0xf6, 0x0,

    /* U+0077 "w" */
    0xc9, 0xe, 0x90, 0xe5, 0x7d, 0x2f, 0xd2, 0xf1,
    0x2f, 0x88, 0xe8, 0xc0, 0xe, 0xf4, 0xaf, 0x70,
    0x9, 0xf0, 0x6f, 0x20,

    /* U+0078 "x" */
    0x8d, 0xb, 0xa0, 0xda, 0xe0, 0x6, 0xf7, 0x0,
    0xda, 0xe1, 0x9c, 0xb, 0xa0,

    /* U+0079 "y" */
    0xc8, 0x7, 0xc6, 0xd0, 0xc6, 0x1f, 0x4f, 0x0,
    0xbd, 0xa0, 0x5, 0xf4, 0x0, 0x5e, 0x0, 0x3e,
    0x50, 0x0,

    /* U+007A "z" */
    0x8f, 0xff, 0x50, 0x9, 0xd0, 0x5, 0xf2, 0x2,
    0xf5, 0x0, 0xaf, 0xff, 0x50,

    /* U+007B "{" */
    0x5, 0xd1, 0xc, 0x60, 0xc, 0x40, 0xe, 0x30,
    0x8d, 0x0, 0xe, 0x30, 0xc, 0x40, 0xc, 0x60,
    0x5, 0xe1,

    /* U+007C "|" */
    0x0, 0x0, 0xf0, 0xf, 0x0, 0xf0, 0xf, 0x0,
    0xf0, 0xf, 0x0, 0xf0, 0xf, 0x0,

    /* U+007D "}" */
    0x9a, 0x0, 0xf3, 0xe, 0x30, 0xd5, 0x6, 0xf0,
    0xd5, 0xe, 0x30, 0xf3, 0x9b, 0x0,

    /* U+007E "~" */
    0x3d, 0xa2, 0x2, 0x54, 0x6e, 0xf4, 0x0, 0x0,
    0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 40, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 53, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 11, .adv_w = 71, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 17, .adv_w = 104, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 42, .adv_w = 91, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 69, .adv_w = 126, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 97, .adv_w = 115, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 125, .adv_w = 43, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 128, .adv_w = 54, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 146, .adv_w = 55, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 160, .adv_w = 74, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 170, .adv_w = 109, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 183, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 186, .adv_w = 70, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 188, .adv_w = 40, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 190, .adv_w = 70, .box_w = 6, .box_h = 8, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 214, .adv_w = 94, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 235, .adv_w = 66, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 249, .adv_w = 90, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 270, .adv_w = 90, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 291, .adv_w = 90, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 312, .adv_w = 90, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 333, .adv_w = 90, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 354, .adv_w = 85, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 372, .adv_w = 90, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 393, .adv_w = 90, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 414, .adv_w = 40, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 419, .adv_w = 40, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 425, .adv_w = 109, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 440, .adv_w = 109, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 448, .adv_w = 109, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 463, .adv_w = 82, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 481, .adv_w = 142, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 517, .adv_w = 104, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 542, .adv_w = 102, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 563, .adv_w = 93, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 584, .adv_w = 107, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 609, .adv_w = 93, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 630, .adv_w = 91, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 651, .adv_w = 104, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 672, .adv_w = 117, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 697, .adv_w = 48, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 708, .adv_w = 65, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 722, .adv_w = 99, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 747, .adv_w = 88, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 768, .adv_w = 135, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 796, .adv_w = 116, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 821, .adv_w = 107, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 846, .adv_w = 100, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 867, .adv_w = 107, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 895, .adv_w = 101, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 920, .adv_w = 91, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 941, .adv_w = 89, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 962, .adv_w = 108, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 987, .adv_w = 96, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1008, .adv_w = 148, .box_w = 10, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1043, .adv_w = 98, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1068, .adv_w = 94, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1089, .adv_w = 92, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1110, .adv_w = 54, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1122, .adv_w = 70, .box_w = 6, .box_h = 8, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 1146, .adv_w = 54, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1158, .adv_w = 89, .box_w = 6, .box_h = 4, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 1170, .adv_w = 72, .box_w = 5, .box_h = 1, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1173, .adv_w = 61, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 1176, .adv_w = 84, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1189, .adv_w = 92, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1210, .adv_w = 74, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1223, .adv_w = 92, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1241, .adv_w = 88, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1256, .adv_w = 57, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1270, .adv_w = 92, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1288, .adv_w = 93, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1309, .adv_w = 44, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1316, .adv_w = 44, .box_w = 3, .box_h = 9, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 1330, .adv_w = 86, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1351, .adv_w = 44, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1358, .adv_w = 143, .box_w = 9, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1381, .adv_w = 93, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1396, .adv_w = 88, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1411, .adv_w = 92, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1432, .adv_w = 92, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1450, .adv_w = 60, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1460, .adv_w = 73, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1473, .adv_w = 57, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1487, .adv_w = 93, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1502, .adv_w = 83, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1517, .adv_w = 122, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1537, .adv_w = 81, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1550, .adv_w = 80, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1568, .adv_w = 76, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1581, .adv_w = 55, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1599, .adv_w = 48, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1613, .adv_w = 55, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1627, .adv_w = 97, .box_w = 6, .box_h = 3, .ofs_x = 0, .ofs_y = 2}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 4,
    .kern_classes = 0,
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
const lv_font_t douyin_10 = {
#else
lv_font_t douyin_10 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 10,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if DOUYIN_10*/
