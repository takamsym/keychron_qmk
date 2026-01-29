/* Copyright 2023 @ Keychron (https://www.keychron.com)
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 */

#include QMK_KEYBOARD_H
#include "keychron_common.h"

enum layers {
    MAC_BASE,
    MAC_FN,
    WIN_BASE,
    WIN_FN,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 [MAC_BASE] = LAYOUT_ansi_82(
        KC_ESC,   KC_BRID,  KC_BRIU,  KC_MCTRL, KC_LNPAD, RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_DEL,             KC_MUTE,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,            KC_PGUP,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,            KC_PGDN,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,             KC_HOME,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,  KC_UP,
        KC_LCTL,  KC_LOPTN, KC_LCMMD,                               KC_SPC,                                 KC_RCMMD,MO(MAC_FN),KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [MAC_FN] = LAYOUT_ansi_82(
        _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   _______,            RGB_TOG,
        _______,  BT_HST1,  BT_HST2,  BT_HST3,  P2P4G,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  _______,  _______,  _______,            _______,            KC_END,
        _______,            _______,  _______,  _______,  _______,  BAT_LVL,  NK_TOGG,  _______,  _______,  _______,  _______,            _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______),

    [WIN_BASE] = LAYOUT_ansi_82(
        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_DEL,             KC_MUTE,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,            KC_PGUP,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,            KC_PGDN,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,             KC_HOME,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,  KC_UP,
        /* 下の行：AltキーをMod-Tapに変更 (左:無変換[INT5]、右:変換[INT4]) */
        KC_LCTL,  KC_LGUI,  LALT_T(KC_INT5),                        KC_SPC,                                 RALT_T(KC_INT4), MO(WIN_FN),KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [WIN_FN] = LAYOUT_ansi_82(
        _______,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FILE,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,            RGB_TOG,
        _______,  BT_HST1,  BT_HST2,  BT_HST3,  P2P4G,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  _______,  _______,  _______,            _______,            KC_END,
        _______,            _______,  _______,  _______,  _______,  BAT_LVL,  NK_TOGG,  _______,  _______,  _______,  _______,            _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______)
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [MAC_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [MAC_FN]   = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
    [WIN_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [WIN_FN]   = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
};
#endif // ENCODER_MAP_ENABLE
// clang-format on

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_record_keychron_common(keycode, record)) {
        return false;
    }
    return true;
}

// ==========================================================
// Key Overrides for US layout on JIS Host (Windows Layer Only)
// ==========================================================
#if defined(KEY_OVERRIDE_ENABLE)

#define WIN_MASK (1 << 2)

// ヘルパーマクロ: 単押し設定（Shiftが押されている時は発動させない）
#define KO_SINGLE(key, repl) ko_make_with_layers_and_negmods(0, key, repl, WIN_MASK, MOD_MASK_SHIFT)
// ヘルパーマクロ: Shift設定
#define KO_SHIFT(key, repl)  ko_make_with_layers(MOD_MASK_SHIFT, key, repl, WIN_MASK)


// 1. Bracket Left [
const key_override_t lbrc_override = KO_SINGLE(KC_LBRC, KC_RBRC);           // [ (JIS: ])
const key_override_t lcbr_override = KO_SHIFT(KC_LBRC, S(KC_RBRC));         // { (JIS: Shift+])

// 2. Bracket Right ]
const key_override_t rbrc_override = KO_SINGLE(KC_RBRC, KC_BSLS);           // ] (JIS: \)
const key_override_t rcbr_override = KO_SHIFT(KC_RBRC, S(KC_BSLS));         // } (JIS: Shift+\)

// 3. Backslash \ (|)
// JISのバックスラッシュは KC_INT1, パイプ(|)は Shift+KC_INT3 (¥キー)
const key_override_t bsls_override = KO_SINGLE(KC_BSLS, KC_INT1);           // \ (JIS: _ )
const key_override_t pipe_override = KO_SHIFT(KC_BSLS, S(KC_INT3));         // | (JIS: | )

// 4. Equal = (+)
const key_override_t eql_override = KO_SINGLE(KC_EQL, S(KC_MINS));          // = (JIS: Shift+-)
const key_override_t pls_override = KO_SHIFT(KC_EQL, S(KC_SCLN));           // + (JIS: Shift+;)

// 5. Quote ' (")
const key_override_t quo_override = KO_SINGLE(KC_QUOT, S(KC_7));            // ' (JIS: Shift+7)
const key_override_t dqo_override = KO_SHIFT(KC_QUOT, S(KC_2));             // " (JIS: Shift+2)

// 6. Backtick ` (~)
const key_override_t grv_override = KO_SINGLE(KC_GRV, S(KC_LBRC));          // ` (JIS: Shift+@)
const key_override_t tld_override = KO_SHIFT(KC_GRV, S(KC_EQL));            // ~ (JIS: Shift+^)

// 7. Other Shifted Symbols (Number Row)
const key_override_t at_override   = KO_SHIFT(KC_2, KC_LBRC);    // @
const key_override_t caret_override= KO_SHIFT(KC_6, KC_EQL);     // ^
const key_override_t amp_override  = KO_SHIFT(KC_7, S(KC_6));    // &
const key_override_t ast_override  = KO_SHIFT(KC_8, S(KC_QUOT)); // *
const key_override_t lpar_override = KO_SHIFT(KC_9, S(KC_8));    // (
const key_override_t rpar_override = KO_SHIFT(KC_0, S(KC_9));    // )
const key_override_t under_override= KO_SHIFT(KC_MINS, S(KC_INT1)); // _
const key_override_t col_override  = KO_SHIFT(KC_SCLN, KC_QUOT); // :

// 配列として定義
const key_override_t *jis_overrides[] = {
    &lbrc_override, &lcbr_override,
    &rbrc_override, &rcbr_override,
    &bsls_override, &pipe_override,
    &eql_override,  &pls_override,
    &quo_override,  &dqo_override,
    &grv_override,  &tld_override,
    &at_override,
    &caret_override,
    &amp_override,
    &ast_override,
    &lpar_override,
    &rpar_override,
    &under_override,
    &col_override,
    NULL
};

// システムに渡す
const key_override_t **key_overrides = (const key_override_t **)jis_overrides;

#endif