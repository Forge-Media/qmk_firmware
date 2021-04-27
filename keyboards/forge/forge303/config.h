/* Copyright 2021 Jeremy Paton (FugiTive) (FORGE)
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
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x4647 // "FG"
#define PRODUCT_ID      0x00E6 // 303
#define DEVICE_VER      0x0001
#define MANUFACTURER    FORGE
#define PRODUCT         FORGE303

/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 3

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
*/
#define MATRIX_ROW_PINS { C7, C6, B6 }
#define MATRIX_COL_PINS { F1, F4, F5 }
//#define UNUSED_PINS { B0, B4, B5, B7, D0, D1, D2, D3, D4, D5, D6, D7, E6, F7 }

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Tries to keep switch state consistent with keyboard LED state */
#define LOCKING_RESYNC_ENABLE

/* Disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

// The pin connected to the data pin of the LEDs
#define RGB_DI_PIN F0
// The number of LEDs connected
#define DRIVER_LED_TOTAL 13

#ifdef RGB_DI_PIN
    // RGB LIGHTING
    // The number of LEDs connected 
    #define RGBLED_NUM 13
    // The default mode to use upon clearing the EEPROM
    // #define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_STATIC_LIGHT
    // The default mode to use upon clearing the EEPROM (125 = Cyan)
    #define RGBLIGHT_DEFAULT_HUE 125
    // The number of steps to cycle through the hue by
    #define RGBLIGHT_HUE_STEP 10
    // The number of steps to increment the brightness by
    #define RGBLIGHT_VAL_STEP 10
    // The maximum brightness level
    #define RGBLIGHT_LIMIT_VAL 170
    // If defined, the RGB lighting will be switched off when the host goes to sleep
    #define RGBLIGHT_SLEEP

    // RGB LIGHTING ANIMATIONS
    //#define RGBLIGHT_ANIMATIONS
    #define RGBLIGHT_EFFECT_BREATHING
    #define RGBLIGHT_EFFECT_RAINBOW_MOOD
    #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
    #define RGBLIGHT_EFFECT_STATIC_GRADIENT

    // RGB MATRIX
    // limits maximum brightness of LEDs to 200 out of 255. If not defined maximum brightness is set to 255
    #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 170
    // Sets the default hue value, if none has been set (125 = Cyan)
    #define RGB_MATRIX_STARTUP_HUE 125
    // Sets the default mode, if none has been set
    #define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_CYCLE_LEFT_RIGHT
    // Support reaction to keypresses
    #define RGB_MATRIX_KEYPRESSES

    // RGB MATRIX ANIMATIONS
    //#define DISABLE_RGB_MATRIX_SOLID_COLOR
    //#define DISABLE_RGB_MATRIX_ALPHAS_MODS
    //#define DISABLE_RGB_MATRIX_GRADIENT_UP_DOWN
    //#define DISABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
    //#define DISABLE_RGB_MATRIX_BREATHING
    #define DISABLE_RGB_MATRIX_BAND_SAT
    #define DISABLE_RGB_MATRIX_BAND_VAL
    #define DISABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
    #define DISABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
    #define DISABLE_RGB_MATRIX_BAND_SPIRAL_SAT
    #define DISABLE_RGB_MATRIX_BAND_SPIRAL_VAL
    //#define DISABLE_RGB_MATRIX_CYCLE_ALL
    //#define DISABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
    //#define DISABLE_RGB_MATRIX_CYCLE_UP_DOWN
    //#define DISABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
    //#define DISABLE_RGB_MATRIX_CYCLE_OUT_IN
    #define DISABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
    #define DISABLE_RGB_MATRIX_CYCLE_PINWHEEL
    #define DISABLE_RGB_MATRIX_CYCLE_SPIRAL
    #define DISABLE_RGB_MATRIX_DUAL_BEACON
    //#define DISABLE_RGB_MATRIX_RAINBOW_BEACON
    #define DISABLE_RGB_MATRIX_RAINBOW_PINWHEELS
    //#define DISABLE_RGB_MATRIX_RAINDROPS
    #define DISABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
    //#define DISABLE_RGB_MATRIX_HUE_BREATHING
    //#define DISABLE_RGB_MATRIX_HUE_PENDULUM
    //#define DISABLE_RGB_MATRIX_HUE_WAVE
    //#define DISABLE_RGB_MATRIX_TYPING_HEATMAP
    #define DISABLE_RGB_MATRIX_DIGITAL_RAIN
    //#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
    //#define DISABLE_RGB_MATRIX_SOLID_REACTIVE
    #define DISABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
    #define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
    #define DISABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
    #define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
    #define DISABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
    #define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
    //#define DISABLE_RGB_MATRIX_SPLASH
    #define DISABLE_RGB_MATRIX_MULTISPLASH
    #define DISABLE_RGB_MATRIX_SOLID_SPLASH
    #define DISABLE_RGB_MATRIX_SOLID_MULTISPLASH
#endif
