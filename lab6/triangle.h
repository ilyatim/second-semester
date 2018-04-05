#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "circle.h"
#include "poligon.h"

class Triangle: public Poligon
{
public:
  Triangle();
  Triangle(Point, Point, Point);
  virtual int check(Circle &circle);
  virtual ~Triangle();
};
#endif
