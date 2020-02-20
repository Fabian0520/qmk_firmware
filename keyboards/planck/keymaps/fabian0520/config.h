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
#pragma once

#ifdef AUDIO_ENABLE
    //#define STARTUP_SONG SONG(PLANCK_SOUND)
    #define STARTUP_SONG SONG(f_ZELDA_PUZZLE)

    #define DEFAULT_LAYER_SONGS { SONG(QWERTY_SOUND), \
                                  SONG(COLEMAK_SOUND), \
                                  SONG(DVORAK_SOUND) \
                                }
#endif

#define PREVENT_STUCK_MODIFIERS

/*
 * MIDI options
 */

/* Prevent use of disabled MIDI features in the keymap */
//#define MIDI_ENABLE_STRICT 1

/* enable basic MIDI features:
   - MIDI notes can be sent when in Music mode is on
*/

//#define MIDI_BASIC

/* enable advanced MIDI features:
   - MIDI notes can be added to the keymap
   - Octave shift and transpose
   - Virtual sustain, portamento, and modulation wheel
   - etc.
*/
//#define MIDI_ADVANCED

/* override number of MIDI tone keycodes (each octave adds 12 keycodes and allocates 12 bytes) */
//#define MIDI_TONE_KEYCODE_OCTAVES 2

// Most tactile encoders have detents every 4 stages
#define ENCODER_RESOLUTION 4

#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "config_common.h"

#endif

//#define RETRO_TAPPING
//#define IGNORE_MOD_TAP_INTERRUPT

//#define RGBLIGHT_ANIMATIONS
//#define RGBLIGHT_HUE_STEP 17
//#define RGBLIGHT_SAT_STEP 17
//#define RGBLIGHT_VAL_STEP 17
//#define RGBLIGHT_LIMIT_VAL 255

#define i3_NAVIGATION_ENABLE
#define CUSTOM_SHIFT_ENABLE
//#define UNDERGLOW_ENABLE
#define MIDI_ENABLE_STRICT 1
#define MIDI_BASIC
#define MIDI_ADVANCED
#define MIDI_TONE_KEYCODE_OCTAVES 2
//#define AUDIO_CLICKY
