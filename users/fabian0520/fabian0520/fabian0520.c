//#include <print.h>
#include "fabian0520.h"
//#include "tap_fabi.h"

#define MODS_CTRL_MASK  (MOD_BIT(KC_LSHIFT)|MOD_BIT(KC_RSHIFT))

bool isMyShift = false; // This is the flag we'll use to keep track of when shift is PHYSICALLY pressed/released
uint16_t my_kc = KC_NO; // Always KC_NO or whichever custom keycode (or its shifted partner) was most recently pressed
bool isCaps = true;

#ifdef AUDIO_ENABLE

float tone_my_startup[][2] = SONG(f_QWERTY_SOUND);
float tone_my_goodbye[][2] = SONG(f_QWERTY_SOUND);

float tone_audio_on[][2]   = SONG(f_CLOSE_ENCOUNTERS_5_NOTE);
float tone_music_on[][2]   = SONG(f_DOE_A_DEER);
float tone_caps_on[][2]    = SONG(f_ZELDA_TREASURE);
float tone_caps_off[][2]   = SONG(f_ZELDA_TREASURE);
float tone_numlk_on[][2]   = SONG(f_NUM_LOCK_ON_SOUND);
float tone_numlk_off[][2]  = SONG(f_NUM_LOCK_OFF_SOUND);
float tone_scroll_on[][2]  = SONG(f_SCROLL_LOCK_ON_SOUND);
float tone_scroll_off[][2] = SONG(f_SCROLL_LOCK_OFF_SOUND);
float music_scale[][2]     = SONG(f_MUSIC_SCALE_SOUND);

#endif /* AUDIO_ENABLE */

#ifdef OLED_DRIVER_ENABLE
uint16_t        oled_timer;
uint16_t        animation_timer;
#endif

// Trilayer update and LED layer code
__attribute__ ((weak))
layer_state_t layer_state_set_keymap (layer_state_t state) {
  return state;
}

layer_state_t layer_state_set_user (layer_state_t state) {
    state = update_tri_layer_state(state, _NUM, _MOV, _ADJUST);
    //layer_state_set_rgb(state);
    return layer_state_set_keymap (state);
}

/*
void layer_state_set_rgb(layer_state_t state) {
#if RBGLIGHT_ENABLE
    switch(biton(state)) {
        case _MOV:
    	  	rgblight_sethsv_noeeprom(HSV_GREEN);
            break;
    }
#endif
}
*/

__attribute__((weak))
    bool process_record_keymap(uint16_t keycode, keyrecord_t *record){
        return true;
    }

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
#ifdef i3_NAVIGATION_ENABLE
    static uint8_t shift_esc_shift_mask;
#endif

#ifdef SSD1306OLED
    //set_keylog(keycode, record);
    void set_keylog(uint16_t keycode, keyrecord_t *record);
