/* Copyright 2019
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

#define MATRIX_COL_PINS { A1, A2, A3, A4, A5, A6, A7 }
#define MATRIX_ROW_PINS { B8, B7, B6, B5, B4, B3 }
#define MATRIX_COL_PINS_RIGHT { A10, A9, A8, B15, B14, B13, B12 }
#define MATRIX_ROW_PINS_RIGHT { B3, B4, B5, B6, B7, B8 }


/*
 * Split Keyboard specific options, make sure you have 'SPLIT_KEYBOARD = yes' in your rules.mk, and define SOFT_SERIAL_PIN.
 */
#define SPLIT_HAND_PIN B11
#define SOFT_SERIAL_PIN B9

