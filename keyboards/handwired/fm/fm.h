#pragma once
#include "quantum.h"

#define LAYOUT_FM_RIGHT(\
  R00, R01, R02, R03, R04, R05, \
  R10, R11, R12, R13, R14, R15, \
  R20, R21, R22, R23, R24, R25, \
  R30, R31, R32, R33, R34, R35, \
            R42, R43            \
  ) \
  { \
    { R00, R01, R02, R03, R04,   R05   }, \
    { R10, R11, R12, R13, R14,   R15   }, \
    { R20, R21, R22, R23, R24,   R25   }, \
    { R30, R31, R32, R33, R34,   R35   }, \
    { R42, R43 }, \
}
