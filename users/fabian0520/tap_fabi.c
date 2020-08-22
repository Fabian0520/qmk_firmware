#include "fabian0520.h"
#include "tap_fabi.h"
/*
void TD_BS_OC_f(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        register_code (KC_LBRC);
    } else {
        register_code (KC_LBRC);
        register_code (KC_RBRC);
        register_code (KC_LEFT);
    }
}

void TD_BS_OC_r (qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        unregister_code (KC_LBRC);
    } else {
        unregister_code (KC_LBRC);
        unregister_code (KC_RBRC);
        unregister_code (KC_LEFT);
    }
}
void TD_BR_OC_f(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        register_code (KC_LSFT);
        register_code (KC_9);
    } else {
        register_code (KC_LSFT);
        register_code (KC_9);
        register_code (KC_0);
        unregister_code (KC_LSFT);
        register_code (KC_LEFT);
    }
}

void TD_BR_OC_r (qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        unregister_code (KC_LSFT);
        unregister_code (KC_9);
    } else {
        unregister_code (KC_9);
        unregister_code (KC_0);
        unregister_code (KC_LEFT);
    }
}
void TD_BC_OC_f(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        register_code (KC_LSFT);
        register_code (KC_LBRC);
    } else {
        register_code (KC_LSFT);
        register_code (KC_LBRC);
        register_code (KC_RBRC);
        unregister_code (KC_LSFT);
        register_code (KC_LEFT);
    }
}

void TD_BC_OC_r (qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        unregister_code (KC_LSFT);
        unregister_code (KC_LBRC);
    } else {
        unregister_code (KC_LBRC);
        unregister_code (KC_RBRC);
        unregister_code (KC_LEFT);
    }
}
void TD_BA_OC_f(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        register_code (KC_LSFT);
        register_code (KC_COMM);
    } else {
        register_code (KC_LSFT);
        register_code (KC_COMM);
        register_code (KC_DOT);
        unregister_code (KC_LSFT);
        register_code (KC_LEFT);
    }
}

void TD_BA_OC_r (qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        unregister_code (KC_LSFT);
        unregister_code (KC_COMM);
    } else {
        unregister_code (KC_COMM);
        unregister_code (KC_DOT);
        unregister_code (KC_LEFT);
    }
}
*/

qk_tap_dance_action_t tap_dance_actions[] = {
  //Tap once for one shot SPACE, twice for Caps Lock
  [TD_SFT_CAPS]  = ACTION_TAP_DANCE_DOUBLE(KC_LSFT, KC_CAPS),
  //[TD_BS_OC]  = ACTION_TAP_DANCE_FN_ADVANCED (NULL , TD_BS_OC_f , TD_BS_OC_r),
  //[TD_BR_OC]  = ACTION_TAP_DANCE_FN_ADVANCED (NULL , TD_BR_OC_f , TD_BR_OC_r),
  //[TD_BC_OC]  = ACTION_TAP_DANCE_FN_ADVANCED (NULL , TD_BC_OC_f , TD_BC_OC_r),
  //[TD_BA_OC]  = ACTION_TAP_DANCE_FN_ADVANCED (NULL , TD_BA_OC_f , TD_BA_OC_r),
// Other declarations would go here, separated by commas, if you have them
};
