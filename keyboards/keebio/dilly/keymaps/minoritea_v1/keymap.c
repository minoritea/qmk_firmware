#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _BASE 0
#define _FN1 1
/*
#define _FN2 2
#define _FN3 3
#define _FN4 4
#define _FN5 5

// Tap-Hold keys
#define KC_ASFT MT(MOD_LSFT, KC_A)
#define KC_F_L3 LT(_FN3, KC_F)
#define KC_ZCTL MT(MOD_LCTL, KC_Z)
#define KC_XALT MT(MOD_LALT, KC_X)
#define KC_CGUI MT(MOD_LGUI, KC_C)
#define KC_V_L4 LT(_FN4, KC_V)
#define KC_SPL2 LT(_FN2, KC_SPC)
#define KC_B_L1 LT(_FN1, KC_B)
#define KC_N_L5 LT(_FN5, KC_N)
#define KC_MALT MT(MOD_RALT, KC_M)
#define KC_BSCT MT(MOD_RCTL, KC_BSPC)
#define KC_ENTS MT(MOD_RSFT, KC_ENT)
#define KC_ESCS MT(MOD_RSFT, KC_ESC)
*/

#define SP_L2   LT(_FN1, KC_SPC)
#define ESCAPS  LT(KC_CAPS, KC_ESC)
#define SF_BS   LT(KC_RSFT, KC_BSPC)
#define SF_ENT  LT(KC_RSFT, KC_ENT)
#define GUI_ALT LT(KC_RGUI, OSM(MOD_RALT))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE] = LAYOUT_ortho_3x10(
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    SF_BS,
    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    SP_L2,   GUI_ALT, KC_RCTL
  ),

  [_FN1] = LAYOUT_ortho_3x10(
    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
    KC_TAB,  KC_SLSH, KC_SCLN, KC_MINS, KC_QUOT, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, SF_ENT,
    KC_GRV,  KC_COMM, KC_DOT,  KC_BSLS, KC_EQL,  KC_LBRC, KC_RBRC, _______, _______, _______
  ) /* ,

  [_FN2] = LAYOUT_ortho_3x10(
    KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
    KC_F11,  KC_F12,  _______, _______, _______, _______, _______, _______, _______, KC_GRV,
    _______, _______, _______, _______, _______, KC_DEL,  _______, _______, _______, _______
  ),

  [_FN3] = LAYOUT_ortho_3x10(
    _______, _______, _______, _______, _______, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,
    KC_TAB,  _______, _______, _______, _______, KC_COMM, KC_DOT,  KC_SLSH, KC_SCLN, KC_QUOT,
    _______, _______, _______, _______, KC_BSPC, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
  ),

  [_FN4] = LAYOUT_ortho_3x10(
    _______, _______, _______, _______, _______, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE,
    KC_TAB,  _______, _______, _______, _______, KC_LT,   KC_GT,   KC_QUES, KC_COLN, KC_DQUO,
    _______, _______, KC_GUIC, _______, KC_BSPC, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END
  ),

  [_FN5] = LAYOUT_ortho_3x10(
    RGB_TOG, RGB_MOD, _______, RESET,   RGB_HUI, RGB_SAI, RGB_VAI, _______, _______, _______,
    _______, _______, DEBUG,   _______, RGB_HUD, RGB_SAD, RGB_VAD, _______, _______, _______,
    BL_STEP, _______, KC_GUIC, _______, _______, _______, _______, _______, _______, _______
  )

    */
};
