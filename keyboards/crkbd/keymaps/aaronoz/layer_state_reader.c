#include "quantum.h"
#include <stdio.h>

#define L_BASE 0
#define L_NUMBER (1 << 1)
#define L_SYMBOL (1 << 2)
#define L_NAVIG (1 << 3)
#define L_ADJUST (1 << 4)

char layer_state_str[24];

const char *read_layer_state(void) {
  switch (layer_state)
  {
  case L_BASE:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Colemak");
    break;
  case L_NUMBER:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Number");
    break;
  case L_SYMBOL:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Symbol");
    break;
  case L_NAVIG:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Navigate");
    break;
  case L_ADJUST:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Adjust");
    break;
  default:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Undef-%u", layer_state);
  }

  return layer_state_str;
}
