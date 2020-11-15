#pragma once
#include "quantum.h"
#include "eeprom.h"
#ifdef TAP_DANCE_ENABLE
#   include "tap_fabi.h"
#endif // TAP_DANCE_ENABLE
#include "fabis_songs.h"
#include "action_layer.h"
#include "eeconfig.h"
#ifndef USERSPACE
#define USERSPACE

#define OSM_ALT      OSM(MOD_LALT)
#define OSM_GUI      OSM(MOD_LGUI)
#define OSM_CTL      OSM(MOD_LCTL)
#define TD_BS        TD(TD_BS_OC)
#define TD_BR        TD(TD_BR_OC)
#define TD_BC        TD(TD_BC_OC)
#define TD_BA        TD(TD_BA_OC)
#define TD_SFT_CAP   TD(TD_SFT_CAPS)
#define SCRE_UP      LGUI(LSFT(LCTL(KC_Q)))
#define SCRE_DN      LGUI(LSFT(LCTL(KC_A)))
#define __________   KC_TRNS
#define XXXXXXXXXX   KC_NO
#define NUM_SPC      LT(_NUM, KC_SPC)
#define MOV_ENT      LT(_MOV, KC_ENT)
#define MY_CIRC      RALT(RSFT(KC_SCLN))
#define MY_PARA      RALT(RSFT(KC_S))
#define MY_EURO      RALT(KC_5)

enum userspace_layers {
  _COLEMAK,
  _QWERTY,
  _GAME,
  _DIABLO,
  _NUM,
  _SYM, //Gleicher Layer wie FUNC1. Brauche ich nur um mit beiden Tasten in den ADJUST-Layer zu kommen.
  _MOV,
  _MIDI,
  _ADJUST,
  _TMP,
};

enum tapdances{
  TD_SFT_CAPS = 0,
  TD_BS_OC = 1,
  TD_BR_OC = 2,
  TD_BC_OC = 3,
  TD_BA_OC = 4,
  TD_SPC_ENT = 5,
  TD_Q_ESC = 6,
  TD_ESC_COL = 7,
};

enum userspace_custom_keycodes {
  COLEMAK = SAFE_RANGE,
  GAME,
  DIABLO,
  QWERTY,
  ADJUST,
  TMP,
  SYM,
  NUM,
  MOV,
  MIDI,
  //NUM_SPC = LT(_NUM, KC_SPACE),
  //MOV_ENT = LT(_MOV, KC_ENTER),
  i3_S_1,
  i3_S_2,
  i3_S_3,
  i3_S_4,
  i3_S_5,
  i3_S_6,
  i3_S_7,
  i3_S_8,
  i3_S_9,
  MY_COMM,
  MY_DOT,
  SHIFT,
  DEL_EEPROM,
};

#endif
