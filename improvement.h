#include "effect.h"
#include "resource.h"
#include <list>
// header guard

#ifndef IMPROVEMENT_H
#define IMPROVEMENT_H

enum ImprovementType {FARM = 0};

class Upgrade {
  // variables
  char* name;
  list <Effect> effects;
  list <Cost> costs;
  Faction faction;
  int timeToBuild;
  char* flavorText;
  char* tierDescription;
  bool bIsPresent;
  ImprovementType validType;
  // functions
  bool canBuild(const Settlement &S);
private:
  bool canReceiveUpgrade(const Improvement &I);
  bool canPay(const Resource &SettlementResources);
};

class Improvement {
  // variables
  char* flavorText;
  Faction faction;
  list <Upgrade> upgrades;
  ImprovementType type;
  Tier currentTier;
  bool constructed;
  bool bIsMaxLevel;
  bool bIsActive;
  // functions
  void ProcessEffects();
  char* DescribeEffects();
  void AddUpgrade(Upgrade &newUpgrade);
  void RemoveUpgrade(Upgrade &toRemove);
  void SetEffectActive(bool bIsActive);
  list <Upgrade> AvailableImprovements();
};


// end of header guard
#endif
