/*
Copyright 2021 LeleLab

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0xCA21
#define PRODUCT_ID   0x003C
#define DEVICE_VER   0x0005
#define MANUFACTURER LeleLab
#define PRODUCT      Lele60

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 14

#define MATRIX_ROW_PINS { B7,D2,D3,B1,B2 }
#define MATRIX_COL_PINS { B3,F7,C7,C6,B6,B5,F6,F5,F4,F1,F0,B4,D7,D6 }
#define UNUSED_PINS     { D4,D5,E6 }
#define DIODE_DIRECTION COL2ROW


#define RGB_DI_PIN B0
#define RGBLED_NUM    89


/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5


/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

/* Bootmagic Lite key configuration */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0
