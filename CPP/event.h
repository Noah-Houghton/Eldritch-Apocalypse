#ifndef ENCOUNTER_H
#define ENCOUNTER_H
#include "effect.h"


class Action {
  // variables
  char* name;
  char* description;
  bool bIsNegative;
  std::list <Effect> effects;
  // functions
  void PerformAction(Entity &target);
  bool CanPerformAction(Entity &target);
};


class Event {
  // variables
  char* std::list;
  char* description;
  std::list <Action> responses;
  // functions

};

class Mission : Event {

};

class Crisis : Event {
  std::list <Effect> noResponse;
  std::list <Action> responses;
};


#endif
