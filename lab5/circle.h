#ifndef CIRCLE_H
#define CIRCLE_H
#include "figure.h"
#include <tuple>
#include <iostream>

class Circle:public Figure
{
public:
  std::tuple <int, int, int> CIRCLE;
  void setCnRad();
};
#endif
