#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP(0,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   1,   2,   3,   4,  \
           0,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   1,   2,   3,   4,  \
           0,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   1,        3,   4,  \
           0,        2,   3,   4,   5,   6,   7,   8,   9,   0,   1,   2,   3,   4,   \
           0,   1,   2,                  6,             9,   0,   1,   2,   3,   4),



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