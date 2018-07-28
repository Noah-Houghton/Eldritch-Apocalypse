#include <list>

#ifndef ENCOUNTER_H
#define ENCOUNTER_H

class Action {
  // variables
  char* name;
  char* description;
  bool bIsNegative;
  list <Effect> effects;
  list <Effect> costs;
  // functions
  void performAction(Entity target);
};

class Event {
  // variables
  char* name;
  char* description;
  list <Action> responses;
  // functions

};

class Crisis : Event {
  list <Effect> noResponse;
  list <Action>
};


#endif
