/* Copyright 2019 Alec P.
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
//extern keymap_config_t keymap_config;
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Default QWERTY layer 
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐   ┌───┐
     * │Esc│ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │  BkS  │   │PgU│
     * ├───┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──────┤   ├───┤
     * │Tab │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ' │ DEL  │   │PgD│
     * ├────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴──┬───┘   ├───┤
     * │LShift│ Z │ X │ C │ V │ B │ N │ M │ , │ . │Sft/│ ┌───┐ │TO3│
     * ├────┬─┴─┬─┴──┬┴───┴───┴─┬─┴───┴──┬┴───│───┴┬───┘ │ ↑ │ └───┘
     * │LCtl│OS │LAlt│    Fn    │  Space │RAlt│ Ln │ ┌───┤───├───┐
     * └────┴───┴────┴──────────┴────────┴────┴────┘ │ ← │ ↓ │ → │
     *                                               └───┴───┴───┘
     */
    [_COLEMAK] = LAYOUT_split_space(
        KC_ESC,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_J,    KC_L,    KC_U,    KC_Y,  KC_SCLN,    KC_NO, KC_BSPC,    KC_PGUP,
        LT(_SYM, KC_TAB),   KC_A,    KC_R,    KC_S,    KC_T,    KC_D,    KC_H,    KC_N,    KC_E,    KC_I,    KC_O,   KC_DEL,       KC_PGDN,
        KC_LSFT,     KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_K,    KC_M,    MY_COMM,    MY_DOT,   KC_RSFT ,     KC_UP,     KC_END,
        KC_LCTL, KC_LGUI, KC_LALT,            NUM_SPC,           MOV_ENT,            KC_RALT,   KC_RGUI,  KC_LEFT, KC_DOWN, KC_RIGHT
    ),
    /* Default QWERTY layer 
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐   ┌───┐
     * │Esc│ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │  BkS  │   │PgU│
     * ├───┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──────┤   ├───┤
     * │Tab │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ' │ DEL  │   │PgD│
     * ├────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴──┬───┘   ├───┤
     * │LShift│ Z │ X │ C │ V │ B │ N │ M │ , │ . │Sft/│ ┌───┐ │TO3│
     * ├────┬─┴─┬─┴──┬┴───┴───┴─┬─┴───┴──┬┴───│───┴┬───┘ │ ↑ │ └───┘
     * │LCtl│OS │LAlt│    Fn    │  Space │RAlt│ Ln │ ┌───┤───├───┐
     * └────┴───┴────┴──────────┴────────┴────┴────┘ │ ← │ ↓ │ → │
     *                                               └───┴───┴───┘
     */
    [_QWERTY] = LAYOUT_split_space(
        KC_ESC,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_J,    KC_L,    KC_U,    KC_Y,  KC_SCLN,    KC_NO, KC_BSPC,    KC_PGUP,
        LT(_SYM, KC_TAB),   KC_A,    KC_R,    KC_S,    KC_T,    KC_D,    KC_H,    KC_N,    KC_E,    KC_I,    KC_O,   KC_DEL,       KC_PGDN,
        KC_LSFT,     KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_K,    KC_M,    MY_COMM,    MY_DOT,   KC_RSFT ,     KC_UP,     KC_END,
        KC_LCTL, KC_LGUI, KC_LALT,            NUM_SPC,           MOV_ENT,            KC_RALT,  KC_RGUI,  KC_RCTL, KC_DOWN, KC_RIGHT
    ),
    /* Numbers Layer
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐   ┌───┐
     * │   │ € │ § │ ° │ ' │   │ / │ 7 │ 8 │ 9 │ * │ \     │   │Hme│
     * ├───┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──────┤   ├───┤
     * │    │ & │ ^ │ % │ $ │ _ │ . │ 4 │ 5 │ 6 │ + │ ???  │   │End│
     * ├────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴──┬───┘   ├───┤
     * │      │ ? │ # │ @ │ ! │ = │ 0 │ 1 │ 2 │ 3 │ -  │ ┌───┐ │   │
     * ├────┬─┴─┬─┴──┬┴───┴───┴─┬─┴───┴──┬┴───│───┴┬───┘ │   │ └───┘
     * │    │   │    │          │        │    │    │ ┌───┤───├───┐
     * └────┴───┴────┴──────────┴────────┴────┴────┘ │   │   │   │
     *                                               └───┴───┴───┘
     */
    [_NUM] = LAYOUT_split_space(
        KC_TRNS,  MY_EURO , MY_PARA, MY_CIRC, KC_QUOT,   KC_NO  , KC_SLASH, KC_7, KC_8, KC_9, KC_ASTR, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS,  S(KC_7) , S(KC_6), S(KC_5), S(KC_4),S(KC_MINS), KC_COMM , KC_4, KC_5, KC_6, KC_PLUS, KC_TRNS, KC_TRNS,
        KC_TRNS,S(KC_SLSH), S(KC_3), S(KC_2), S(KC_1), KC_EQUAL ,   KC_0  , KC_1, KC_2, KC_3,KC_MINUS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    /* Symbols Layer
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐   ┌───┐
     * │   │F12│F11│F10│F9 │   │ + │ [ │ ] │ < │ > │  Enf  │   │Hme│
     * ├───┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──────┤   ├───┤
     * │    │F8 │F7 │F6 │F5 │   │ - │ ( │ ) │ { │ } │      │   │End│
     * ├────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴──┬───┘   ├───┤
     * │      │F4 │F3 │F2 │F1 │   │ = │ | │ \ │ ? │ `  │ ┌───┐ │   │
     * ├────┬─┴─┬─┴──┬┴───┴───┴─┬─┴───┴──┬┴───│───┴┬───┘ │   │ └───┘
     * │    │   │    │          │        │    │    │ ┌───┤───├───┐
     * └────┴───┴────┴──────────┴────────┴────┴────┘ │   │   │   │
     *                                               └───┴───┴───┘
     */
    [_SYM] = LAYOUT_split_space(
        KC_TRNS,  KC_F12, KC_F11, KC_F10, KC_F9 , KC_NO, KC_PLUS , KC_LBRC, KC_RBRC, KC_LT  , KC_GT  , KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS,  KC_F8 , KC_F7 , KC_F6 , KC_F5 , KC_NO, KC_MINUS, KC_LPRN, KC_RPRN, KC_LCBR, KC_RCBR, KC_DEL , KC_TRNS,
        KC_TRNS,  KC_F4 , KC_F3 , KC_F2 , KC_F1 , KC_NO, KC_EQUAL, KC_PIPE, KC_BSLS, KC_QUES,KC_GRAVE, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    /* Movement Layer
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐   ┌───┐
     * │   │PgU│HME│ UP│END│   │   │i7 │i8 │i9 │   │       │   │Hme│
     * ├───┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──────┤   ├───┤
     * │    │PgD│RGT│DWN│LFT│   │   │i4 │i5 │i6 │   │ ???  │   │End│
     * ├────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴──┬───┘   ├───┤
     * │      │   │   │   │   │   │i10│i1 │i2 │i3 │    │ ┌───┐ │   │
     * ├────┬─┴─┬─┴──┬┴───┴───┴─┬─┴───┴──┬┴───│───┴┬───┘ │   │ └───┘
     * │    │   │    │          │        │    │    │ ┌───┤───├───┐
     * └────┴───┴────┴──────────┴────────┴────┴────┘ │   │   │   │
     *                                               └───┴───┴───┘
     */
    [_MOV] = LAYOUT_split_space(
        KC_TRNS, KC_PGUP, KC_HOME, KC_UP  , KC_END , KC_NO  , KC_NO  , i3_S_7 , i3_S_8 , i3_S_9 , KC_NO  , KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO  , KC_NO  , i3_S_4 , i3_S_5 , i3_S_6 , KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , i3_S_1 , i3_S_2 , i3_S_3 , KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    /* GAME HYPE MLG BBY Layer (TOGGLE)
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │Esc│ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │Del│BkS│   │INS│
     * ├───┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴───┼───┼───┤
     * │Tab │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │Enter │   │PgD│
     * ├────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴──┬───┴───│───│
     * │LShift│ Z │ X │ C │ V │ B │ N │ M │ , │ . │Sft/│ ┌───┐ │LY0│
     * ├────┬─┴─┬─┴──┬┴───┴───┴─┬─┴───┴──┬┴───│───┴┬───┘ │ ↑ │ └───┘
     * │LCtl│OS │LAlt│   Space  │  Space │ Fn │ Ln │ ┌───│───│───┐
     * └────┴───┴────┴──────────┴─────────────┴────┘ │ ← │ ↓ │ → │
     *                                               └───┴───┴───┘
     */
    [_GAME] = LAYOUT_split_space(
        TD(TD_ESC_COL),  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_7,    KC_8,    KC_9,  KC_P,           KC_NO, KC_BSPC,    KC_PGUP,
        KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_4,    KC_5,    KC_6,    KC_SCLN,           KC_DEL,       KC_PGDN,
        KC_LSFT,     KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_1,    KC_2,    KC_3,   KC_RSFT ,     KC_UP,     KC_END,
        KC_LCTL, KC_LGUI, KC_LALT,            NUM_SPC,           MOV_ENT,            KC_RALT,  KC_RGUI,  KC_RCTL, KC_DOWN, KC_RIGHT
    ),
    /* Adjust Layer
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐   ┌───┐
     * │Br+│QWE│COL│STR│   │   │   │   │   │   │   │       │   │   │
     * ├───┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──────┤   ├───┤
     * │Br- │UCM│GAM│   │   │   │   │   │   │   │   │      │   │   │
     * ├────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴──┬───┘   ├───┤
     * │      │   │   │   │   │   │   │   │   │   │    │ ┌───┐ │   │
     * ├────┬─┴─┬─┴──┬┴───┴───┴─┬─┴───┴──┬┴───│───┴┬───┘ │   │ └───┘
     * │    │   │    │          │        │    │    │ ┌───┤───├───┐
     * └────┴───┴────┴──────────┴────────┴────┴────┘ │   │   │   │
     *                                               └───┴───┴───┘
     */
    [_ADJUST] = LAYOUT_split_space(
        SCRE_UP, DF(_QWERTY), DF(_COLEMAK), X(STAR), KC_NO , KC_NO  , KC_NO  , KC_NO , KC_NO , KC_NO , KC_NO  , KC_TRNS, KC_TRNS, RESET,
        SCRE_DN, UC_MOD     , DF(_GAME)   , KC_NO  , KC_NO , KC_NO  , KC_NO  , KC_NO , KC_NO , KC_NO , KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_NO      , KC_NO       , KC_NO  , KC_NO , KC_NO  , KC_NO  , KC_NO , KC_NO , KC_NO , KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS    , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
};

    /* Default COLEMAK layer 
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐   ┌───┐
     * │Esc│ Q │ W │ F │ P │ G │ J │ L │ U │ Y │ ; │  Del  │   │PgU│
     * ├───┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──────┤   ├───┤
     * │Tab │ A │ R │ S │ T │ D │ H │ N │ E │ I │ O │ ???? │   │PgD│
     * ├────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴──┬───┘   ├───┤
     * │LShift│ Z │ X │ C │ V │ B │ K │ M │ , │ . │Sft/│ ┌───┐ │TO3│
     * ├────┬─┴─┬─┴──┬┴───┴───┴─┬─┴───┴──┬┴───│───┴┬───┘ │ ↑ │ └───┘
     * │LCtl│OS │LAlt│  Space   │  Enter │RAlt│ OS │ ┌───┤───├───┐
     * └────┴───┴────┴──────────┴────────┴────┴────┘ │ ← │ ↓ │ → │
     *                                               └───┴───┴───┘
     */

//function for layer indicator LED
uint32_t layer_state_set_keymap(uint32_t state)
{
    switch(get_highest_layer(default_layer_state)){
        case _COLEMAK:
            writePinHigh(D0);
            writePinLow(D1);
            writePinLow(D2);
            break;
        case _QWERTY:
            writePinLow(D0);
            writePinHigh(D1);
            writePinLow(D2);
            break;
        case _GAME:
            writePinLow(D0);
            writePinLow(D1);
            writePinHigh(D2);
            break;
    }
    return state;
}
