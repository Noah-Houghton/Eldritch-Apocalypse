// header guard

#ifndef SETTLEMENT_H
#define SETTLEMENT_H
#include "effect.h"
#include "resource.h"
#include "unit.h"
#include "entity.h"
#include "improvement.h"
#include "player.h"

enum SettlementType {CAMP = 0; COLLECTIVE = 1};

class Settlement : Entity {
  // variables

  std::list <SettlementAbility> abilities;
  std::list <Unit> units;
  std::list <Effect> effects;
  std::list <Reputation> reputation;
  std::list <ResourceContainer> resources;
  std::list <Improvement> improvements;
  SettlementType type;
  Player controllingPlayer;

  // functions

  std::list <int> CalculateEffects(Settlement S);
  void DoEffects();
};

// end of header guard
#endif
