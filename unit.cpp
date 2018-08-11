#include "unit.h"

Unit::Unit(char* n, Node loc, std::list<Effect> s, MovementType move, bool ignoreTerrain, bool amphib, SizeType size, int p, std::list<Effect> friendFX, std::list<Effect> enemyFX, UnitType t, std::list<UnitAbility> startingAbilities, bool hidden) : MovableEntity(n, loc, s, m, ignoreTerrain, amphib) {
	size = size;
	power = p;
	friendlyEffects = friendFX;
	enemyEffects = enemyFX;
	type = t;
	abilities = startingAbilities;
	bIsHidden = hidden;
}

SpecOp::SpecOp(char* n, Node loc, std::list<Effect> s, MovementType move, bool ignoreTerrain, bool amphib, int p, std::list<Effect> friendFX, std::list<Effect> enemyFX, UnitType t, std::list<UnitAbility> startingAbilities, bool hidden, SpecOpType st, char* m, Settlement& startHome) : Unit(n, loc, s, move, ignoreTerrain, amphib, p, friendFX, enemyFX, t, startingAbilities, hidden)
{
	specOpType = st;
	mentor = m;
	currentHome = startHome;
}