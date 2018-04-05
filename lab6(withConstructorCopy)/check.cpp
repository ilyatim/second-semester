#include <iostream>
#include "check.h"

using namespace std;

int check(Circle &circle, Poligon &poligon)
{
  return poligon.check(circle);
}
