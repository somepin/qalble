/* Copyright 2021
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

enum layers{
  _BASE,
  _LOWER,
  _RAISE,
};

enum combo_events {
  COMBO_BSP,
  COMBO_DEL,
  COMBO_NBS,
  COMBO_TAB,
  COMBO_ESC,
  COMBO_ENT
};

#define LOWER  LT(_LOWER, KC_SPC)
#define RAISE  LT(_RAISE, KC_SPC)
#define KC_SZ  LSFT_T(KC_Z)
#define KC_SDT RSFT_T(KC_DOT)
#define KC_GES LGUI_T(KC_ESC)
#define KC_ATB RALT_T(KC_TAB)
#define KC_CSL RCTL_T(KC_SLSH)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
    KC_Q,    KC_W,   KC_E,   KC_R,   KC_T,          KC_Y,     KC_U,  KC_I,  KC_O,     KC_P,
    KC_A,    KC_S,   KC_D,   KC_F,   KC_G,          KC_H,     KC_J,  KC_K,  KC_L,     KC_SCLN,
    KC_SZ,   KC_X,   KC_C,   KC_V,   KC_B,          KC_QUOT,  KC_N,  KC_M,  KC_COMM,  KC_SDT,
    KC_LCTL,                 KC_GES, LOWER,         RAISE,    KC_ATB,                 KC_CSL
  ),

  [_LOWER] = LAYOUT(
    KC_1,     KC_2,     KC_3,     KC_4,     KC_5,              KC_6,     KC_7,     KC_8,     KC_9,     KC_0,  
    KC_LGUI,  KC_LALT,  KC_LCTL,  KC_LSFT,  KC_GRV,            KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_CAPS,
    KC_MINS,  KC_EQL,   KC_LPRN,  KC_RPRN,  KC_BSLS,           KC_INS,   KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END,   
    _______,                      _______,  _______,           _______,  _______,                      _______         
  ),
  
  [_RAISE] = LAYOUT(
    KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR,   KC_PERC,           KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_F11,   KC_F12,
    KC_RGUI,  KC_RALT,  KC_RCTL,  KC_RSFT,  KC_TILD,           KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5, 
    KC_UNDS,  KC_PLUS,  KC_LBRC,  KC_RBRC,  KC_PIPE,           KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,
    _______,                      KC_LCBR,  KC_RCBR,           _______,  _______,                      _______         
  ),
};

#ifdef COMBO_ENABLE
const uint16_t PROGMEM combo_bsp[] = {KC_O, KC_P, COMBO_END};
const uint16_t PROGMEM combo_del[] = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM combo_nbs[] = {KC_8, KC_9, COMBO_END};
const uint16_t PROGMEM combo_tab[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM combo_esc[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM combo_ent[] = {KC_L, KC_SCLN, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [COMBO_BSP] = COMBO(combo_bsp,KC_BSPC),
  [COMBO_DEL] = COMBO(combo_del,KC_DEL),
  [COMBO_NBS] = COMBO(combo_nbs,KC_BSPC),
  [COMBO_TAB] = COMBO(combo_tab,KC_TAB),
  [COMBO_ESC] = COMBO(combo_esc,KC_ESC),
  [COMBO_ENT] = COMBO(combo_ent,KC_ENT),
};
#endif
