
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

#endif

#define i3_NAVIGATION_ENABLE
#define CUSTOM_SHIFT_ENABLE
//#define ESC_CAPS_ENABLE
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
//Bootmagic
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 11


/*
// RGB LED Conversion macro from physical array to electric array 
#define LED_LAYOUT( \
    L00, L01, L02, L03, L04, L05, L06, L07, L08, L09, L10,   \
    L11, L12, L13, L14, L15, L16, L17, L18, L19, L20, L21, L22,  \
    L23, L24, L25, L26, L27, L28, L29, L30, L31, L32, L33, \
    L34, L35, L36, L37, L38, L39, L40, L41) \
  { \
    L00, L01, L02, L03, L04, L05, L06, L07, L08, L09, L10,   \
    L11, L12, L13, L14, L15, L16, L17, L18, L19, L20, L21, L22,  \
    L23, L24, L25, L26, L27, L28, L29, L30, L31, L32, L33, \
    L34, L35, L36, L37, L38, L39, L40, L41 \
  }

// RGB LED logical order map 
// Top->Bottom, Right->Left 
#define RGBLIGHT_LED_MAP LED_LAYOUT( \
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9,10,11,12,13, \
        14,15,16,17,18,19,20,21,22,23,24,25, \
        26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41)
*/
