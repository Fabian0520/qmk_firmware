#include "fabian0520.h"
#include "crkbd.h"
//#include "action_layer.h"
//#include "eeconfig.h"
//#include "quantum.h"

#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;
//static bool frame_number=false;

#ifdef RGBLIGHT_ENABLE
//Following line allows macro to read current RGB settings
extern rgblight_config_t rgblight_config;
#endif

extern uint8_t is_master;

enum custom_keycodes {
    ACT_KB = SAFE_RANGE,
    DE_KB,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_COLEMAK] =LAYOUT( 
   KC_ESC ,  KC_Q   ,  KC_W   ,   KC_F  ,   KC_P   ,   KC_G   ,        KC_J   ,   KC_L   ,   KC_U   ,   KC_Y   , KC_SCLN  , KC_BSPC ,
   LT(_SYM,KC_TAB)  ,  KC_A   ,  KC_R   ,   KC_S   ,   KC_T   ,        KC_D   ,   KC_H   ,   KC_N   ,   KC_E   ,   KC_I   ,  KC_O    , KC_DEL  ,
   KC_LSFT,  KC_Z   ,  KC_X   ,   KC_C  ,   KC_V   ,   KC_B   ,        KC_K   ,   KC_M   ,  MY_COMM ,  MY_DOT  , KC_QUOT  , OSM(MOD_LSFT) ,
                                KC_LCTL ,  NUM_SPC ,  KC_LGUI ,       KC_RGUI ,  MOV_ENT ,  KC_RALT  
 ), 

[_QWERTY] =LAYOUT( 
   KC_ESC ,  KC_Q   ,  KC_W   ,   KC_E   ,   KC_R   ,   KC_T   ,   KC_Y   ,   KC_U   ,   KC_I   ,   KC_O   , KC_P     , KC_BSPC ,
   KC_TAB ,  KC_A   ,  KC_S   ,   KC_D   ,   KC_F   ,   KC_G   ,   KC_H   ,   KC_J   ,   KC_K   ,   KC_L   , KC_SCLN  , KC_ENT  ,
   KC_LSFT,  KC_Z   ,  KC_X   ,   KC_C   ,   KC_V   ,   KC_B   ,   KC_N   ,   KC_M   ,  MY_COMM ,  MY_DOT  , KC_QUOT  , OSM(MOD_LSFT) ,
                                OSM_ALT  ,  NUM_SPC ,  NUM_SPC ,  MOV_ENT ,  MOV_ENT , KC_RALT  
 ), 

[_NUM] =LAYOUT( 
  KC_TRNS ,  MY_EURO ,  MY_PARA ,  MY_CIRC ,  KC_QUOT ,  KC_NO   , KC_SLASH ,   KC_7   ,   KC_8   ,   KC_9   ,  KC_ASTR , KC_TRNS ,
  KC_TRNS ,  S(KC_7) ,  S(KC_6) ,  S(KC_5) ,  S(KC_4) ,S(KC_MINS),  KC_COMM ,   KC_4   ,   KC_5   ,   KC_6   ,  KC_PLUS , KC_TRNS , 
  KC_TRNS ,S(KC_SLSH),  S(KC_3) ,  S(KC_2) , S(KC_1)  , KC_EQUAL ,   KC_0   ,   KC_1   ,   KC_2   ,   KC_3   , KC_MINUS , KC_MINUS, 
                                  KC_TRNS  ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_DOT
 ), 

[_SYM] =LAYOUT( 
 KC_TRNS ,  KC_F12   , KC_F11   , KC_F10   , KC_F9    ,  KC_NO   , KC_PLUS  ,  KC_LBRC   , KC_RBRC  ,  KC_LT   ,  KC_GT   , KC_TRNS  , 
 KC_TRNS ,  KC_F8    , KC_F7    , KC_F6    , KC_F5    ,  KC_NO   , KC_MINUS ,  KC_LPRN   , KC_RPRN  ,  KC_LCBR , KC_RCBR  , KC_TRNS , 
 KC_TRNS ,  KC_F4    , KC_F3    , KC_F2    , KC_F1    ,  KC_NO   , KC_EQUAL ,  KC_PIPE   ,  KC_BSLS ,  KC_QUES ,  KC_GRAVE, KC_TRNS , 
                                  KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  ,  KC_TRNS   , KC_TRNS 
 ), 

