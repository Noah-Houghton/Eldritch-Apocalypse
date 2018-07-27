#include "effect.h"
#include <list>
// header guard

#ifndef UNIT_H
#define UNIT_H

enum UnitType {ARMY = 0; TRADERS = 1};

class Unit : MovingEntity {
  // variables
  int size;
  int power;
  list <Effect> townEffects;
  UnitType type;
  // functions
  void receiveEffect(Effect E);
};

// end of header guard
#endif
