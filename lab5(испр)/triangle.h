#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "circle.h"
#include "poligon.h"

class Triangle: public Poligon
{
public:
  void readTrian();
  virtual int check(Circle &circle);
};
#endif
