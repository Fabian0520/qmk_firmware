/*
Copyright 2017 Luiz Ribeiro <luizribeiro@gmail.com>

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

#include "quantum.h"

#define XXX KC_NO

#define LAYOUT_ortho_6x4( \
    k00,  k10,  k20,  k30, \
    k01,  k11,  k21,  k31, \
    k02,  k12,  k22,  k32, \
    k03,  k13,  k23,  k33, \
    k04,  k14,  k24,  k34, \
    k05,  k15,  k25,  k35 \
) { \
    { k00, k01, k02, k03, k04, k05 }, \
    { k10, k11, k12, k13, k14, k15 }, \
    { k20, k21, k22, k23, k24, k25 }, \
    { k30, k31, k32, k33, k34, k35 } \
}

#define LAYOUT_ortho_4x6( \
    k05, k04, k03, k02, k01, k00, \
    k15, k14, k13, k12, k11, k10, \
    k25, k24, k23, k22, k21, k20, \
    k35, k34, k33, k32, k31, k30 \
) { \
    { k00, k01, k02, k03, k04, k05 }, \
    { k10, k11, k12, k13, k14, k15 }, \
    { k20, k21, k22, k23, k24, k25 }, \
    { k30, k31, k32, k33, k34, k35 } \
}

#define LAYOUT_numpad_6x4( \
    k00,  k10,  k20,  k30, \
    k01,  k11,  k21,  k31, \
    k02,  k12,  k22, \
    k03,  k13,  k23,  k32, \
    k04,  k14,  k24, \
    k05,        k25,  k34 \
) { \
    { k00, k01, k02, k03, k04, k05 }, \
    { k10, k11, k12, k13, k14, XXX }, \
    { k20, k21, k22, k23, k24, k25 }, \
    { k30, k31, k32, XXX, k34, XXX } \
}

#define LAYOUT( \
    K01, K02, K03, K04, K05, K06, \
    K11, K12, K13, K14, K15, K16, \
    K21, K22, K23, K24, K25, K26, \
    K31, K32, K33, K34, K35, K36 \
) LAYOUT_ortho_6x4( \
    K06,  K16,  K26,  K36,  \
    K05,  K15,  K25,  K35,  \
    K04,  K14,  K24,  K34,  \
    K03,  K13,  K23,  K33,  \
    K02,  K12,  K22,  K32,  \
    K01,  K11,  K21,  K31   \
)

#define LAYOUT_fabi( \
   K36, K35, K34, K33, K32, K31 ,  \
   K26, K25, K24, K23, K22, K21 , \
   K16, K15, K14, K13, K12, K11 , \
   K06, K05, K04, K03, K02, K01   \
) \
{ \
  { K06, K05, K04, K03, K02, K01 }, \
  { K16, K15, K14, K13, K12, K11 }, \
  { K26, K25, K24, K23, K22, K21 }, \
  { K36, K35, K34, K33, K32, K31 }  \
}
