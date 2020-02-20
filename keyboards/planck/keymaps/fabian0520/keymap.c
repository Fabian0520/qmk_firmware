#include "planck.h"
#include "fabian0520.h"
extern keymap_config_t keymap_config;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    //  was fuer die Umlate ueberlegen .....
    
/* Colemak
 * ,-----------------------------------------------------------------------------------.
 * | ESC  |  Q   |  W   |  F   |  P   |  G   |  J   |  L   |  U   |  Y   |  ;   | BSPC |
 * |-------------+------+------+------+------|------+------+------+------+------+------|
 * | TAB  |  A   |  R   |  S   |  T   |  D   |  H   |  N   |  E   |  I   |  O   | ENTER|
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | LSFT |  Z   |  X   |  C   |  V   |  B   |  K   |  M   |  ,// |  ./~ | '/"  |SFT/CP| 
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | XXXX | LCTL | LGUI | LALT | NUM_SPACE   | MOV_ENTER   | RALT | RGUI | RCTL | XXXX |
 * `-----------------------------------------------------------------------------------'
 */

[_COLEMAK] =LAYOUT_planck_2x2u( 
   KC_ESC ,  KC_Q   ,  KC_W   ,   KC_F  ,   KC_P   ,   KC_G   ,   KC_J   ,   KC_L   ,   KC_U   ,   KC_Y   , KC_SCLN  , KC_BSPC ,
   LT(_SYM,KC_TAB)  ,  KC_A   ,  KC_R   ,   KC_S   ,   KC_T   ,   KC_D   ,   KC_H   ,   KC_N   ,   KC_E   ,   KC_I   ,  KC_O    , KC_DEL  ,
   KC_LSFT,  KC_Z   ,  KC_X   ,   KC_C  ,   KC_V   ,   KC_B   ,   KC_K   ,   KC_M   ,  MY_COMM ,  MY_DOT  , KC_QUOT  , OSM(MOD_LSFT) ,
   KC_MUTE,KC_LCTL  , KC_LGUI , KC_LALT ,  NUM_SPC ,  MOV_ENT , KC_RALT  ,  KC_RGUI , KC_RCTL  , KC_NO  
 ), 

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | ESC  |  Q   |  W   |  E   |  R   |  T   |  Y   |  U   |  I   |  O   |  P   | BSPC |
 * |-------------+------+------+------+------|------+------+------+------+------+------|
 * | TAB  |  A   |  S   |  D   |  F   |  G   |  H   |  J   |  K   |  L   |  ;   | ENTER|
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | LSFT |  Z   |  X   |  C   |  V   |  B   |  N   |  M   |  ,/! |  ./? |  '   |SFT/CP| 
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | XXXX | LCTL | LGUI | LALT | NUM_SPACE   | MOV_ENTER   | RALT | RGUI | RCTL | XXXX |
 * `-----------------------------------------------------------------------------------'
 */
[_QWERTY] =LAYOUT_planck_2x2u( 
   KC_ESC ,  KC_Q   ,  KC_W   ,   KC_E   ,   KC_R   ,   KC_T   ,   KC_Y   ,   KC_U   ,   KC_I   ,   KC_O   , KC_P     , KC_BSPC ,
   KC_TAB ,  KC_A   ,  KC_S   ,   KC_D   ,   KC_F   ,   KC_G   ,   KC_H   ,   KC_J   ,   KC_K   ,   KC_L   , KC_SCLN  , KC_ENT  ,
   KC_LSFT,  KC_Z   ,  KC_X   ,   KC_C   ,   KC_V   ,   KC_B   ,   KC_N   ,   KC_M   ,  MY_COMM ,  MY_DOT  , KC_QUOT  , OSM(MOD_LSFT) ,
   KC_NO  ,KC_LCTL  , KC_LGUI , KC_LALT  ,  NUM_SPC ,  MOV_ENT , KC_RALT  ,  KC_RGUI , KC_RCTL  , KC_NO  
 ), 

/* TMP
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |             |             |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_TMP] =LAYOUT_planck_2x2u( 
  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS , KC_TRNS  ,
  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS , KC_TRNS  ,
  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS , KC_TRNS  ,
  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS , KC_TRNS  
 ), 

/* NUM
 * ,-----------------------------------------------------------------------------------.
 * |      |  €   |  §   |  °   |   '  |      |  /   |  7   |  8   |  9   |  *   |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |  &   |  ^   |  %   |   $  |  _   |  ,   |  4   |  5   |  6   |  +   |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |  ?   |  #   |  @   |   !  |  =   |  0   |  1   |  2   |  3   |  -   |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |             |             |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */

[_NUM] =LAYOUT_planck_2x2u( 
  KC_TRNS ,  MY_EURO ,  MY_PARA ,  MY_CIRC ,  KC_QUOT ,  KC_NO   , KC_SLASH ,   KC_7   ,   KC_8   ,   KC_9   ,  KC_ASTR , KC_TRNS ,
  KC_TRNS ,  S(KC_7) ,  S(KC_6) ,  S(KC_5) ,  S(KC_4) ,S(KC_MINS),  KC_COMM ,   KC_4   ,   KC_5   ,   KC_6   ,  KC_PLUS , KC_TRNS , 
  KC_TRNS ,S(KC_SLSH),  S(KC_3) ,  S(KC_2) , S(KC_1)  , KC_EQUAL ,   KC_0   ,   KC_1   ,   KC_2   ,   KC_3   , KC_MINUS , KC_TRNS , 
  KC_TRNS ,  KC_TRNS ,  KC_TRNS , KC_TRNS  ,  KC_TRNS ,  KC_TRNS ,  KC_DOT  , KC_TRNS  ,  KC_TRNS ,  KC_TRNS  
 ), 

/* SYM
 * ,-----------------------------------------------------------------------------------.
 * |      | F12  | F11  | F10  |  F9  |      |  +   |   [  |   ]  |  <   |  >   |      |
 * |-------------+------+------+------+------|------+------+------+------+------|------|
 * |      |  F8  |  F7  |  F6  |  F5  |      |  -   |   (  |   )  |  {   |  }   |      |
 * |-------------+------+------+------+------|------+------+------+------+------|------|
 * |      |  F4  |  F3  |  F2  |  F1  |      |  =   |   |  |   \  |  ?   |  `   |      |
 * |-------------+------+------+------+------|------+------+------+------+------|------|
 * |      |      |      |      |             |             |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_SYM] =LAYOUT_planck_2x2u( 
 KC_TRNS ,  KC_F12   , KC_F11   , KC_F10   , KC_F9    ,  KC_NO   , KC_PLUS  ,  KC_LBRC   , KC_RBRC  ,  KC_LT   ,  KC_GT   , KC_TRNS  , 
 KC_TRNS ,  KC_F8    , KC_F7    , KC_F6    , KC_F5    ,  KC_NO   , KC_MINUS ,  KC_LPRN   , KC_RPRN  ,  KC_LCBR , KC_RCBR  , KC_TRNS , 
 KC_TRNS ,  KC_F4    , KC_F3    , KC_F2    , KC_F1    ,  KC_NO   , KC_EQUAL ,  KC_PIPE   ,  KC_BSLS ,  KC_QUES ,  KC_GRAVE, KC_TRNS , 
 KC_TRNS ,  KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  ,  KC_TRNS   , KC_TRNS  , KC_TRNS  ,  KC_TRNS ,  KC_TRNS
 ), 

