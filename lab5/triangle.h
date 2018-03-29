#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "circle.h"
#include "poligon.h"

class Triangle:public Poligon
{
public:
  void setTrian();
  virtual int Check (Circle &circle);
};
#endif
