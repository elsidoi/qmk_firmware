 /* Copyright 2020 Imam Rafii
  *
  * This program is free software: you can redistribute it and/or modify
  * it under the terms of the GNU General Public License as published by
  * the Free Software Foundation, either version 2 of the License, or
  * (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License
  * along with this program.  If not, see <http://www.gnu.org/licenses/>.
  */
#include QMK_KEYBOARD_H

enum layers {
    _BL,
    _FL
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BL] = LAYOUT(
        //      |------------------------------------------.         
                    KC_ESC,     KC_F1,  KC_F2,  KC_F3,  KC_F4, KC_F5, 
        //      |------------------------------------------.
                    KC_TILD,    KC_1,   KC_2,   KC_3,   KC_4,  MT(MOD_RSFT, KC_5),
        //      |------------------------------------------.
                    KC_TAB,     KC_Q,   KC_W,   KC_E,   KC_R,  KC_T,
        //      |------+------+------+------+------+------+-------|         
                    KC_LSFT,    KC_A,   KC_S,   KC_D,   KC_F,  KC_G,         
        //      |------+------+------+------+------+------+-------|         
                    KC_LCTL,    KC_Z,   KC_X,   KC_C,   KC_V,  KC_B,         
        //      |------+------+------+------+------+------+-------|         
                    KC_NO,      KC_NO,  KC_LCTL,KC_LSFT,KC_BSPC, LT(_FL, KC_SPC)
          ),
    [_FL] = LAYOUT(
        //      |------------------------------------------.         
                    KC_ESC,     KC_F1,  KC_F2,  KC_F3,  KC_F4, KC_F5, 
        //      |------------------------------------------.
                    KC_TILD,    KC_1,   KC_2,   KC_3,   KC_4,  KC_5, 
        //      |------------------------------------------.
                    KC_TAB,     KC_Q,   KC_UP,   KC_E,   KC_R,  KC_T,
        //      |------+------+------+------+------+------+-------|         
                    KC_LSFT,    KC_LEFT,   KC_DOWN, KC_RIGHT,   KC_F,  KC_G,         
        //      |------+------+------+------+------+------+-------|         
                    KC_LCTL,    KC_Z,   KC_X,   KC_C,   KC_V,  KC_B,         
        //      |------+------+------+------+------+------+-------|         
                    KC_NO,      KC_NO,  KC_NO,  KC_LSFT,KC_LGUI, LT(_FL, KC_SPC)
    )
};


