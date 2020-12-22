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
//#include <print.h>
#include "fabian0520.h"
#include "unicode_fabi.h"
extern keymap_config_t keymap_config;
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    //  was fuer die Umlate ueberlegen .....
/* Colemak
* ,-----------------------------------------------------------------------------------.
* |  ESC |   Q  |   W  |   F  |   P  |   G  |   J  |   L  |   U  |   Y  |   ;  |  DEL |
* |------+------+------+------+------+------+------+------+------+------+------+------|
* | TAB/SYM|   A  |   R  |   S  |   T  |   D  |   H  |   N  |   E  |   I  |     O     |
* |------+------+------+------+------+------+------+------+------+------+------+------|
* |    LSFT   |   Z  |   X  |   C  |   V  |   B  |   K  |   M  |   ,  |    .   | RSFT |
* |------+------+------+------+------+------+------+------+------+------+------+------|
* |  CTL |  WIN |  ALT |   NUM  |   SPACE   |    ENTER  | ALTGR|  WIN |  CTL | MOV    |
* `-----------------------------------------------------------------------------------'
*/

 [_COLEMAK] =LAYOUT( \
        KC_ESC ,   KC_Q   ,   KC_W   ,   KC_F   ,   KC_P   ,   KC_G   ,   KC_J   ,   KC_L   ,   KC_U   ,   KC_Y   ,  KC_SCLN , KC_BSPC  ,\
        LT(_SYM,KC_TAB) ,   KC_A   ,   KC_R   ,   KC_S   ,   KC_T   ,   KC_D   ,   KC_H   ,   KC_N   ,   KC_E   ,   KC_I   ,   KC_O   , KC_DEL,\
        KC_LSFT ,   KC_Z   ,   KC_X   ,   KC_C   ,   KC_V   ,   KC_B   ,   KC_K   ,   KC_M   ,  MY_COMM ,  MY_DOT  ,OSM(MOD_LSFT),\
                    KC_LCTL ,  KC_LGUI ,  KC_LALT ,  NUM_SPC ,  MOV_ENT ,  KC_RALT ,  KC_RGUI ,  KC_RCTL \
    ),

 [_GAME] =LAYOUT( \
        TD(TD_ESC_COL)  ,   KC_Q   ,   KC_W   ,   KC_E   ,   KC_R   ,   KC_T   ,   KC_Y   ,   KC_U   ,   KC_I   ,   KC_O   ,  KC_P , KC_BSPC  ,\
        KC_TAB  ,   KC_A   ,   KC_S   ,   KC_D   ,   KC_F   ,   KC_G   ,   KC_H   ,   KC_J   ,   KC_K   ,   KC_L   ,   KC_SCLN   , KC_DEL,\
        KC_LSFT ,   KC_Z   ,   KC_X   ,   KC_C   ,   KC_V   ,   KC_B   ,   KC_N   ,   KC_M   ,  MY_COMM ,  KC_UP   ,  KC_RSFT ,\
                    KC_LCTL ,  KC_LGUI ,  KC_LALT ,  KC_SPC ,  KC_ENT  , KC_LEFT ,  KC_DOWN ,  KC_RIGHT \
    ),

 [_DIABLO] =LAYOUT( \
        TD(TD_ESC_COL)  ,   KC_Q   ,   KC_T   ,   KC_I   ,   KC_S   ,   KC_V   ,   KC_J   ,   KC_L   ,   KC_U   ,   KC_Y   ,  KC_SCLN , KC_BSPC  ,\
        KC_TAB  ,   KC_1   ,   KC_2   ,   KC_3   ,   KC_4   ,   KC_D   ,   KC_H   ,   KC_N   ,   KC_E   ,   KC_I   ,   KC_O   , KC_DEL,\
        KC_LSFT ,   KC_F   ,   KC_J   ,   KC_L   ,   KC_P   ,   KC_M   ,   KC_K   ,   KC_M   ,  MY_COMM ,  KC_UP   ,  KC_RSFT ,\
                    KC_LCTL ,  KC_LGUI ,  KC_LALT ,  KC_SPC ,  KC_ENT  , KC_LEFT ,  KC_DOWN ,  KC_RIGHT \
    ),

