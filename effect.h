// header guard

#ifndef EFFECT_H
#define EFFECT_H

#include "settlement.h"
#include "entity.h"
#include "resource.h"
#include <list>

class Cost {
	// variables
	// list of resource objects denoting type and amount of resource needed to perform action
	std::list <Resource> cost;
	// functions

	void SetCost(std::list <Resource> newCost);
	bool bCanAfford(Entity &E);
	std::list <Resource> DisplayCost();
};

class Effect {
  // variables

  bool bIsStackable;
  char* name;
  Entity& target;
  Cost cost;

  // functions

  void Effect(Entity &E);
};

class Reputation : Effect {
  // functions

  bool remainsValid(const Entity &E);
};

class SemipermanentEffect : Effect {
  private:
    // functions

    bool IsSatisifed(const Entity &E);
};

class TempEffect : Effect {
  private:
     int duration;
};


// end of header guard
#endif
