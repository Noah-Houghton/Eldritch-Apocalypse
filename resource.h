// header guard

#ifndef RESOURCE_H
#define RESOURCE_H
#include "effect.h"

class Resource {
  // variables

  int max;
  int amount;
  bool bRespectMax;
  Effect zeroEffect;
  Effect overflowEffect;

  // functions

  void SetZeroEffect(Effect newEffect);
  Effect GetZeroEffect();
  int GetAmount();
  void SetAmount(int newAmount);
};

// defines movement paradigm for movable entities
// land cannot go into water, water cannot go into air, air can pass all of them
enum MovementType { Land = 0, Water = 1, Amphibious = 2, Air = 3 };

class Movement : Resource {
	bool bIsMoving;
	Node destination;
	MovementType type;
};

// end of header guard
#endif
