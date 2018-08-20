// header guard

#ifndef RESOURCE_H
#define RESOURCE_H
#include "effect.h"

// Resources are defined at a high level and PBR to containers
// owned by individual settlements
class Resource {
  // variables

  int defaultMax;
  int defaultAmount;
  char* name;
  Effect zeroEffect;

  // functions

  void SetZeroEffect(Effect newEffect);
  Effect GetZeroEffect();

  // constructors

  // no zero or overflow effects
  Resource(int defMax, int defAm, char* n);
  
  Resource(int defMax, int defAm, char* n, Effect zeroEffect);

};

// ResourceContainers are owned by individual settlements and
// contain functions to manage the resource the container has
class ResourceContainer {
	// variables

	int max;
	int amount;
	Resource& r;

	// functions

	int GetAmount();
	void SetAmount(int newAmount);
	void SetMax(int newMax);


	// constructors
	// creates a ResourceContainer with amount a, maximum m, containing Resource resource
	ResourceContainer(int m, int a, Resource& resource);
};

// defines movement paradigm for movable entities
// land cannot go into water, water cannot go into air, air can pass all of them
enum MovementType { Land = 0, Water = 1, Amphibious = 2, Air = 3 };

class Movement : Resource {
	Node destination;
	MovementType type;
public:
	Movement(int defMax, int defAm, char* n, Effect zeroEffect, Node d, MovementType t);
};

// end of header guard
#endif
