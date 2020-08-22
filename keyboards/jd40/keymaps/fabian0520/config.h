
/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "config_common.h"

/* Use I2C or Serial, not both */

// #define USE_SERIAL
// #define USE_I2C

/* Select hand configuration */

// #define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#endif

//#define RETRO_TAPPING
//#define IGNORE_MOD_TAP_INTERRUPT

// #define RGBLIGHT_ANIMATIONS
// #define RGBLED_NUM 12
// #define RGBLIGHT_HUE_STEP 17
// #define RGBLIGHT_SAT_STEP 17
// #define RGBLIGHT_VAL_STEP 17
// #define RGBLIGHT_LIMIT_VAL 255
#define i3_NAVIGATION_ENABLE
#define CUSTOM_SHIFT_ENABLE
#define ESC_CAPS_ENABLE
//#define MIDI_ENABLE_STRICT 1
//#define MIDI_ADVANCED
//#define MIDI_TONE_KEYCODE_OCTAVES 1
#define UNICODE_SELECTED_MODES UC_LNX, UC_WINC
// Options to save memory
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
#define DISABLE_LEADER
// No Debugging
#ifndef NO_DEBUG
#define NO_DEBUG
#endif // !NO_DEBUG
#if !defined(NO_PRINT) && !defined(CONSOLE_ENABLE)
#define NO_PRINT
#endif // !NO_PRINT
