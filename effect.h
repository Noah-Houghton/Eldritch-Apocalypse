#include "settlement.h"
// header guard

#ifndef EFFECT_H
#define EFFECT_H

class Effect {
  // variables
  bool permanent;
  int duration;
  char* name;
  // functions
  void Effect(Settlement S);
};



// end of header guard
#endif
