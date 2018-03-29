#ifndef QUADRANGLE_H
#define QUADRANGLE_H
#include "poligon.h"
#include "circle.h"

class Quadrangle:public Poligon
{
public:
  void setQuaran();
  int Check (Circle &circle);
};

#endif
