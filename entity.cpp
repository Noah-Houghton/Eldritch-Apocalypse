#include "entity.h"

Entity::Entity(char* n, Node loc, std::list<Effect> s)
{
	name = n;
	location = loc;
	effects = s;
}

MovableEntity::MovableEntity(char* n, Node loc, std::list<Effect> s, MovementType move, bool ignoreTerrain, bool amphib) : Entity(n, loc, s)
{
	// param inputs
	name = n;
	movement = move;
	bIgnoresTerrain = ignoreTerrain;
	bIsAmphibious = amphib;
}