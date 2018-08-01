// header guard

#ifndef UNIT_H
#define UNIT_H

#include "effect.h"
#include "entity.h"
#include "settlement.h"
#include "ability.h"

enum UnitType {ARMY = 0; TRADERS = 1};

enum SizeType { Small = 0; Medium = 1; Large = 2; Giant = 3 };

class Unit : MovableEntity {
  // variables

  SizeType size;
  int power;
  // passive effects on friendly factions
  std::list <Effect> friendlyEffects;
  // passive effects on enemy factions
  std::list <Effect> enemyEffects;
  UnitType type;
  // active abilities, if any
  std::list<UnitAbility> abilities;
  bool bIsHidden;

  // functions

  void receiveEffect(Effect E);

  // constructor
  Unit(char* name, MovementType move, bool ignoreTerrain, bool amphib, SizeType size, int power, std::list<Effect> friendFX, std::list<Effect> enemyFX, UnitType type, std::list<UnitAbility> startingAbilities, bool hidden);
};

enum SpecOpType {SABOTEUR = 0; ARCANIST = 1};


// draft of SpecOp as unit instead of as resource
class SpecOp : Unit {
  // variables
  SpecOpType specOpType;
  char* mentor;

  Settlement& currentHome;
  // functions

  SpecOpClass GetClass();
  void SetClass(SpecOpClass newClass);
  settlement GetHome();
  void SetHome(newSettlement);

  // constructor
  SpecOp(char* n, Node loc, std::list<Effect> s, MovementType move, bool ignoreTerrain, bool amphib, int p, std::list<Effect> friendFX, std::list<Effect> enemyFX, UnitType t, std::list<UnitAbility> startingAbilities, bool hidden, SpecOpType st, char* m, Settlement& startHome);

};



// end of header guard
#endif
