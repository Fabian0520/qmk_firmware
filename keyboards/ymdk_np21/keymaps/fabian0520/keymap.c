#include QMK_KEYBOARD_H

#define _NP 0
#define _BL 1

enum custom_keycodes {
  NP = SAFE_RANGE,
  BL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Qwerty */

  [_NP] = LAYOUT_fabi(
    KC_X   , KC_1   , KC_B   , KC_C   , KC_D   , KC_E   ,
    RESET  , KC_A   , KC_B   , KC_C   , KC_D   , KC_E   ,
    RESET  , KC_A   , KC_B   , KC_C   , KC_D   , KC_E   ,
    RESET  , KC_A   , KC_B   , KC_C   , KC_D   , KC_E   
  )
/*
  [_BL] = LAYOUT_ortho_6x4(
    RESET  , _______, _______, _______,
    _______, _______, _______, _______,
    _______, BL_ON,   _______, BL_INC,
    _______, BL_TOGG, _______, BL_INC,
    _______, BL_OFF,  _______, BL_DEC,
    RESET  , _______, _______, BL_DEC
  )
*/
};
