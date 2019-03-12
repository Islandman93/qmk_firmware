/* A standard layout for the FM Right side keyboard */ 
#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_FM_RIGHT(
     KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_BSPC,
     KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_MINS,
     KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,KC_QUOT,
     KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,KC_BSLASH,
                    KC_PLUS, KC_EQL
  ),
};
