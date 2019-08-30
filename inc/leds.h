#include <stdint.h>
#include "error.h"

void LedCreate(uint16_t * puerto, handler_t error);

void LedPrender(uint8_t led);

void LedApagar(uint8_t led);
