#ifndef ABILITY_H
#define ABILITY_H

#include "effect.h"
#include "entity.h"

class ActiveAbility {
	// variables
	std::list<Effect> effects;
	// number of turns in between usages
	int cooldown;

	// functions


};

class SettlementAbility : ActiveAbility {
	// variables

	std::list<Improvement&> prerequisites;

	// functions

	bool canPerform(Settlement& S);
};

class UnitAbility : ActiveAbility {
	// variables

	std::list<Entity&> validTargets;
	// effects which the ability causes to the unit, if any
	std::list<Effect&> selfEffects
	// functions

	bool canPerform(Unit&);
};

#endif