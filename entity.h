#include "effect.h"
#include <list>
#include "map.h"

#ifndef ENTITY_H
#define ENTITY_H

class Entity {
  // variables
  char* name
  Node loc;
  list <Effect> effects;
  // functions
  void DoEffects();
  void AddEffect(Effect &newEffect);
  void RemoveEffect(Effect &toRemove);
  char* GetName();
  void SetName(char* newName);
  Node GetCurrentNode();
  void SetNode(Node newNode);
};

class MovableEntity : Entity {
  // variables
  list <&Node> nodeHistory;
  Node destination;
  Movement movement;
  // functions
  void SetDestination(Node newDestination);
  void SetMovement(Movement newMovement);
  list <&Node> GetLocationHistory();
  void AddToHistory(Node newHistory);
  void ClearHistory();
  // pathfinding operations
  static list <&Edge> findPath(Node A, Node B);
  list <&Edge> GetPath(list <&Node> nodes);
};

#endif
