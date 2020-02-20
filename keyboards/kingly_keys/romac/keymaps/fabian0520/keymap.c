/* Copyright 2019 Stanrc85
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
#include "rgb_color_sets.h"
//#include "fabian0520.h"

#define MOD_0       LT(_MOD,KC_0)
#define MOD_1       LT(_MOD,KC_A)
#define SYM_COMM    LT(_SYM,KC_COMM)
//#define BASE        TO(_BASE)
//#define MOV         TO(_MOV)

enum layers {
  _BASE,
  _MOD,
  _SYM,
  _MOV,
  _RGB,
  _LAYSEL,
};

enum custom_keycodes {
  BASE = SAFE_RANGE,
  RGB_LYR,
  RGB_SET,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_BASE] = LAYOUT(
		KC_7      , KC_8     , KC_9     , \
		KC_4      , KC_5     , KC_6     , \
		KC_1      , KC_2     , KC_3     , \
        MOD_0     , KC_DOT   , SYM_COMM  \
	),
 
	[_MOV] = LAYOUT(
		KC_PGUP   , KC_UP    , KC_HOME , \
		KC_LEFT   , KC_DOWN  , KC_RGHT , \
		KC_PGDN   , KC_NO    , KC_END  , \
		MOD_1     , KC_ENT   , KC_TRNS \
	),
 // Kann man sich momentan noch sparen Weg finden, wie man VA speichern kann
	[_RGB] = LAYOUT(                        
		RGB_HUI   , RGB_SAI  , RGB_VAI , \
		RGB_HUD   , RGB_SAD  , RGB_VAD , \
		KC_TRNS   , RGB_TOG  , KC_TRNS , \
		KC_TRNS   , RGB_LYR  , KC_TRNS \
	),

    [_MOD] = LAYOUT(
        KC_ESC    , KC_NO    , KC_BSPC , \
        KC_TAB    , KC_NO    , KC_DEL  , \
        KC_NO     , KC_NO    , KC_ENT  , \
        KC_TRNS   , KC_NO    , KC_TRNS \
    ),

    [_SYM] = LAYOUT(
        S(KC_7)   , KC_GRAVE, S(KC_SLSH), \
        S(KC_4)   , S(KC_5) , S(KC_6) , \
        S(KC_1)   , S(KC_2) , S(KC_3) , \
        KC_TRNS   , KC_QUOT , KC_TRNS  \
    ),
 
	[_LAYSEL] = LAYOUT(
	   	KC_NO     , KC_NO   , KC_NO   , \
		KC_NO     , KC_NO   , KC_NO   , \
		TO(_BASE) , TO(_MOV), KC_NO   , 
		KC_TRNS   , TO(_RGB), KC_TRNS \
	)
};

void keyboard_post_init_user(void) {
    set_single_persistent_default_layer(_BASE);
}

layer_state_t layer_state_set_keymap(layer_state_t state) {
    state =  update_tri_layer_state(state, _SYM, _MOD, _LAYSEL);    // manages trilayer stuff
    #ifdef UNDERGLOW_ENABLE
    switch (get_highest_layer(state)) {
    case _BASE:
        //if (user_config.rgb_layer_change) {
            rgblight_sethsv(HSV_TEAL);// rgblight_mode_noeeprom(1); 
        //}
        break;
    case _MOV:
        rgblight_sethsv(HSV_GOLD);
        break;
    case _RGB:
        test(); //aus rgb_color_sets.h
        break;
    case _SYM:
        //test(); //aus rgb_color_sets.h
        rgblight_sethsv(HSV_RED);
        break;
    case _MOD:
        test(); //aus rgb_color_sets.h
        break;
    case _LAYSEL:
        test(); //aus rgb_color_sets.h
        rgblight_sethsv(HSV_GREEN);
        break;
    default: //  for any other layers, or the default layer
        rgblight_setrgb (0x50,  0x9F, 0xFF);
        break;
    }
    #endif
  return state;
}
