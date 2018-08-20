// header guard

#ifndef MAP_H
#define MAP_H
#include "effect.h"
#include "entity.h"
#include "settlement.h"
#include "terrain.h"

// predefining so that we can give Edges Nodes & vice-versa
class Edge;

class Node {
  int X;
  int Y;
  std::list<Entity&> occupants;
  int capacity;
  std::list <const Edge&> edges;
  NodeTerrain terrain;
  // function
  std::pair <int, int> GetLocation();
  std::list <Entity&> GetOccupants();
  std::list <Edge&> GetEdges();
};

class Edge {
  const Node& node1;
  const Node& node2;
  EdgeTerrain terrain;
};

class Map {
  // variables
  int width;
  int height;
  std::list <Settlement> settlements;
  // functions


};


// end of header guard
#endif
