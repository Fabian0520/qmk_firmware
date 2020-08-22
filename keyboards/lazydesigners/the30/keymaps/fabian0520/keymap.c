#include "fabian0520.h"
/* Copyright 2019 Erovia
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

/* Press for Enter, hold for FN layer */
#define FN_ENT LT(_FN, KC_ENT)
#define LCTL_Z  MT(MOD_LCTL, KC_Z)
#define LGUI_X  MT(MOD_LGUI, KC_X)
#define LALT_C  MT(MOD_LALT, KC_C)
#define LCTL_Z  MT(MOD_LCTL, KC_Z)
#define LCTL_Z  MT(MOD_LCTL, KC_Z)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 *  ,-------------------------------------------------.
 *  | Q  | W  | E  | R  | T  | Y  | U  | I  | O  | P  |
 *  |-------------------------------------------------|
 *  | A  | S  | D  | F  | G  | H  | J  | K  | L  |ENT |
 *  |-------------------------------------------------|
 *  | Z  | X  | C  | V  | B  | N  | M  | ,  | .  | /  |
 *  `-------------------------------------------------'
 */
    [_COLEMAK] = LAYOUT_ortho_3x10(
        TD(TD_Q_ESC),  KC_W   ,   KC_F  ,   KC_P   ,   KC_G   ,   KC_J   ,   KC_L   ,   KC_U   ,   KC_Y  , KC_BSPC ,
        MT(MOD_LSFT, KC_A)   ,  KC_R   ,   KC_S  ,   KC_T   ,   KC_D   ,   KC_H   ,   KC_N   ,   KC_E   ,   KC_I  ,  MT(MOD_RSFT, KC_O)   ,
        LCTL_Z   ,  LGUI_X   ,   LALT_C  ,   KC_V  ,   LT(_NUM, KC_B)   ,   LT(_MOV, KC_K)   ,   KC_M  ,  MY_COMM ,  MY_DOT , TD(TD_SPC_ENT)
    ),
/*
 *  ,-------------------------------------------------.
 *  | 1  | 2  | 3  | 4  | 5  | 6  | 7  | 8  | 9  | 0  |
 *  |-------------------------------------------------|
 *  |    |    |    |    |    |    |    |    |    |    |
 *  |-------------------------------------------------|
 *  |RST |ERST|    |    |SPC |    |    |    |    |    |
 *  `-------------------------------------------------'
 */
    [_NUM] = LAYOUT_ortho_3x10(
    MY_EURO ,  MY_PARA ,  MY_CIRC ,  KC_QUOT ,  KC_NO   , KC_NUBS ,   KC_7   ,   KC_8   ,   KC_9   ,  KC_ASTR ,
    MT(MOD_LSFT, S(KC_7)) ,  S(KC_6) ,  S(KC_5) ,  S(KC_4) ,KC_EQL,  KC_COMM ,   KC_4   ,   KC_5   ,   KC_6   ,  MT(MOD_RSFT, KC_PLUS) ,
  S(KC_SLSH),  S(KC_3) ,  S(KC_2) , S(KC_1)  , KC_TRNS ,   KC_TRNS   ,   KC_1   ,   KC_2   ,   KC_3   , KC_MINUS 
 ), 

    [_MOV] = LAYOUT_ortho_3x10(
    KC_PGUP ,  KC_HOME ,  KC_UP   ,  KC_END  ,  KC_NO   ,  KC_NO   ,  i3_S_7  ,  i3_S_8  ,  i3_S_9  ,  KC_NO   ,
    KC_PGDN ,  KC_LEFT ,  KC_DOWN ,  KC_RGHT ,  KC_NO   ,  KC_NO   ,  i3_S_4  ,  i3_S_5  ,  i3_S_6  ,  KC_NO   ,
    KC_NO   ,  KC_NO   ,  KC_NO   ,  KC_NO   , KC_TRNS  , KC_TRNS  ,  i3_S_1  ,  i3_S_2  ,  i3_S_3  ,  KC_NO   
 ), 


    [_ADJUST] = LAYOUT_ortho_3x10(
     RESET  ,  COLEMAK ,   KC_NO  ,   KC_NO  ,   KC_NO  ,   KC_NO  ,   KC_NO  ,   KC_NO  ,   KC_NO  ,   KC_NO  ,
     KC_NO  ,   KC_NO  ,   KC_NO  ,   KC_NO  ,   KC_NO  ,   KC_NO  ,   KC_NO  ,   KC_NO  ,   KC_NO  ,   KC_NO  ,
     KC_NO  ,   KC_NO  ,   KC_NO  ,   KC_NO  ,  KC_TRNS ,  KC_TRNS ,   KC_NO  ,   KC_NO  ,   KC_NO  ,   KC_NO  
 ), 
};
