#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _BASE 0
#define _RAISE 1
#define _LOWER 2
#define ZSFT   MT(MOD_LSFT, KC_Z)
#define XCTL   MT(MOD_LCTL, KC_X)
#define CALT   MT(MOD_LALT, KC_C)
#define VGUI   MT(MOD_LGUI, KC_V)
#define BLOWER LT(_RAISE, KC_B)
#define SRAISE LT(_RAISE, KC_SPC)
#define NGUI   MT(MOD_RGUI, KC_N)
#define MALT   MT(MOD_RALT, KC_M)
#define DTCTL  MT(MOD_RCTL, KC_DOT)
#define CMSFT  MT(MOD_RSFT, KC_COMM)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_ortho_3x10(
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_BSPC,
    ZSFT,    XCTL,    CALT,    VGUI,    BLOWER,  SRAISE,  NGUI,    MALT,    DTCTL,   CMSFT
  ),

  [_RAISE] = LAYOUT_ortho_3x10(
    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
    KC_TAB,  KC_BSLS, KC_EQL,  KC_MINS, KC_QUOT, KC_LBRC, KC_RBRC, KC_SCLN, KC_SLSH, KC_ENT,
    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_B,    KC_SPC,  KC_RGUI, KC_RALT, KC_RCTL, KC_RSFT
  ),

  [_LOWER] = LAYOUT_ortho_3x10(
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,
    KC_PAUSE,KC_GRV,  KC_F10,  KC_F11,  KC_F12,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_DEL,
    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_B,    KC_SPC,  KC_RGUI, KC_RALT, KC_RCTL, KC_RSFT
  )
};
