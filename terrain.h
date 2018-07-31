#ifndef TERRAIN_H
#define TERRAIN_H
#include "effect.h"
#include "entity.h"

class Terrain {
	std::list <Effect> effects;
	MovementCost movementCost;
	// out of 100, chance that the event occurs
	int chanceToOccur;
private:
	// unit improvements may affect chanceToOccur, perform that calculation here
	bool EffectOccurs(Entity &E, int probabilitySeed);
};

class NodeTerrain {
	// variables	
	
	// functions

	void OnArrival(&Entity);
};

class EdgeTerrain {
	// variables

	bIsDifficult;
	
	// functions

	void OnPass(&Entity);
};

#endif