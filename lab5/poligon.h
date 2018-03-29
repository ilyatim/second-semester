#ifndef POLIGON_H
#define POLIGON_H
#include "circle.h"
#include "figure.h"
#include <utility>

class Poligon:public Figure
{
public:
  typedef std::pair <int, int> Point;
  Point A;
  Point B;
  Point C;
  Point D;
  virtual int Check (Circle &circle) = 0;
};

#endif
