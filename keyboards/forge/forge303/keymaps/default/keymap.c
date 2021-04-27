#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┐
     * │ 1 │ 2 │ 3 │
     * ├───┼───┼───┤
     * │ 4 │ 5 │ 6 │
     * ├───┼───┼───┤
     * │ 7 │ 8 │ 9 │
     * └───┴───┴───┘
     */
    [0] = LAYOUT(
        KC_P1,   KC_P2,   KC_P3,
        KC_P4,   KC_P5,   KC_P6,
        KC_P7,   KC_P8,   MO(1)
    ),
    [1] = LAYOUT(
        RGB_TOG,   RGB_MOD,   RGB_SPI,
        RGB_VAI,   RGB_HUI,   RGB_SPD,
        RGB_VAD,   RGB_HUD,   KC_TRNS
        )
};
