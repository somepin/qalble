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

#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0x7370
#define PRODUCT_ID      0x7177
#define DEVICE_VER      0x0001
#define MANUFACTURER    somepin
#define PRODUCT         QAL

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 10

#define DIODE_DIRECTION COL2ROW

#define MATRIX_COL_PINS { 25, 18, 19, 20, 12, 7, 1, 0, 2, 3 }
#define MATRIX_ROW_PINS { 29, 24, 9, 8 }
#define UNUSED_PINS

#define ENCODERS_PAD_A { 27 }
#define ENCODERS_PAD_B { 28 }
#define ENCODER_RESOLUTION 4
#define TAP_CODE_DELAY 10

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE    5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
// #define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
// #define LOCKING_RESYNC_ENABLE
