// header guard

#ifndef EFFECT_H
#define EFFECT_H

#include "settlement.h"
#include "entity.h"
#include <list>

class Effect {
  // variables

  bool bIsStackable;
  char* name;
  Entity& target;

  // functions

  void Effect(Entity &E);
};

class Reputation : Effect {
  // functions

  bool remainsValid(const Entity &E);
}

class SemipermanentEffect : Effect {
  private:
    // functions

    bool IsSatisifed(const Entity &E);
};

class TempEffect : Effect {
  private:
     int duration;
};

class Cost : Effect {
  // variables

  std::list <Resource> cost;
  // functions

  void SetCost(std::list <Resource> newCost);
  bool bCanAfford(Entity &E);
  std::list <Resource> DisplayCost();
};

class MovementCost : Cost {

};


// end of header guard
#endif
