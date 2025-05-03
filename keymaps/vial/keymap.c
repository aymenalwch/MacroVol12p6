// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_6x2(

          MO(2),   KC_2,   KC_3,   KC_4,   KC_5, KC_6,
          MO(1),   KC_T,   KC_Y,   KC_I,   KC_O, KC_P
  ),
    [1] = LAYOUT_6x2(

          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT,
          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  ),
    [2] = LAYOUT_6x2(

          RGB_TOG, RGB_RMOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_MOD,
          XXXXXXX,  XXXXXXX, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX
  )
};