[_MOV] =LAYOUT(
  KC_TRNS ,  KC_PGUP ,  KC_HOME ,  KC_UP   ,  KC_END  ,  KC_NO   ,  KC_NO   ,  i3_S_7  ,  i3_S_8  ,  i3_S_9  ,  KC_NO   , KC_TRNS  ,
  KC_TRNS ,  KC_PGDN ,  KC_LEFT ,  KC_DOWN ,  KC_RGHT ,  KC_NO   ,  KC_NO   ,  i3_S_4  ,  i3_S_5  ,  i3_S_6  ,  KC_NO   , KC_TRNS  ,
  KC_TRNS ,  KC_NO   ,  KC_NO   ,  KC_NO   ,  KC_NO   ,  KC_NO   ,  KC_NO   ,  i3_S_1  ,  i3_S_2  ,  i3_S_3  ,  KC_NO   , KC_TRNS  ,
                                   KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS
 ), 

[_ADJUST] =LAYOUT(
  SCRE_UP ,  DF(_QWERTY)  ,  DF(_COLEMAK) ,  DE_KB   ,   ACT_KB ,   KC_NO  ,  RGB_HUI ,  RGB_SAI ,  RGB_VAI ,  RGB_SPI ,   KC_NO  ,  KC_VOLU ,
  SCRE_DN ,    RGB_TOG    ,     RGB_MOD   ,  KC_NO   ,   KC_NO  ,   KC_NO  ,  RGB_HUD ,  RGB_SAD ,  RGB_VAD ,  RGB_SPD ,   KC_NO  ,  KC_VOLD ,
   KC_NO  ,    KC_NO      ,     RGB_RMOD  ,  KC_NO   ,   KC_NO  ,   KC_NO  ,   KC_NO  ,   KC_NO  ,   KC_NO  ,   KC_NO  ,   KC_NO  ,  KC_MUTE ,
                                  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS 
 ) 
};


#ifdef OLED_DRIVER_ENABLE
uint16_t        oled_timer;
uint16_t        animation_timer;
static uint16_t frame_timer;
static uint8_t frame_number;

bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case ACT_KB:
            if(record->event.pressed) {
                SEND_STRING("xinput enable 'AT Translated Set 2 keyboard'");
            } else {
                SEND_STRING(SS_TAP(X_ENT));
            }
            break;
        case DE_KB:
            if(record->event.pressed) {
                SEND_STRING("xinput disable 'AT Translated Set 2 keyboard'");
            } else {
                SEND_STRING(SS_TAP(X_ENT));
            }
            break;
    }
    if (record->event.pressed) {
        oled_timer = timer_read();
        animation_timer = timer_read();
    }
    return true;
}

void render_frame(uint8_t frame) {
  static const char PROGMEM animation[6][3][6] = {
      /*
          {0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,0}
          {0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,0}
          {0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,0}
  */

      {
          {0x80,0x81,0x82,0x83,0x84,0},
          {0xa0,0xa1,0xa2,0xa3,0xa4,0},
          {0xc0,0xc1,0xc2,0xc3,0xc4,0}
      },
      {
          {0x85,0x86,0x87,0},
          {0xa5,0xa6,0xa7,0},
          {0xc5,0xc6,0xc7,0}
      },
      {
          {0x88,0x89,0x8a,0x8b,0},
          {0xa8,0xa9,0xaa,0xab,0},
          {0xc8,0xc9,0xca,0xcb,0}
      },
      {
          {0x8c,0x8d,0x8e,0x8f,0},
          {0xac,0xad,0xae,0xaf,0},
          {0xcc,0xcd,0xce,0xcf,0}
      },
      {
          {0x90,0x91,0x92,0x93,0},
          {0xb0,0xb1,0xb2,0xb3,0},
          {0xd0,0xd1,0xd2,0xd3,0}
      },
      {
          {0x94,0x95,0x96,0x97,0},
          {0xb4,0xb5,0xb6,0xb7,0},
          {0xd4,0xd5,0xd6,0xd7,0}
      }
  };
  oled_write_ln_P(animation[frame][0], false);
  oled_write_ln_P(animation[frame][1], false);
  oled_write_ln_P(animation[frame][2], false);
}

