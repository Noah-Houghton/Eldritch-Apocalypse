#include "effect.h"
#include <list>
#include "map.h"

#ifndef ENTITY_H
#define ENTITY_H

class Entity {
  // variables
  char* name
  location loc;
  list <Effect> effects;
  // functions
  void DoEffects();
  void AddEffect(Effect &newEffect);
  void RemoveEffect(Effect &toRemove);
  char* GetName();
  void SetName(char* newName);
  location GetLocation();
  void SetLocation(location newLocation);
};

class MovableEntity : Entity {
  // variables
  list <location> locationHistory;
  location destination;
  int speed;
  // functions
  void SetDestination(location newDestination);
  void SetSpeed(int newSpeed);
  int GetSpeed();
  list <location> GetLocationHistory();
  void AddToHistory(location newHistory);
  void ClearHistory();
};

#endif
