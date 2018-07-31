#ifndef ENTITY_H
#define ENTITY_H
#include "effect.h"
#include "map.h"
#include <list>

class Entity {
  // variables

  char* name;
  Node loc;
  std::list <Effect> effects;
  // functions

  void DoEffects();
  void AddEffect(Effect &newEffect);
  void RemoveEffect(Effect &toRemove);
  char* GetName();
  void SetName (char* newName);
  Node GetCurrentNode();
  void SetNode(Node newNode);
};

// defines movement paradigm for movable entities
// land cannot go into water, water cannot go into air, air can pass all of them
enum Movement { Land = 0; Water = 1; Air = 2 };

class MovableEntity : Entity {
  // variables

  std::list <&Node> nodeHistory;
  Movement movementType;
  Node destination;
  Movement movement;
  bool bIgnoresTerrain;
  // determines whether this unit can move between land and water or not
  bool bIsAmphibious;

  // functions

  void SetDestination(Node newDestination);
  void SetMovement(Movement newMovement);
  std::list<Node&> GetLocationHistory();
  void AddToHistory(Node newHistory);
  void ClearHistory();

  // pathfinding operations

  static std::list <Edge&> findPath(Node A, Node B);
  std::list <&Edge> GetPath(std::list <Node&> nodes);
};

#endif
