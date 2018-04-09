#ifndef CIRCLE_H
#define CIRCLE_H
#include <tuple>
#include <iostream>
#include "figure.h"

class Circle: public Figure
{
public:
  std::tuple <int, int, int> pCircle;
  Circle();
  Circle(int, int, int);
  Circle(const Circle &other);
  virtual ~Circle();
};
#endif

