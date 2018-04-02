#ifndef CIRCLE_H
#define CIRCLE_H
#include <tuple>
#include <iostream>
#include "figure.h"

class Circle: public Figure
{
public:
  std::tuple <int, int, int> pCircle;
  void readCnRad();
};
#endif
