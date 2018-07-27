// header guard

#ifndef MAP_H
#define MAP_H

struct location {
  int X;
  int Y;
  Terrain terrain;
};

enum Terrain {Road = 0; Mountain = 1};


class Map {
  // variables
  int Width;
  int Height;

  // functions


};


// end of header guard
#endif
