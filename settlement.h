// header guard

#ifndef SETTLEMENT_H
#define SETTLEMENT_H
#include "effect.h"
#include "resource.h"
#include "unit.h"
#include "entity.h"
#include <std::list>

enum SettlementType {CAMP = 0; COLLECTIVE = 1};

class Settlement : Entity {
  // variables
  std::list <Unit> units;
  std::list <Effect> effects;
  std::list <Reputation> reputation;
  std::list <Resource> resources;
  std::list <Improvement> improvements;
  SettlementType type;

  // functions
  std::list <int> CalculateEffects(Settlement S);
  void DoEffects();
};

// end of header guard
#endif
