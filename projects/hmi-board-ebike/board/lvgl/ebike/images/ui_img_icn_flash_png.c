// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.1
// LVGL version: 8.3.6
// Project name: Futuristic_Ebike

#include "../ui.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
    #define LV_ATTRIBUTE_MEM_ALIGN
#endif

// IMAGE DATA: assets/icn_flash.png
const LV_ATTRIBUTE_MEM_ALIGN uint8_t ui_img_icn_flash_png_data[] = {
    0x00,0x00,0x05,0x00,0x00,0xCF,0x00,0x00,0xF2,0x00,0x00,0xF0,0x00,0x00,0xF0,0x00,0x00,0xF1,0x00,0x00,0xF2,0x00,0x00,0x4C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x23,0xC4,0x08,0xFF,0x5E,0x3D,0xFF,0x5E,0x3D,0xFF,0x5E,0x3D,0xFF,0x5E,0x3D,0xFF,0x26,0x09,0xFF,0x00,0x00,0x35,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x68,0x11,0xFF,0x9F,0x45,0xFF,0x9F,0x45,0xFF,0x9F,0x45,0xFF,0x52,0x23,0xFF,0x00,0x00,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x5E,0x0B,0x1A,0xFF,0x9F,0x45,0xFF,0x9F,0x45,0xFF,0x9F,0x45,0xFF,0xE5,0x08,0xFF,0x00,0x00,0x2B,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7D,0xCF,0x22,0xFF,0x9F,0x45,0xFF,0x9F,0x45,0xFF,0x7E,0x3D,0xFF,0x00,0x00,0xF6,0x00,0x00,0x4D,0x00,0x00,0x4A,0x00,0x00,0x4A,0x00,0x00,0x4C,0x00,0x00,0x40,0x00,0x00,0x9C,0x73,0x2B,0xFF,0x9F,0x45,0xFF,0x9F,0x45,0xFF,0x9F,0x45,0xFF,0x00,0x00,0xFD,0xA9,0x11,0xFF,0xA9,0x11,0xFF,0xA9,0x11,0xFF,
    0xA9,0x11,0xFF,0x00,0x00,0xFF,0x00,0x00,0xC1,0x38,0x34,0xFF,0x9F,0x45,0xFF,0x9F,0x45,0xFF,0x9F,0x45,0xFF,0x9F,0x45,0xFF,0x9F,0x45,0xFF,0x9F,0x45,0xFF,0x9F,0x45,0xFF,0x4D,0x1A,0xFF,0x00,0x00,0x7E,0x00,0x00,0xFB,0x6D,0x1A,0xFF,0x6D,0x1A,0xFF,0x4D,0x1A,0xFF,0xCF,0x22,0xFF,0x1C,0x3D,0xFF,0x9F,0x45,0xFF,0x9F,0x45,0xFF,0x11,0x23,0xFF,0x00,0x00,0xD2,0x00,0x00,0x00,0x00,0x00,0x52,0x00,0x00,0x6D,0x00,0x00,0x6C,0x00,0x00,0x6B,0x00,0x00,0x7D,0xCF,0x22,0xFF,0x9F,0x45,0xFF,0xFC,0x3C,0xFF,0xC4,0x08,0xFF,0x00,0x00,0x22,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1E,0xA3,0x08,0xFF,0x9F,0x45,0xFF,0x4D,0x1A,0xFF,0x00,0x00,0x77,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7A,0xAF,0x22,0xFF,0xF0,0x22,0xFF,0x00,0x00,0xCE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xAB,0xD5,0x2B,0xFF,0xA3,0x08,0xFF,
    0x00,0x00,0x1E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE2,0x4D,0x1A,0xFF,0x00,0x00,0x77,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x29,0xE5,0x08,0xFF,0x00,0x00,0xDA,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3B,0x00,0x00,0xDB,0x00,0x00,0x24,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
const lv_img_dsc_t ui_img_icn_flash_png = {
    .header.always_zero = 0,
    .header.w = 11,
    .header.h = 15,
    .data_size = sizeof(ui_img_icn_flash_png_data),
    .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
    .data = ui_img_icn_flash_png_data
};

