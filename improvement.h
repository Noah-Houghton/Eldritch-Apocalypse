#include "effect.h"
#include "resource.h"
#include <list>
// header guard

#ifndef IMPROVEMENT_H
#define IMRPROVEMENT_H

struct UpgradeCost {
  ResourceType type;
  int amount;
};

class Tier {
  char* name;
  list <Effect> effects;
  list <UpgradeCost> costs;
  int timeToBuild;
  bool maxLevel;
  char* flavorText;
  char* tierDescription;
};

class Improvement {
  // variables
  list <Tier> tiers;
  Tier currentTier;
  bool constructed;
  bool active;
  // functions
  void ProcessEffects();
  char* DescribeEffects();
};


// end of header guard
#endif
