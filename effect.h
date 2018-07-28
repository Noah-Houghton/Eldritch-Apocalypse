#include "settlement.h"
// header guard

#ifndef EFFECT_H
#define EFFECT_H

class Effect {
  // variables
  bool bIsStackable;
  char* name;
  // functions
  void Effect(Settlement &S);
};

class SemipermanentEffect : Effect {
  private:
    // functions
    bool IsSatisifed(const Settlement &S);
};

class TempEffect : Effect {
  private:
     int duration;
};



// end of header guard
#endif
