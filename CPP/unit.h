// header guard

#ifndef UNIT_H
#define UNIT_H

#include "effect.h"
#include "entity.h"
#include "settlement.h"
#include "ability.h"

// draft of SpecOp as unit instead of as resource
class SpecOp : MovableEntity {
  // variables
	Player& mentor;

  Settlement& currentHome;
  // functions

  Settlement GetHome();
  void SetHome(Settlement newSettlement);

  // constructor
  SpecOp(char* name, Node location, std::list<Effect> startingEffects, Movement move, Size size, int power, std::list <Effect> friendlyFX, std::list <Effect> enemyFX, UnitType type, std::list <UnitAbility> abilities, bool bIsHidden, Player& mentor, Settlement& startingHome);

};

// now we make types of specop from which we can create an infinite army



// end of header guard
#endif