/* MOV
 * ,-----------------------------------------------------------------------------------.
 * |      | PGUP | HOME |  UP  |  END |      |      |i3_S7 |i3_S8 |i3_S9 |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      | PGDN | LEFT | DOWN | RGHT |      |      |i3_S4 |i3_S5 |i3_S6 |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |i3_S1 |i3_S2 |i3_S3 |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |             |             |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_MOV] =LAYOUT_planck_2x2u(
  KC_TRNS ,  KC_PGUP ,  KC_HOME ,  KC_UP   ,  KC_END  ,  KC_NO   ,  KC_NO   ,  i3_S_7  ,  i3_S_8  ,  i3_S_9  ,  KC_NO   , KC_TRNS  ,
  KC_TRNS ,  KC_PGDN ,  KC_LEFT ,  KC_DOWN ,  KC_RGHT ,  KC_NO   ,  KC_NO   ,  i3_S_4  ,  i3_S_5  ,  i3_S_6  ,  KC_NO   , KC_TRNS  ,
  KC_TRNS ,  KC_NO   ,  KC_NO   ,  KC_NO   ,  KC_NO   ,  KC_NO   ,  KC_NO   ,  i3_S_1  ,  i3_S_2  ,  i3_S_3  ,  KC_NO   , KC_TRNS  ,
  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS
 ), 

 [_MIDI] =LAYOUT_planck_2x2u(
   KC_NO   ,   KC_NO   ,   MI_Cs   ,   MI_Ds   ,   KC_NO   ,   MI_Fs   ,   MI_Gs   ,   MI_As   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,
   KC_NO   ,    MI_C   ,    MI_D   ,    MI_E   ,    MI_F   ,    MI_G   ,    MI_A   ,    MI_B   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,
   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,   KC_NO   ,
   KC_TRNS ,   KC_TRNS ,   KC_TRNS ,   KC_TRNS ,   KC_TRNS ,  KC_TRNS  ,  KC_TRNS  ,  KC_TRNS  ,  KC_TRNS  ,  KC_TRNS
   ),

/* ADJUST
 * ,-----------------------------------------------------------------------------------.
 * |SC_UP |QWERTY|COLEMA| MIDI |      |      |      |      |      |      |      |VOL_UP|
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |SC_DWN|      |      |      |      |      |      |      |      |      |      |VOL_DN|
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |VOL_MU|
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |             |             |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_ADJUST] =LAYOUT_planck_2x2u(
  SCRE_UP ,  QWERTY  ,  COLEMAK ,   MIDI   ,   KC_NO  ,   KC_NO  ,   KC_NO  ,   KC_NO  ,   KC_NO  ,   KC_NO  ,   KC_NO  ,  KC_VOLU ,
  SCRE_DN ,   MU_ON  ,   MU_OFF ,   MU_TOG ,  MU_MOD  ,  CK_TOGG ,   KC_NO  ,   KC_NO  ,   KC_NO  ,   KC_NO  ,   KC_NO  ,  KC_VOLD ,
  KC_TRNS ,   MI_ON  ,   MI_OFF ,   KC_NO  ,   KC_NO  ,   KC_NO  ,   KC_NO  ,   KC_NO  ,   KC_NO  ,   KC_NO  ,   KC_NO  ,  KC_MUTE ,
  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS            ,  KC_TRNS            ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS , KC_TRNS  
 ), 
};

bool muse_mode = false;
uint8_t last_muse_note = 0;
uint16_t muse_counter = 0;
uint8_t muse_offset = 70;
uint16_t muse_tempo = 50;

void encoder_update(bool clockwise) {
  if (muse_mode) {
    if (IS_LAYER_ON(_MOV)) {
      if (clockwise) {
        muse_offset++;
      } else {
        muse_offset--;
      }
    } else {
      if (clockwise) {
        muse_tempo+=1;
      } else {
        muse_tempo-=1;
      }
    }
  } else {
    if (clockwise) {
      #ifdef MOUSEKEY_ENABLE
        tap_code(KC_MS_WH_DOWN);
      #else
        tap_code(KC_PGDN);
      #endif
    } else {
      #ifdef MOUSEKEY_ENABLE
        tap_code(KC_MS_WH_UP);
      #else
        tap_code(KC_PGUP);
      #endif
    }
  }
}
