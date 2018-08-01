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

	std::list<Resource> GetCost();
	void SetCost(std::list <Resource> newCost);
	bool CanAfford(Entity &E);
	bool bIsInstant;
};

class Effect {
  // variables

  bool bIsStackable;
  bool bIsInstant;
  char* name;

  // functions

};

class SingleTargetEffect : Effect {
	void Effect(Entity& E);
};

class MultiTargetEffect : Effect {
	void Effect(list<Entity&> E);
};

class CostlyEffect : Effect {
	Cost cost;
};

class SemipermanentEffect : Effect {
	// variables

	bool bRemove;
    
	// functions

	// while RemainsValid() returns true, do not remove this Effect
    bool RemainsValid(const Entity &E);
};

class TempEffect : Effect {
  private:
     int duration;
};


// end of header guard
#endif