/* Qwerty
* ,-----------------------------------------------------------------------------------.
* |  ESC |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |  DEL |
* |------+------+------+------+------+------+------+------+------+------+------+------|
* | TAB/SYM|   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |     ;     |
* |------+------+------+------+------+------+------+------+------+------+------+------|
* |    LSFT   |   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |    .   | RSFT |
* |------+------+------+------+------+------+------+------+------+------+------+------|
* |  CTL |  WIN |  ALT |   NUM  |   SPACE   |    ENTER  |   MOV  | ALTGR|  WIN |  CTL |
* `-----------------------------------------------------------------------------------'
*/

 [_QWERTY] =LAYOUT( \
 KC_ESC ,   KC_Q   ,   KC_W   ,   KC_E   ,   KC_R   ,   KC_T   ,   KC_Y   ,   KC_U   ,   KC_I   ,   KC_O   ,   KC_P   , KC_BSPC  ,\
 LT(_SYM,KC_TAB) ,   KC_A   ,   KC_S   ,   KC_D   ,   KC_F   ,   KC_H   ,   KC_G   ,   KC_J   ,   KC_K   ,   KC_L   ,  KC_SCLN , KC_ENT,\
KC_LSFT ,   KC_Z   ,   KC_X   ,   KC_C   ,   KC_V   ,   KC_B   ,   KC_N   ,   KC_M   ,  MY_COMM ,  MY_DOT  ,OSM(MOD_LSFT),\
            KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS \
),

/* NUM
* ,-----------------------------------------------------------------------------------.
* |  ESC |   €  |   §  |   °  |   '  |XXXXXX|   /  |   7  |   8  |   9  |   *  |  DEL |
* |------+------+------+------+------+------+------+------+------+------+------+------|
* |  TAB   |   &  |   ^  |   %  |   $  |   _  |   ,  |   4  |   5  |   6  |     +     |
* |------+------+------+------+------+------+------+------+------+------+------+------|
* |    LSFT   |   ?  |   #  |   @  |   !  |   =  |   0  |   1  |   2  |    3   |   -  |
* |------+------+------+------+------+------+------+------+------+------+------+------|
* |  CTL |  WIN |  ALT |   NUM  |   SPACE   |    ENTER  |   MOV  | ALTGR|  WIN |  CTL |
* `-----------------------------------------------------------------------------------'
*/

 [_NUM] =LAYOUT( \
KC_TRNS ,  MY_EURO , MY_PARA  ,  MY_CIRC ,  KC_QUOT ,   KC_NO  , KC_SLASH ,   KC_7   ,   KC_8   ,   KC_9   ,  KC_ASTR , KC_TRNS  ,\
KC_TRNS ,  S(KC_7) ,  S(KC_6) ,  S(KC_5) ,  S(KC_4) ,S(KC_MINS),  KC_COMM ,   KC_4   ,   KC_5   ,   KC_6   ,  KC_PLUS , KC_DEL,\
KC_TRNS ,S(KC_SLSH),  S(KC_3) ,  S(KC_2) , S(KC_1)  , KC_EQUAL ,    KC_0  ,   KC_1   ,   KC_2   ,   KC_3   , KC_MINUS ,\
           KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_DOT  ,  KC_TRNS ,  KC_TRNS \
),

