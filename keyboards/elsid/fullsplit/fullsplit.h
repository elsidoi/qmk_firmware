 /* Copyright 2020 Imam Rafii 
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

#include "quantum.h"

/*   LAYOUT
  ESC  | F1  | F2  | F3  | F4  | F5 |                       | F6  | F7  | F8  | F9  | F10  | F11 | F12 |
   ~   | 1   | 2   | 3   | 4   | 5  |                       | 6   | 7   | 8   | 9   | 0    | -   | +   |
  TAB  | Q   | W   | E   | R   | T  |                       | Y   | U   | I   | O   | P    | [   | ]   |
  RAISE| A   | S   | D   | F   | G  |                       | H   | J   | K   | L   | ;    | "   | \   |
  LSHFT| Z   | X   | C   | V   | B  |                       | N   | M   | ,   | .   | /    | Unkn| R_Shift  |
                 | CTRL| SHIFT | RAISE | SPACE|       | Bspc | Enter | Win | R_Alt |
*/

#define LAYOUT( \
    L00, L01, L02, L03, L04, L05, L06,      R00, R01, R02, R03, R04, R05, R06,\
    L07, L08, L09, L10, L11, L12, L13,      R07, R08, R09, R10, R11, R12, R13,\
    L14, L15, L16, L17, L18, L19, L20,      R14, R15, R16, R17, R18, R19, R20,\
    L21, L22, L23, L24, L25, L26, L27,      R21, R22, R23, R24, R25, R26, R27,\
    L28, L29, L30, L31, L32, L33, L34,      R28, R29, R30, R31, R32, R33, R34,\
    L35, L36, L37, L38, L39, L40, L41,      R35, R36, R37, R38, R39, R40, R41\
) { \
    { KC_NO, L01,   L02,   L03,   L04,   L05,   L06 },\
    { KC_NO, L08,   L09,   L10,   L11,   L12,   L13 },\
    { KC_NO, L15,   L16,   L17,   L18,   L19,   L20 },\
    { KC_NO, L22,   L23,   L24,   L25,   L26,   L27 },\
    { KC_NO, L29,   L30,   L31,   L32,   L33,   L34 },\
    { KC_NO, KC_NO, KC_NO, L38,   L39,   L40,   L41 },\
\
    { R00, R01, R02, R03, R04, R05, R06 },\
    { R07, R08, R09, R10, R11, R12, R13 },\
    { R14, R15, R16, R17, R18, R19, R20 },\
    { R21, R22, R23, R24, R25, R26, R27 },\
    { R28, R29, R30, R31, R32, R33, R34 },\
    { R35, R36, R37, R38, KC_NO, KC_NO, KC_NO },\
}