#endif
    // set_timelog();
    
  switch (keycode) {
    #ifdef ESC_CAPS_ENABLE
        case KC_ESC:
            if (record->event.pressed) {
                register_code(KC_ESC);
            if (host_keyboard_leds() & (1<<USB_LED_CAPS_LOCK) ){
                register_code(KC_CAPS);
                }
            } else {
                unregister_code(KC_ESC);
                unregister_code(KC_CAPS);
            }
            return false;
            break;
    #endif
// ------------------- Layer Code --------------------------------
    case COLEMAK:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_COLEMAK);
      }
      return false;
      break;
    case QWERTY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
      break;
     case MIDI:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_MIDI);
      }
      return false;
      break;
     
    //------------------------------------------------------
    #ifdef i3_NAVIGATION_ENABLE
        case i3_S_1:
            shift_esc_shift_mask = get_mods()&MODS_CTRL_MASK;
            if (record->event.pressed) {
                if (shift_esc_shift_mask) {
                SEND_STRING(SS_LSFT(SS_LGUI("1")));
                } else {
                SEND_STRING(SS_LGUI("1"));
                }
            }
            return false;
            break;
        case i3_S_2:
            shift_esc_shift_mask = get_mods()&MODS_CTRL_MASK;
            if (record->event.pressed) {
                if (shift_esc_shift_mask) {
                SEND_STRING(SS_LSFT(SS_LGUI("2")));
                } else {
                SEND_STRING(SS_LGUI("2"));
                }
            }
            return false;
            break;
        case i3_S_3:
            shift_esc_shift_mask = get_mods()&MODS_CTRL_MASK;
            if (record->event.pressed) {
                if (shift_esc_shift_mask) {
                SEND_STRING(SS_LSFT(SS_LGUI("3")));
                } else {
                SEND_STRING(SS_LGUI("3"));
                }
            }
            return false;
            break;
        case i3_S_4:
            shift_esc_shift_mask = get_mods()&MODS_CTRL_MASK;
            if (record->event.pressed) {
                if (shift_esc_shift_mask) {
                SEND_STRING(SS_LSFT(SS_LGUI("4")));
                } else {
                SEND_STRING(SS_LGUI("4"));
                }
            }
            return false;
            break;
        case i3_S_5:
            shift_esc_shift_mask = get_mods()&MODS_CTRL_MASK;
            if (record->event.pressed) {
                if (shift_esc_shift_mask) {
                SEND_STRING(SS_LSFT(SS_LGUI("5")));
                } else {
                SEND_STRING(SS_LGUI("5"));
                }
            }
            return false;
            break;
        case i3_S_6:
            shift_esc_shift_mask = get_mods()&MODS_CTRL_MASK;
            if (record->event.pressed) {
                if (shift_esc_shift_mask) {
                SEND_STRING(SS_LSFT(SS_LGUI("6")));
                } else {
                SEND_STRING(SS_LGUI("6"));
                }
            }
            return false;
            break;
        case i3_S_7:
            shift_esc_shift_mask = get_mods()&MODS_CTRL_MASK;
            if (record->event.pressed) {
                if (shift_esc_shift_mask) {
                SEND_STRING(SS_LSFT(SS_LGUI("7")));
                } else {
                SEND_STRING(SS_LGUI("7"));
                }
            }
            return false;
            break;
        case i3_S_8:
            shift_esc_shift_mask = get_mods()&MODS_CTRL_MASK;
            if (record->event.pressed) {
                if (shift_esc_shift_mask) {
                SEND_STRING(SS_LSFT(SS_LGUI("8")));
                } else {
                SEND_STRING(SS_LGUI("8"));
                }
            }
            return false;
            break;
        case i3_S_9:
            shift_esc_shift_mask = get_mods()&MODS_CTRL_MASK;
            if (record->event.pressed) {
                if (shift_esc_shift_mask) {
                SEND_STRING(SS_LSFT(SS_LGUI("9")));
                } else {
                SEND_STRING(SS_LGUI("9"));
                }
            }
            return false;
            break;
            return true;
        #endif
        #ifdef CUSTOM_SHIFT_ENABLE
        /* First, Shift needs to be set up to handle the new keys properly */
        case KC_LSFT: { // Adjust shift behavior to accomodate MY_COMM/SLSH/DOT/QUES
          if (record->event.pressed) {
            isMyShift = true;  // Set flag true when shift is pressed
            unregister_code(my_kc); // Unregister my_kc so e.g. you don't start typing "<" if you were holding ","
            switch (my_kc) {
              case KC_COMM: { // If KC_COMM was registered, we want it to become KC_SCLN instead
                my_kc = KC_SLSH;
                break;
              }
              case KC_DOT: { // Etc
                register_code(KC_LSFT); // Can misfire as semicolon without this even tho KC_COLN is already S(KC_SCLN)
                my_kc = KC_GRV;
                break;
              }
              default: {
                register_code(KC_LSFT); // Normally, we want shift to just act as normal shift
                break;
              }
            }
          register_code(my_kc); // Re-trigger my_kc after shifting. If it was KC_NO then nothing happens, as we want
          }
          else {
            isMyShift = false; // Set flag false on release of shift key
            unregister_code(my_kc); // Revert to lowercase. Again, if a custom key wasn't active, my_kc just stays as KC_NO
            switch (my_kc) {
              case KC_SLSH: {
                my_kc = KC_COMM;
                break;
              }
              case KC_GRV: {
                unregister_code(KC_LSFT);
                my_kc = KC_DOT;
                break;
              }
              default: {
                unregister_code(KC_LSFT); // If no custom key was being held, just unregister shift
                break;
              }
            }
          register_code(my_kc); // And retrigger the correct keycode (or KC_NO)
          }
        return false;
        }

        /* NEXT, define the custom keycodes. Comma and slash are copypaste since they're both lowercase/lowercase. */
        case MY_COMM: { // Comma -> Slash
          if (record->event.pressed) {
            if (isMyShift) { // Check to see if shift has been physically pressed
              unregister_code(KC_LSFT); // Need to change my_kc before registering. Also keeps it one custom key at a time
              my_kc = KC_SLSH;
            }
            else {
              my_kc = KC_COMM;
            }
            register_code(my_kc);
          }
          else {
            unregister_code(my_kc);
            my_kc = KC_NO; // IMPORTANT: setting my_kc to KC_NO on release keeps everything sane
            if (isMyShift) { // If shift is still down on release, we want to reregister it so the next keypress is correct
              register_code(KC_LSFT);
            }
          }
        return false;
        }

       case MY_DOT: { // Dot -> GRV (This is different because Colon is a shifted keycode S(KC_SCLN) )
          if (record->event.pressed) {
            if (isMyShift) {
              my_kc = KC_GRV; // We don't have to unregister shift, if we did we'd send ";" by mistake
            }
            else {
              my_kc = KC_DOT;
            }
            register_code(my_kc);
          }
          else {
            unregister_code(my_kc);
            my_kc = KC_NO;
          }
        return false;
        }
        #endif
    }
    return process_record_keymap(keycode, record);
    return true;
}

// siehe keyboards/planck/keymaps/zrichard/keymap.c 

#ifdef AUDIO_ENABLE
void led_set_user(uint8_t usb_led)
{
    static uint8_t old_usb_led = 0;

    if ((usb_led & (1<<USB_LED_CAPS_LOCK)) && !(old_usb_led & (1<<USB_LED_CAPS_LOCK)))
    {
            // If CAPS LK LED is turning on...
            PLAY_SONG(tone_caps_on);
    }
    else if (!(usb_led & (1<<USB_LED_CAPS_LOCK)) && (old_usb_led & (1<<USB_LED_CAPS_LOCK)))
    {
            // If CAPS LK LED is turning off...
            PLAY_SONG(tone_caps_off);
    }
    old_usb_led = usb_led;
}
#endif /* AUDIO_ENABLE */

#if UNICODE_ENABLE
void eeconfig_init_user (void) {
    set_unicode_input_mode(UC_LNX);
};
#endif
