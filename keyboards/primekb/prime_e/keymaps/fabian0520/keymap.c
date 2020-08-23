/* Copyright 2018 Holten Campbell
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
#include "fabian0520.h"
#include "unicode_fabi.h"
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_COLEMAK]=LAYOUT(
		KC_ESC,   KC_Q,     KC_W,     KC_F,   KC_P,    KC_G,          KC_J,   KC_L,     KC_U, KC_Y,    KC_SCLN,   KC_SCLN, KC_BSPC,
		LT(_SYM, KC_TAB),   KC_A,     KC_R,     KC_S,   KC_T,    KC_D,          KC_H,   KC_N,     KC_E, KC_I,    KC_O,   KC_DEL,
		KC_LSFT,  KC_Z,     KC_X,     KC_C,   KC_V,    KC_B,          RESET,  KC_K,     KC_M, MY_COMM, MY_DOT,  KC_RSFT, KC_LSFT,
		KC_LCTL,  KC_LGUI,  KC_LALT,        NUM_SPC,	          MOV_ENT , KC_RALT,                          KC_RGUI, KC_RCTL
    ),

    [_QWERTY]=LAYOUT(
		KC_ESC,   KC_Q,     KC_W,     KC_E,   KC_R,    KC_T,          KC_Y,   KC_U,     KC_I, KC_O,    KC_P,   KC_SCLN, KC_BSPC,
		LT(_SYM, KC_TAB),   KC_A,     KC_S,     KC_D,   KC_F,    KC_G,          KC_H,   KC_J,     KC_K, KC_L,    KC_SCLN,   KC_DEL,
		KC_LSFT,  KC_Z,     KC_X,     KC_C,   KC_V,    KC_B,          RESET,  KC_N,     KC_M, MY_COMM, MY_DOT,  KC_RSFT, KC_LSFT,
		KC_LCTL,  KC_LGUI,  KC_LALT,        NUM_SPC,	          MOV_ENT , KC_RALT,                          KC_RGUI, KC_RCTL
    ),

    [_NUM]=LAYOUT(
		KC_TRNS,   MY_EURO,   MY_PARA,   MY_CIRC,   KC_QUOT,  KC_NO    ,         KC_SLASH,   KC_7   ,    KC_8   ,     KC_9  ,  KC_ASTR,   KC_TRNS,   KC_TRNS,
		KC_TRNS,   S(KC_7),   S(KC_6),   S(KC_5),   S(KC_4), S(KC_MINS),          KC_COMM,   KC_4   ,    KC_5   ,     KC_6  ,  KC_PLUS,   KC_TRNS,
		KC_TRNS,S(KC_SLASH),  S(KC_3),   S(KC_2),   S(KC_1),   KC_EQUAL,         KC_TRNS,    KC_0   ,   KC_1   ,    KC_2   ,     KC_3  ,  KC_MINUS,   KC_TRNS,
		KC_TRNS,   KC_TRNS,                         KC_TRNS,    KC_TRNS,	        KC_TRNS,   KC_TRNS,                                     KC_TRNS,   KC_TRNS
    ),

    [_MOV]=LAYOUT(
		KC_TRNS,  KC_PGUP,   KC_HOME,   KC_UP  ,   KC_END ,    KC_NO  ,          KC_NO  , i3_S_7,  i3_S_8,  i3_S_9,    KC_NO,    KC_NO,      KC_NO,
		KC_TRNS,  KC_PGDN,   KC_LEFT,   KC_DOWN,   KC_RGHT,    KC_NO  ,          KC_NO,   i3_S_4,  i3_S_5,  i3_S_6,  KC_NO,   KC_NO,
		KC_TRNS,  KC_NO  ,   KC_NO  ,   KC_NO  ,   KC_NO  ,    KC_NO  ,          KC_TRNS, KC_NO ,  i3_S_1,  i3_S_2,   i3_S_3,   KC_NO,   KC_NO,
		KC_TRNS,  KC_TRNS,                         KC_TRNS,    KC_TRNS,	         KC_TRNS,   KC_TRNS,                               KC_TRNS,  KC_TRNS
    ),

    [_SYM]=LAYOUT(
		RESET  ,  KC_F12,   KC_F11,   KC_F10,   KC_F9,   KC_NO,          KC_PLUS,   KC_LBRC,  KC_RBRC, KC_LT  , KC_GT  ,    KC_TRNS,  KC_TRNS,
		KC_TRNS,  KC_F8 ,   KC_F7 ,   KC_F6 ,   KC_F5,   KC_NO,          KC_MINS,   KC_LPRN,  KC_RPRN, KC_LCBR, KC_RCBR,    KC_TRNS,
		KC_TRNS,  KC_F4 ,   KC_F3 ,   KC_F2 ,   KC_F1,   KC_NO,          KC_TRNS,  KC_EQUAL,   KC_PIPE,  KC_BSLS, KC_QUES, KC_GRAVE,   KC_TRNS,
		KC_TRNS,  KC_TRNS,                         KC_TRNS,    KC_TRNS,	         KC_TRNS,   KC_TRNS,                        KC_TRNS,  KC_TRNS
    ),

    [_ADJUST]=LAYOUT(
		SCRE_UP,  DF(_QWERTY),   DF(_COLEMAK),   X(STAR),   KC_NO,   KC_NO,          KC_NO,   KC_NO,  KC_NO, KC_NO  , KC_NO  ,    KC_NO,  KC_NO,
		SCRE_DN,  UC_MOD ,   KC_NO ,   KC_NO ,   KC_NO,   KC_NO,          KC_NO,   KC_NO,  KC_NO, KC_NO, KC_NO,    KC_NO,
		KC_NO,  KC_NO ,   KC_NO ,   KC_NO ,   KC_NO,   KC_NO,          KC_NO,  KC_NO,   KC_NO,  KC_NO, KC_NO, KC_NO,   KC_NO,
		KC_TRNS,  KC_TRNS,                         KC_TRNS,    KC_TRNS,	         KC_TRNS,   KC_TRNS,                        KC_TRNS,  KC_TRNS
    )
};

void matrix_init_user(void) {
  // set CapsLock LED to output and low
  setPinOutput(B1);
  writePinLow(B1);
  // set NumLock LED to output and low
  setPinOutput(B2);
  writePinLow(B2);
  // set ScrollLock LED to output and low
  setPinOutput(B3);
  writePinLow(B3);
}
//function for layer indicator LED
uint32_t layer_state_set_keymap(layer_state_t state)
{
    //state = update_tri_layer_state(state, _MOV, _NUM, _ADJUST);
    switch(get_highest_layer(state)){
        case _COLEMAK:
            writePinHigh(B1);
            writePinLow(B2);
            writePinLow(B3);
            break;
        case _QWERTY:
            writePinLow(B1);
            writePinLow(B2);
            writePinLow(B3);
            break;
        case _NUM:
            writePinLow(B1);
            writePinHigh(B2);
            writePinLow(B3);
            break;
        case _MOV:
            writePinLow(B1);
            writePinLow(B2);
            writePinHigh(B3);
            break;
        case _SYM:
            writePinLow(B1);
            writePinHigh(B2);
            writePinHigh(B3);
            break;
    }
    return state;
}
