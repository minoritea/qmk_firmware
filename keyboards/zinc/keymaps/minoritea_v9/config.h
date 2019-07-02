/*
This is the c configuration file for the keymap

Copyright 2018 monksoffunk
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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
// if you need more program area, try uncomment follow line
#include "serial_config_simpleapi.h"

#define RAISE  LT(_RAISE, KC_SPC)
#define LOWER  MO(_LOWER)
#define IM_TGL LGUI(KC_SPC)

#define PERMISSIVE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT
#define RETRO_TAPPING

#ifdef TAPPING_TERM 
  #undef TAPPING_TERM
#endif

#define TAPPING_TERM 400