void keyboard_post_init_user(void) {
    eeconfig_init();
    rgblight_enable_noeeprom();
    rgblight_mode_noeeprom(30);
    rgblight_sethsv_noeeprom(208,255,255);
    frame_timer = timer_read();
    frame_number = 0;
}

void render_status_master(void){
  oled_write_P(PSTR("Map: "), false);
  switch (biton32(default_layer_state)) {
    case _QWERTY:
      oled_write_P(PSTR("Qwer|"), false);
      break;
    case _COLEMAK:
      oled_write_P(PSTR("Col |"), false);
      break;
  }
  oled_write_P(PSTR(" Lyr: "), false);
  switch (biton32(layer_state)) {
    case _NUM:
      oled_write_P(PSTR("Numb\n"), false);
      break;
    case _MOV:
      oled_write_P(PSTR("Mov\n"), false);
      break;
    case _SYM:
      oled_write_P(PSTR("Sym\n"), false);
      break;
    case _ADJUST:
      oled_write_P(PSTR("Adj\n"), false);
      break;
    default:
      // Or use the write_ln shortcut over adding '\n' to the end of your string
      oled_write_ln_P(PSTR("Std"), false);
  }

  uint8_t modifiers = get_mods() | get_oneshot_mods(); // Variable fuer die Modifier
                                                       // MOD_MASK_SHIFT // MOD_MASK_CTRL // MOD_MASK_ALT // MOD_MASK_GUI
  uint8_t led_usb_state = host_keyboard_leds(); // Variable fuer die USB_LED indicator
                                                // USB_LED_NUM_LOCK // USB_LED_CAPS_LOCK // USB_LED_SCROLL_LOCK
  oled_write_P(PSTR("SFT"), (modifiers & MOD_MASK_SHIFT));
  oled_write_P(PSTR(" | "), false);
  oled_write_P(PSTR("CAPS"), (led_usb_state & (1 << USB_LED_CAPS_LOCK)));
  //oled_write(keylog_str, false); // geht noch nicht

  oled_write_P(led_usb_state & (1<<USB_LED_NUM_LOCK) ? PSTR("NUMLCK ") : PSTR("       "), false);
  oled_write_P(led_usb_state & (1<<USB_LED_CAPS_LOCK) ? PSTR("CAPLCK ") : PSTR("       "), false);
  oled_write_P(led_usb_state & (1<<USB_LED_SCROLL_LOCK) ? PSTR("SCRLCK ") : PSTR("       "), false);
}

void oled_task_user(void){
    if (timer_elapsed(oled_timer) > 60000) {
        oled_off();
        return;
    }
    if(is_master){
        render_status_master();
        //  Funktion, was auf das erste Desplay geschrieben werden soll
    }else{
        //  Secondary side
        if(timer_elapsed(animation_timer) > 2000) {
            // after 1000ms play standing animation
            if(timer_elapsed(frame_timer)>400){
                switch(frame_number){
                    case 0:
                     render_frame(3);
                     frame_number += 1;
                     break;
                    case 1:
                     render_frame(4);
                     frame_number += 1;
                     break;
                    case 2:
                     render_frame(5);
                     frame_number = 0;
                     break;
                    case 3:
                     render_frame(4);
                     frame_number = 0;
                     break;
                 }
            frame_timer = timer_read();
            }
        }else{
            // else play running animation
            if(timer_elapsed(frame_timer)>200){
                switch(frame_number){
                    case 0:
                     render_frame(frame_number);
                     frame_number += 1;
                     break;
                    case 1:
                     render_frame(frame_number);
                     frame_number += 1;
                     break;
                    case 2:
                     render_frame(frame_number);
                     frame_number += 1;
                     break;
                    case 3:
                     render_frame(frame_number-2);
                     frame_number = 0;
                     break;
                }
            frame_timer = timer_read();
            }
        }
    }
}
#endif


layer_state_t layer_state_set_keymap (layer_state_t state) {
    switch(biton32(state)){
        case _SYM:
            break;
    return state;
        case _MOV:
            break;
    return state;
        case _ADJUST:
            break;
        default:
            //rgblight_mode_noeeprom(30);
            //rgblight_sethsv_master(208, 255, 255);
            //rgblight_sethsv_slave(208, 255, 255);
            break;
    }
    return state;
}