/* SYM
* ,-----------------------------------------------------------------------------------.
* |  ESC |  F12 |  F11 |  F10 |  F9  |XXXXXX|   +  |   [  |   ]  |   <  |   >  | ENTF |
* |------+------+------+------+------+------+------+------+------+------+------+------|
* | TAB/SYM|  F8  |  F7  |  F6  |  F5  |XXXXXX|   -  |   (  |   )  |   {  |     }     |
* |------+------+------+------+------+------+------+------+------+------+------+------|
* |    LSFT   |  F4  |  F3  |  F2  |  F1  |XXXXXX|   =  |   |  |   \  |    ?   |   `  |
* |------+------+------+------+------+------+------+------+------+------+------+------|
* |  CTL |  WIN |  ALT |   NUM  |   SPACE   |    ENTER  |   MOV  | ALTGR|  WIN |  CTL |
* `-----------------------------------------------------------------------------------'
*/

 [_SYM] =LAYOUT( \
KC_TRNS ,  KC_F12  ,  KC_F11  ,  KC_F10  ,  KC_F9   ,  KC_NO   ,  KC_PLUS , KC_LBRC  , KC_RBRC  ,  KC_LT   ,  KC_GT   ,  KC_TRNS  , \
KC_TRNS ,  KC_F8   ,  KC_F7   ,  KC_F6   ,  KC_F5   ,  KC_NO   , KC_MINUS , KC_LPRN  , KC_RPRN  ,  KC_LCBR , KC_RCBR  , KC_DEL, \
KC_TRNS ,  KC_F4   ,  KC_F3   ,  KC_F2   ,  KC_F1   ,  KC_NO   , KC_EQUAL ,  KC_PIPE ,  KC_BSLS ,  KC_QUES ,  KC_GRAVE,\
           KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS \
),

/* MOV
* ,-----------------------------------------------------------------------------------.
* |      | PGUP | HOME |   UP |  END |      |      |i3_S_7|i3_S_8|i3_S_9|      |      |
* |------+------+------+------+------+------+------+------+------+------+------+------|
* |        | PGDWN|  RGT |  DWN |  LFT |      |      |i3_S_4|i3_S_5|i3_S_6|           |
* |------+------+------+------+------+------+------+------+------+------+------+------|
* |           |      |      |      |      |      |i3_S10|i3_S_1|i3_S_2| i3_S_3 |      |
* |------+------+------+------+------+------+------+------+------+------+------+------|
* |  CTL |  WIN |  ALT |   NUM  |   SPACE   |    ENTER  |   MOV  | ALTGR|  WIN |  CTL |
* `-----------------------------------------------------------------------------------'
*/

 [_MOV] =LAYOUT( \
KC_TRNS ,  KC_PGUP ,  KC_HOME ,  KC_UP   ,  KC_END  ,  KC_NO   ,  KC_NO   ,  i3_S_7  ,  i3_S_8  ,  i3_S_9  ,  KC_NO   , KC_TRNS  ,\
KC_TRNS ,  KC_PGDN ,  KC_LEFT ,  KC_DOWN ,  KC_RGHT ,  KC_NO   ,  KC_NO   ,  i3_S_4  ,  i3_S_5  ,  i3_S_6  ,  KC_TRNS , KC_DEL ,\
KC_TRNS ,  KC_NO   ,  KC_NO   ,  KC_NO   ,  KC_NO   ,  KC_NO   ,  KC_NO   ,  i3_S_1  ,  i3_S_2  ,  i3_S_3  ,  KC_TRNS ,\
           KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS \
),

#if defined(MIDI_ENABLE) && defined(MIDI_ADVANCED)
 [_MIDI] =LAYOUT( \
   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   RESET   ,\
   KC_NO   ,   KC_NO   ,   MI_Cs   ,   MI_Ds   ,   KC_NO   ,   MI_Fs   ,   MI_Gs   ,   MI_As   ,   KC_NO   ,   KC_NO   ,   KC_NO   , KC_NO ,\
   KC_NO   ,    MI_C   ,    MI_D   ,    MI_E   ,    MI_F   ,    MI_G   ,    MI_A   ,    MI_B   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,\
               KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   \
   ),
#endif

