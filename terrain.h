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
	// functions
	void OnArrival(&Entity);
};

class EdgeTerrain {
	// functions
	void OnPass(&Entity);
};

#endif