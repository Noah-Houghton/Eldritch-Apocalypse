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
  Entity(char* entityName, Node entityLocation, std::list<Effect> startingEffects);
};

// at a high level, the role of the entity
enum EntityType { Military = 0, Economic = 1, Diplomacy = 2 };

enum Size { Small = 0, Medium = 1, Large = 2, Giant = 3, Massive = 4 };

struct Attributes {
	int attack;
	int defense;
};

// defines default abilities, type, effects, and power of a unit
class UnitClass {
	// variables

	char* name;
	EntityType type;
	// passive effects
	std::list <Effect> passiveEffects;
	// active abilities, if any
	std::list<ActiveAbility> abilities;
	Attributes attributes;

	// functions

	void AddAbility(ActiveAbility newAbility);
	void AddPassive(Effect newEffect);
public:
	UnitClass(char* name, EntityType type, std::list<Effect> passiveEffects, std::list<ActiveAbility> abilities, Attributes attr);
};

class MovableEntity : Entity {
  // variables

  std::list <Node&> nodeHistory;
  Movement movement;
  Size size;
  // for reference
  UnitClass& uClass;
  bool bIsHidden;

  // these are copied from uClass at construction

  EntityType type;
  // passive effects
  std::list <Effect> passiveEffects;
  // active abilities, if any
  std::list<ActiveAbility> abilities;
  Attributes attributes;

  // functions



  void SetDestination(Node newDestination);
  void SetMovement(Movement newMovement);
  std::list<Node&> GetLocationHistory();
  void AddToHistory(Node newHistory);
  void ClearHistory();

  // constructor

  MovableEntity(char* name, Node location, std::list<Effect> startingEffects, Movement move, Size size, int power, UnitClass& uClass, std::list <ActiveAbility> abilities, bool bIsHidden);

  // pathfinding operations

  static std::list <Edge&> findPath(Node A, Node B);
  std::list <Edge&> GetPath(std::list <Node&> nodes);
};

#endif
