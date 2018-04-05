#ifndef QUADRANGLE_H
#define QUADRANGLE_H
#include "poligon.h"
#include "circle.h"

class Quadrangle: public Poligon
{
public:
  Quadrangle();
  Quadrangle(Point, Point, Point, Point);
  virtual int check(Circle &circle);
  virtual ~Quadrangle();
};

#endif
