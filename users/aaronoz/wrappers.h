#pragma once
#include "aaronoz.h"
/*
Since our quirky block definitions are basically a list of comma separated
arguments, we need a wrapper in order for these definitions to be
expanded before being used as arguments to the LAYOUT_xxx macro.
*/
#if (!defined(LAYOUT) && defined(KEYMAP))
#    define LAYOUT KEYMAP
#endif

// clang-format off
//#define LAYOUT_crkbd_wrapper(...)            LAYOUT_crkbd(__VA_ARGS__)
//#define LAYOUT_ergodox_pretty_wrapper(...)   LAYOUT_ergodox_pretty(__VA_ARGS__)
//#define KEYMAP_wrapper(...)                  LAYOUT(__VA_ARGS__)
//#define LAYOUT_wrapper(...)                  LAYOUT(__VA_ARGS__)
//#define LAYOUT_ortho_4x12_wrapper(...)       LAYOUT_ortho_4x12(__VA_ARGS__)
//#define LAYOUT_ortho_5x12_wrapper(...)       LAYOUT_ortho_5x12(__VA_ARGS__)
//#define LAYOUT_gergo_wrapper(...)            LAYOUT_gergo(__VA_ARGS__)

/*
Blocks for each of the four major keyboard layouts
Organized so we can quickly adapt and modify all of them
at once, rather than for each keyboard, one at a time.
And this allows for much cleaner blocks in the keymaps.
For instance Tap/Hold for Control on all of the layouts
NOTE: These are all the same length.  If you do a search/replace
  then you need to add/remove underscores to keep the
  lengths consistent.
*/

/*
#define _________________XXXXX_R1__________________       KC_,        KC_,         KC_,           KC_,          KC_
#define _________________XXXXX_R2__________________       KC_, RCTL_T(KC_), RALT_T(KC_),   RGUI_T(KC_),  RSFT_T(KC_)
#define _________________XXXXX_R3__________________       KC_,        KC_,         KC_,           KC_,          KC_

#define _________________XXXXX_L1__________________              KC_,         KC_,         KC_,         KC_,  KC_
#define _________________XXXXX_L2__________________       LSFT_T(KC_), LGUI_T(KC_), LALT_T(KC_), LCTL_T(KC_), KC_
#define _________________XXXXX_L3__________________              KC_,         KC_,         KC_,         KC_,  KC_
*/

#define _________________COLEMAK_L1________________              KC_Q,         KC_W,         KC_F,         KC_P,  KC_B
#define _________________COLEMAK_L2________________       LSFT_T(KC_A), LGUI_T(KC_R), LALT_T(KC_S), LCTL_T(KC_T), KC_G
#define _________________COLEMAK_L3________________              KC_Z,         KC_X,         KC_C,         KC_D,  KC_V

#define _________________COLEMAK_R1________________       KC_J,        KC_L,         KC_U,           KC_Y,          KC_QUOT
#define _________________COLEMAK_R2________________       KC_M, RCTL_T(KC_N), RALT_T(KC_E),   RGUI_T(KC_I),  RSFT_T(KC_O)
#define _________________COLEMAK_R3________________       KC_K,        KC_H,         KC_COMM,        KC_DOT,        KC_SLSH

#define _________________NUMBER_L1_________________       KC_NO,   KC_TILD,       KC_LCBR, KC_RCBR, KC_COLN
#define _________________NUMBER_L2_________________       KC_UNDS, KC_GRV,        KC_LPRN, KC_RPRN, KC_SCLN
#define _________________NUMBER_L3_________________       KC_NO,   LSFT(KC_BSLS), KC_LBRC, KC_RBRC, KC_BSLS

#define _________________NUMBER_R1_________________       KC_SCLN, KC_7, KC_8, KC_9, KC_PPLS
#define _________________NUMBER_R2_________________       KC_CLN,  KC_4, KC_5, KC_6, KC_MINS
#define _________________NUMBER_R3_________________       KC_EQL,  KC_1, KC_2, KC_3, KC_DOT

#define _________________SYMBOL_L1_________________       KC_NO,   KC_TILD,       KC_LCBR, KC_RCBR, KC_COLN
#define _________________SYMBOL_L2_________________       KC_UNDS, KC_GRV,        KC_LPRN, KC_RPRN, KC_SCLN
#define _________________SYMBOL_L3_________________       KC_NO,   LSFT(KC_BSLS), KC_LBRC, KC_RBRC, KC_BSLS

#define _________________SYMBOL_R1_________________       KC_SCLN, KC_AMPR, KC_ASTR, KC_BSLS, KC_PPLS
#define _________________SYMBOL_R2_________________       KC_CLN,  KC_DLR,  KC_PERC, KC_CIRC, KC_MINS
#define _________________SYMBOL_R3_________________       KC_EQL,  KC_EXLM, KC_AT,   KC_HASH, KC_DOT

#define _________________NUMBER_LEFT_______________       KC_1,    KC_2,    KC_3,    KC_4,    KC_5
#define _________________NUMBER_RIGHT______________       KC_6,    KC_7,    KC_8,    KC_9,    KC_0

#define _________________SYMBOL_LEFT_______________       KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC
#define _________________SYMBOL_RIGHT______________       KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN

#define _________________FUNC_LEFT_________________       KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5
#define _________________FUNC_RIGHT________________       KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10

#define _________________NAV_L1____________________       KC_ACL0, KC_NO,   KC_MS_U, KC_WH_U, KC_MS_BTN1
#define _________________NAV_L2____________________       KC_ACL1, KC_MS_L, KC_MS_D, KC_MS_R, KC_MS_BTN2
#define _________________NAV_L3____________________       KC_ACL2, KC_WH_L, KC_WH_R, KC_WH_D, KC_MS_BTN3

#define _________________NAV_R1____________________       KC_INS,        KC_HOME,         KC_UP,             KC_PGUP,    KC_VOLU
#define _________________NAV_R2____________________       KC_NO,  RSFT_T(KC_LEFT), RGUI_T(KC_DOWN),   RALT_T(KC_RIGHT),  KC_MUTE
#define _________________NAV_R3____________________       KC_NO,         KC_END,          KC_NO,             KC_PGDN,    KC_VOLD

#define _________________QWERTY_L1_________________               KC_Q,         KC_W,         KC_E,         KC_R,  KC_T
#define _________________QWERTY_L2_________________        LSFT_T(KC_A), LGUI_T(KC_S), LALT_T(KC_D), LCTL_T(KC_F), KC_G
#define _________________QWERTY_L3_________________               KC_Z,         KC_X,         KC_C,         KC_V,  KC_B

#define _________________QWERTY_R1_________________        KC_Y,        KC_U,         KC_I,           KC_O,          KC_P
#define _________________QWERTY_R2_________________        KC_H, RCTL_T(KC_J), RALT_T(KC_K),   RGUI_T(KC_L),  RSFT_T(KC_SCLN)
#define _________________QWERTY_R3_________________        KC_N,        KC_M,         KC_COMM,        KC_DOT,        KC_SLASH
