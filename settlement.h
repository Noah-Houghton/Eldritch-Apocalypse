#include "effect.h"
#include "resource.h"
#include "unit.h"
#include "entity.h"
#include <list>

// header guard

#ifndef SETTLEMENT_H
#define SETTLEMENT_H

enum SettlementType {CAMP = 0; COLLECTIVE = 1};

class Settlement : Entity {
  // variables
  list <Unit> units;
  list <Effect> effects;
  list <Resource> resources;
  list <Improvement> improvements;
  SettlementType type;

  // functions
  list <int> CalculateEffects(Settlement S);
  void DoEffects();
};

// end of header guard
#endif
