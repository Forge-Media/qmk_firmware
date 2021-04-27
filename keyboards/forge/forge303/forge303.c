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
#include "forge303.h"

#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = { {
        // Key Matrix to LED Index
        { 1,      2,      3 },
        { 5,      6,      7 },
        { 9,     10,     11 }
    }, {
        // LED Index to Physical Position
        // UNDERGLOW_0
        { 0,   0 },
        // K0, K1, K2
        { 0,   0 }, { 112,   0 }, { 224,   0 },
        // UNDERGLOW_1
        { 0,   36 },
        // K3, K4, K5
        { 0,  32 }, { 112,  32 }, { 224,  32 },
        // UNDERGLOW_2
        { 224,   36 },
        // K6, K7, K8
        { 0,  64 }, { 112,  64 }, { 224,  64 },
        // UNDERGLOW_3
        { 224,   0 }
    }, {
        // LED Index to Flag
        // RGB_0_UG, RGB_1_KL, RGB_2_KL, RGB_3_KL
        2, 4, 4, 4,
        // RGB_1_UG, RGB_5_KL, RGB_6_KL, RGB_7_KL, RGB_8_UG
        2, 4, 4, 4, 2,
        // RGB_9_KL, RGB_10_KL, RGB_11_KL, RGB_12_UG
        4, 4, 1, 2
} };
#endif
