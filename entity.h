#ifndef ENTITY_H
#define ENTITY_H
#include "effect.h"
#include "map.h"
#include <list>

class Entity {
  // variables

  char* name;
  Node location;
  std::list <Effect> effects;
  // functions

  void ProcessEffects();
  void AddEffect(Effect &newEffect);
  void RemoveEffect(Effect &toRemove);
  char* GetName();
  void SetName (char* newName);
  Node GetCurrentNode();
  void SetNode(Node newNode);
  // default constructor
  Entity(char* name, Node location, std::list<Effect> startingEffects);
};

// at a high level, the role of the unit
enum UnitType { Army = 0, Economic = 1, Diplomacy = 2 };

enum Size { Small = 0, Medium = 1, Large = 2, Giant = 3 };

class MovableEntity : Entity {
  // variables

  std::list <Node&> nodeHistory;
  Movement movement;
  Size size;
  int power;
  // passive effects on friendly factions
  std::list <Effect> friendlyEffects;
  // passive effects on enemy factions
  std::list <Effect> enemyEffects;
  UnitType type;
  // active abilities, if any
  std::list<UnitAbility> abilities;
  bool bIsHidden;

  // functions

  void SetDestination(Node newDestination);
  void SetMovement(Movement newMovement);
  std::list<Node&> GetLocationHistory();
  void AddToHistory(Node newHistory);
  void ClearHistory();

  // constructor

  MovableEntity(char* name, Node location, std::list<Effect> startingEffects, Movement move, Size size, int power, std::list <Effect> friendlyFX, std::list <Effect> enemyFX, UnitType type, std::list <UnitAbility> abilities, bool bIsHidden);

  // pathfinding operations

  static std::list <Edge&> findPath(Node A, Node B);
  std::list <Edge&> GetPath(std::list <Node&> nodes);
};

#endif
