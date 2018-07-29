#ifndef ENCOUNTER_H
#define ENCOUNTER_H
#include <list>


class Action {
  // variables
  char* std::list;
  char* description;
  bool bIsNegative;
  list <Effect> effects;
  list <Cost> costs;
  // functions
  void PerformAction(Entity &target);
  bool CanPerformAction(Entity &target);
};


class Event {
  // variables
  char* std::list;
  char* description;
  list <Action> responses;
  // functions

};

class Crisis : Event {
  list <Effect> noResponse;
  list <Action> responses;
};


#endif