/* ADJUST
* ,-----------------------------------------------------------------------------------.
* |      |      |      |      |      |      |      |      |      |      |      |      |
* |------+------+------+------+------+------+------+------+------+------+------+------|
* |        |      |      |      |      |      |      |      |      |      |           |
* |------+------+------+------+------+------+------+------+------+------+------+------|
* |           |      |      |      |      |      |      |      |      |        |      |
* |------+------+------+------+------+------+------+------+------+------+------+------|
* |  CTL |  WIN |  ALT |   NUM  |   SPACE   |    ENTER  |   MOV  | ALTGR|  WIN |  CTL |
* `-----------------------------------------------------------------------------------'
*/
 [_ADJUST] =LAYOUT( \
  SCRE_UP ,  DF(_QWERTY)  ,  DF(_COLEMAK) ,  X(STAR) ,   KC_NO  ,   KC_NO  ,  RGB_VAD ,  RGB_TOG ,  RGB_VAI , KC_VOLU  ,   KC_NO  ,  RESET ,\
  SCRE_DN ,  UC_MOD  , DF(_GAME),DF(_DIABLO),   KC_NO  ,   KC_NO  ,  RGB_HUD , RGB_MOD  ,  RGB_HUI , KC_VOLD  ,   KC_NO  , DEL_EEPROM ,\
   KC_NO  ,   KC_NO  ,   KC_NO  ,   KC_NO  ,   KC_NO  ,   KC_NO  ,  RGB_SAD ,   KC_NO  ,  RGB_SAI , KC_MUTE  ,   KC_NO  ,\
             KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS \
 ),
};
/*
 [_MIDI] =LAYAUT(    
   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,\
   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO    \
   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,\
               KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   \
   ),
   */

void rgblight_set_hsv_and_mode(uint8_t hue, uint8_t sat, uint8_t val, uint8_t mode) {
    rgblight_sethsv_noeeprom(hue, sat, val);
    wait_us(175);  // Add a slight delay between color and mode to ensure it's processed correctly
    rgblight_mode_noeeprom(mode);
}

// LED color settings !only works for layertab, momentary layers!
uint32_t layer_state_set_keymap (uint32_t state) {
    switch(get_highest_layer(state)){
        case _SYM:
            break;
        case _MOV:
            break;
        case _ADJUST:
            rgblight_sethsv_noeeprom(208, 255, 255);
            rgblight_mode_noeeprom(10 + 3);
            break;
        case _NUM:
            break;
        default: {
            switch(get_highest_layer(default_layer_state)) {
                case _COLEMAK:
                    rgblight_mode_noeeprom(30);
                    rgblight_sethsv_noeeprom(208, 255, 255);
                    break;
                case _QWERTY:
                    rgblight_mode_noeeprom(30);
                    rgblight_sethsv_noeeprom(208, 200, 255);
                    break;
                case _GAME:
                    rgblight_set_hsv_and_mode(200, 255, 255, RGBLIGHT_MODE_STATIC_LIGHT);
                    break;
            }
            break;
        }
    }
    return state;
}

void led_set_user(uint8_t usb_led) {
if (IS_LED_ON(usb_led, USB_LED_CAPS_LOCK)) {
	dimple_led_off();
	} else {
	dimple_led_on();
	}
}

void keyboard_post_init_user(void) {
    rgblight_enable_noeeprom();
    rgblight_mode_noeeprom(30);
    rgblight_sethsv_noeeprom(208, 255, 255);
    //rgblight_mode_noeeprom(0);
    //rgblight_setrgb_range(0, 0, 0, 0, 51);
    //rgblight_setrgb_at(60, 125, 100, 50);
}

/*
bool process_record_keymap(uint16_t keycode, keyrecord_t *record){
    switch(keycode){
        case RGB_HUD:
            uprintf("Mode: %u, H: %u \n",rgblight_get_mode(), rgblight_get_hue());
            break;
    }
    return true;
}
*/
