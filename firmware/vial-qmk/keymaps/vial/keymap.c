#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_Q,         KC_W,   KC_E,   KC_R,    KC_T,        KC_Y,     KC_U,  KC_I,  KC_O,     KC_P,
    KC_A,         KC_S,   KC_D,   KC_F,    KC_G,        KC_H,     KC_J,  KC_K,  KC_L,     KC_SCLN,
    LSFT_T(KC_Z), KC_X,   KC_C,   KC_V,    KC_B,        KC_MUTE,  KC_N,  KC_M,  KC_COMM,  RSFT_T(KC_DOT),
    KC_LCTL,      LGUI_T(KC_ESC), LT(1, KC_SPC),        LT(2, KC_SPC),   RALT_T(KC_ENT),  RCTL_T(KC_SLSH)
  ),

  [1] = LAYOUT(
    KC_1,     KC_2,     KC_3,     KC_4,     KC_5,              KC_6,     KC_7,     KC_8,     KC_9,     KC_0,  
    KC_LGUI,  KC_LALT,  KC_LCTL,  KC_LSFT,  KC_GRV,            KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_CAPS,
    KC_MINS,  KC_EQL,   KC_LBRC,  KC_RBRC,  KC_BSLS,           KC_INS,   KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END,   
    _______,                      _______,  _______,           _______,  _______,                      _______         
  ),
  
  [2] = LAYOUT(
    KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR,   KC_PERC,           KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_F11,   KC_F12,
    KC_RGUI,  KC_RALT,  KC_RCTL,  KC_RSFT,  KC_TILD,           KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5, 
    KC_UNDS,  KC_PLUS,  KC_LCBR,  KC_RCBR,  KC_PIPE,           KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,
    _______,                      _______,  _______,           _______,  _______,                      _______         
  ),

  [3] = LAYOUT(
    _______,  _______,  _______,  _______,  _______,           _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,           _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,           _______,  _______,  _______,  _______,  _______,
    _______,                      _______,  _______,           _______,  _______,                      _______
  ),

  [4] = LAYOUT(
    _______,  _______,  _______,  _______,  _______,           _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,           _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,           _______,  _______,  _______,  _______,  _______,
    _______,                      _______,  _______,           _______,  _______,                      _______        
  ),

  [5] = LAYOUT(
    _______,  _______,  _______,  _______,  _______,           _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,           _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,           _______,  _______,  _______,  _______,  _______,
    _______,                      _______,  _______,           _______,  _______,                      _______   
  ),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [2] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [3] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [4] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [5] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) }
};
#endif