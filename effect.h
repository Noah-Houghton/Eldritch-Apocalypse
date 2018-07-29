#include "settlement.h"
// header guard

#ifndef EFFECT_H
#define EFFECT_H

class Effect {
  // variables
  bool bIsStackable;
  char* name;
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
  list <Resource> cost;
  // functions
  void SetCost(list <Resource> newCost);
  bool bCanAfford(Entity &E);
  list <Resource> DisplayCost();
};

class MovementCost : Cost {

};


// end of header guard
#endif
