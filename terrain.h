#ifndef TERRAIN_H
#define TERRAIN_H
#include "effect.h"
#include "entity.h"

// defines types of terrain and associated properties

class Terrain {
	std::list <Effect> effects;
	MovementCost movementCost;
	// out of 100, chance that the event occurs
	int chanceToOccur;
private:
	// unit improvements may affect chanceToOccur, perform that calculation here
	bool EffectOccurs(Entity &E, int probabilitySeed);
};

class NodeTerrain : Terrain {
	// variables	
	
	// functions

	void OnArrival(&Entity);
};

class EdgeTerrain : Terrain {
	// variables

	bIsImpassible;
	bAirOnly;
	bWaterOnly;
	bLandOnly;
	
	// functions

	void OnPass(&Entity);
};

#endif