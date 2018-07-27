// header guard

#ifndef RESOURCE_H
#define RESOURCE_H

enum ResourceType {WATER = 0, FOOD = 1};

class Resource {
  // variables
  int max;
  int amount;
  Effect zeroEffect;

  // functions
  void SetZeroEffect(Effect newEffect);
  Effect GetZeroEffect();
  int GetAmount();
  void SetAmount(int newAmount);
  ResourceType GetType();
  void SetType(ResourceType newType);
};

// end of header guard
#endif