#ifndef POLIGON_H
#define POLIGON_H
#include <utility>
#include "circle.h"
#include "figure.h"

class Poligon: public Figure
{
public:
  typedef std::pair <int, int> Point;
  Point A;
  Point B;
  Point C;
  Point D;
  virtual int check(Circle &circle) = 0;
};

#endif
