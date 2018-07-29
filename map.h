// header guard

#ifndef MAP_H
#define MAP_H

class Terrain {
  list <Effect> effects;
  MovementCost movementCost;
  // functions
  void Effect(Entity &E);
  private:
    bool EffectOccurs(Entity &E, int probabilitySeed);
};

// predefining so that we can give Edges Nodes & vice-versa
class Edge;

class Node {
  int X;
  int Y;
  Entity <list> occupants;
  int capacity;
  list <Edge> edges;
  Terrain terrain;
  // function
  std::pair <int, int> GetLocation();
  list <&Entity> GetOccupants();
  list <&Edge> GetEdges();
};

class Edge {
  const Node node1;
  const Node node2;
  Terrain terrain;
};

class Map {
  // variables
  int width;
  int height;
  list <Settlement> settlements;
  // functions


};


// end of header guard
#endif
