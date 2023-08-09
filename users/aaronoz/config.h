#pragma once

// Use custom magic number so that when switching branches, EEPROM always gets reset
#define EECONFIG_MAGIC_NUMBER (uint16_t)0x1337

// put standard config stuff here

// If you quickly tap and then hold the key, its tap action is
// repeated. In QMK, this is enabled by default and disabled with
// TAPPING_FORCE_HOLD
#define TAPPING_FORCE_HOLD

// If you press a dual-role key, tap another key (press and release)
// and then release the dual-role key, all within the tapping term, by
// default the dual-role key will perform its tap action. If the
// PERMISSIVE_HOLD option is enabled, the dual-role key will perform
// its hold action instead.
//#define PERMISSIVE_HOLD

// When the user holds a key after tapping it, the tapping function is
//repeated by default, rather than activating the hold function. This
//allows keeping the ability to auto-repeat the tapping function of a
//dual-role key. QUICK_TAP_TERM enables fine tuning of that
//ability. If set to 0, it will remove the auto-repeat ability and
//activate the hold function instead.
#define QUICK_TAP_TERM 80

// time before a tap turns into a hold. typical usage is 150-220ms, default is 200
#define TAPPING_TERM 150

// auto shift now works with home-row mods by also using retro shift!

#define RETRO_SHIFT 500 // If RETRO_SHIFT is defined to a value, hold
                        // times greater than that value will not
                        // produce a tap on release. This enables
                        // modifiers to be held for combining with
                        // mouse clicks without generating taps on
                        // release.

// allow for mod + autoshift keys (ctl + long a = ctl+shft+a)
#define AUTO_SHIFT_MODIFIERS
#define AUTO_SHIFT_TIMEOUT 120
#define NO_AUTO_SHIFT_SPECIAL // don't autoshift special chars
//#define NO_AUTO_SHIFT_NUMERIC // don't autoshift number chars
//#define NO_AUTO_SHIFT_ALPHA // don't autoshift alpha chars
