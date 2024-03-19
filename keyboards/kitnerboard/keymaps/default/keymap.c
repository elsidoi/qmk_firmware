// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┐
     * │Esc│ 1 │ 2 │ 3 │ 4 │ 5 │
     * ├───┼───┼───┼───┼───┼───┤
     * │Tab│ q │ w │ e │ r │ t │
     * ├───┼───┼───┼───┼───┼───┼───┐
     * │Sht│ a │ s │ d │ f │ g │ [ │
     * ├───┼───┼───┼───┼───┼───┼───┤
     * │Ctl│ z │ x │ c │ v │ b │ х │
     * └───┴───┴───┴───┴───┼───┼───┼───┐
     *                     │Ent│BSP│SPC│
     *                     └───┴───┴───┘
     */
    [0] = LAYOUT_eskarpish_left(
        KC_ESC,     KC_P1,      KC_P2,      KC_P3,  KC_P4,  KC_P5,      KC_LBRC,
        KC_TAB,     KC_Q,       KC_W,       KC_E,   KC_R,   KC_T,       KC_RBRC,
        KC_LSFT,    KC_A,       KC_S,       KC_D,   KC_F,   KC_G,       KC_LSFT,
        KC_LCTL,    KC_Z,       KC_X,       KC_C,   KC_V,   KC_B,       KC_SPC, KC_ENT
    )
};
