#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _BASE 0
#define _RAISE 1
#define _LOWER 2

#define SP_L2   LT(_FN1, KC_SPC)
#define ESCAPS  LT(KC_CAPS, KC_ESC)
#define SF_BS   LT(KC_RSFT, KC_BSPC)
#define SF_ENT  LT(KC_RSFT, KC_ENT)
#define GUI_ALT LT(KC_RGUI, OSM(MOD_RALT))
#define RAISE  LT(_RAISE, KC_SPC)
#define LOWER  LT(_LOWER, KC_SPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE] = LAYOUT_ortho_3x10(
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,
    KC_LSFT, KC_LCTL, KC_LGUI, KC_LALT, RAISE,   LOWER,   KC_RALT, KC_RGUI, KC_RCTL, KC_RSFT
  ),

  [_RAISE] = LAYOUT_ortho_3x10(
    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),

  [_LOWER] = LAYOUT_ortho_3x10(
    KC_ESC,  KC_GRV,  _______, KC_MINS, KC_QUOT, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_BSPC,
    KC_TAB,  _______, _______, KC_BSLS, KC_EQL,  KC_LBRC, KC_RBRC, _______, KC_DEL,  KC_ENT,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  )
};
