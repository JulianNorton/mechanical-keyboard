#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP(1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, \
           1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1,   1, \
           GRV,  A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN, QUOT, ENT, GRV,           \
           LSFT, Z,   X,   C,   V,   B,   N,   M,  COMM, DOT, SLSH, RSFT,  UP, GRV,           \
           LCTL, LALT, LGUI,       SPC,       RGUI, RALT, RCTRL, LEFT, DOWN, RIGHT),


    /* 1: FN 1 */
    /*KEYMAP(GRV,  F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,   F10,  F11,  F12,  TRNS, TRNS,     \
           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,     \
           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, 6,           \
           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, 1, TRNS,           \
           TRNS, TRNS, TRNS,              SPC, TRNS, TRNS, TRNS, TRNS, 2, TRNS ),*/


};

const uint16_t PROGMEM fn_actions[] = {
      [0] = ACTION_LAYER_MOMENTARY(1),
};