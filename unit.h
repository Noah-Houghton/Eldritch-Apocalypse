// header guard

#ifndef UNIT_H
#define UNIT_H

#include "effect.h"
#include "entity.h"
#include "settlement.h"
#include "ability.h"

enum UnitType {ARMY = 0; TRADERS = 1};

class Unit : MovableEntity {
  // variables

  int size;
  int power;
  std::list<Effect> townEffects;
  UnitType type;
  // active abilities, if any
  std::list<UnitAbility> abilities;
  bool bIsHidden;

  // functions

  void receiveEffect(Effect E);
};

enum SpecOpClass {SABOTEUR = 0; ARCANIST = 1};


// draft of SpecOp as unit instead of as resource
class SpecOp : MovableEntity {
  // variables
  SpecOpClass class;
  char* mentor;

  // passive effects on friendly factions
  std::list <Effect> friendlyEffects;
  // passive effects on enemy factions
  std::list <Effect> enemyEffects;
  settlement currentHome;
  // functions

  SpecOpClass GetClass();
  void SetClass(SpecOpClass newClass);
  settlement GetHome();
  void SetHome(newSettlement);

};



// end of header guard
#endif
