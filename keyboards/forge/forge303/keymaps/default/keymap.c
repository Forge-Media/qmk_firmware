#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 
     * L0 - Function Keys
     * ┌────────┬────────┬────────┐
     * │  F13   │  F14   │  F15   │
     * ├────────┼────────┼────────┤
     * │  F16   │  F17   │  F18   │
     * ├────────┼────────┼────────┤
     * │  F19   │ F20/L1 │ F21/L2 │
     * └────────┴────────┴────────┘
     */
    [0] = LAYOUT(
        KC_1,     KC_2,         KC_3,
        KC_4,     KC_5,         KC_6,
        KC_7,     LT(1, KC_8), LT(2, KC_9)
    ),
    /* 
     * L1 - Media
     * ┌────────┬────────┬────────┐
     * │   <<   │  PLAY  │   >>   │
     * ├────────┼────────┼────────┤
     * │  VOL - │  STOP  │  VOL + │
     * ├────────┼────────┼────────┤
     * │  MUTE  │        │ MEDIA  │ 
     * └────────┴────────┴────────┘
     */
    [1] = LAYOUT(
        KC_MPRV,   KC_MPLY,   KC_MNXT,
        KC_VOLD,   KC_MSTP,   KC_VOLU,
        KC_MUTE,   KC_TRNS,   KC_MSEL
    ),
    /* 
     * L2 - RGB
     * ┌─────────┬─────────┬─────────┐
     * │ BRIGHT+ │  HUE +  │ SPEED + │
     * ├─────────┼─────────┼─────────┤
     * │ BRIGHT- │  HUE -  │ SPEED - │
     * ├─────────┼─────────┼─────────┤
     * │ RGB TOG │  MODE+  │         │ 
     * └─────────┴─────────┴─────────┘
     */
    [2] = LAYOUT(
        RGB_VAI,   RGB_HUI,   RGB_SPI,
        RGB_VAD,   RGB_HUD,   RGB_SPD,
        RGB_TOG,   RGB_MOD,   KC_TRNS
    )
};
