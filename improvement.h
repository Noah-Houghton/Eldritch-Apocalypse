#include "effect.h"
#include "resource.h"
#include <list>
// header guard

#ifndef IMPROVEMENT_H
#define IMRPROVEMENT_H

class Upgrade {
  // variables
  char* name;
  list <Effect> effects;
  list <Cost> costs;
  int timeToBuild;
  char* flavorText;
  char* tierDescription;
  // functions
  bool canBuild(const Settlement);
};

class Improvement {
  // variables
  list <Upgrade> upgrades;
  Tier currentTier;
  bool constructed;
  bool bIsMaxLevel;
  bool active;
  // functions
  void ProcessEffects();
  char* DescribeEffects();
  void Upgrade();
};


// end of header guard
#endif
