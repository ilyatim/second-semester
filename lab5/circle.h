#ifndef CIRCLE_H
#define CIRCLE_H
#include "figure.h"
#include <tuple>

class Circle:public Figure
{
public:
  tuple <int, int, int> CIRCLE;
  void setCnRad();
};
#endif
