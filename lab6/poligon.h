#ifndef POLIGON_H
#define POLIGON_H
#include <utility>
#include "circle.h"
#include "figure.h"

typedef std::pair <int, int> Point;

class Poligon: public Figure
{
public:
  Point A;
  Point B;
  Point C;
  Point D;
  Poligon();
  Poligon(Point, Point, Point, Point);
  Poligon(Point, Point, Point);
  virtual int check(Circle &circle) = 0;
  virtual ~Poligon();
};

#endif
