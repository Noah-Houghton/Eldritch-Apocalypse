#ifndef ABILITY_H
#define ABILITY_H

#include "effect.h"
#include "entity.h"

class ActiveAbility {
	// variables

	std::list<Effect&> effects;
	// number of turns in between usages
	int cooldown;

	std::list<Entity&> validTargets;
	// effects which the ability causes to the entity which calls it, if any
	std::list<Effect&> selfEffects;

	// functions

};

class SettlementAbility : ActiveAbility {
	// variables

	std::list<Improvement&> prerequisites;

	// functions

	bool canPerform(Settlement& S);
};

#endif