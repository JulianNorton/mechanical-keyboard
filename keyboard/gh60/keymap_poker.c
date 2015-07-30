#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  KEYMAP(
    ESC,  1,   2,   3,   4,   5,   6,   7,   8,   9,   0, MINS,   EQL,  BSPC,  VOLU,  \
    TAB,  Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P, LBRC, RBRC,  BSLS,  VOLD,  \
    FN0,   A,   S,   D,   F,   G,   H,   J,   K,   L,    SCLN,  QUOT,  ENT,  PGUP,  \
    LSFT,   Z,   X,   C,   V,   B,   N,   M,  COMM, DOT, SLSH,  RSFT,   UP,  PGDN,  \
    LCTRL, LALT, LGUI,       SPC,         RGUI,  RALT, RCTRL, LEFT, DOWN, RIGHT),


   /* 1: FN 1 */
  KEYMAP(
    GRV,   F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,   F10, F11,   F12,  TRNS,  TRNS,  \
    TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS, TRNS,  TRNS,  TRNS,  \
    TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  \
    TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  \
    TRNS,  TRNS,  TRNS,       TRNS,       TRNS,  TRNS, TRNS, TRNS, TRNS, TRNS),

};


const uint16_t PROGMEM fn_actions[] = {
  [0] = ACTION_LAYER_MOMENTARY(1),
};