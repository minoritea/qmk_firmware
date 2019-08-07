#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _BASE 0
#define _RAISE 1
#define _LOWER 2

#define SRAISE LT(_RAISE, KC_SPC)
#define ZALT   MT(MOD_LALT, KC_Z)
#define ENTCTL MT(MOD_RCTL, KC_ENT)
#define BSGUI  MT(MOD_RGUI, KC_BSPC)
#define LOWER  OSL(_LOWER)
#define ______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_ortho_3x10(
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_U,    KC_I,    KC_O,    KC_P,    BSGUI,
    KC_A,    KC_S,    KC_D,    KC_F,    KC_H,    KC_J,    KC_K,    KC_L,    KC_Y,    ENTCTL,
    ZALT,    KC_X,    KC_C,    KC_G,    SRAISE,  KC_N,    KC_M,    KC_V,    KC_B,    KC_RSFT
  ),

  [_RAISE] = LAYOUT_ortho_3x10(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    ______,
    KC_TAB,  KC_GRV,  KC_MINS, KC_QUOT, ______,  KC_9,    KC_0,    KC_SLSH, KC_SCLN, ______,
    ______,  LOWER,   KC_BSLS, KC_EQL,  ______,  KC_LBRC, KC_RBRC, KC_COMM, KC_DOT,  ______  
  ),

  [_LOWER] = LAYOUT_ortho_3x10(
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,
    KC_PAUSE,KC_F10,  KC_F11,  KC_F12,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_DEL,  ______,
    ______,  ______,  ______,  ______,  ______,  ______,  ______,  ______,  ______,  ______
  )
};
