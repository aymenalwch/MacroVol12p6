// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP25


#ifdef RGBLIGHT_ENABLE
#   define WS2812_DI_PIN GP15
#   define RGBLIGHT_LED_COUNT 5   // Number of LEDs
// #   define RGBLIGHT_SLEEP      //  the RGB lighting will be switched off when the host goes to sleep
#   define RGBLIGHT_MODE_PLAIN
#   define RGBLIGHT_EFFECT_BREATHING
#   define RGBLIGHT_EFFECT_RAINBOW_MOOD
#   define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#   define RGBLIGHT_EFFECT_STATIC_GRADIENT
#   define RGBLIGHT_EFFECT_TWINKLE

#   define RGBLIGHT_HUE_STEP 2
#   define RGBLIGHT_SAT_STEP 51
#   define RGBLIGHT_VAL_STEP 51

#   define RGBLIGHT_DEFAULT_ON true
#   define RGBLIGHT_TIMEOUT 30000  // 30 seconds
#endif