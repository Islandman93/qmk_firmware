#include "fm.h"

void matrix_init_kb(void) {
  // Turn status LED on
  setPinOutput(C13);
  writePinHigh(C13);

  matrix_init_user();
}
