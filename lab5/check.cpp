#include <iostream>
#include "check.h"

using namespace std;

int Check (Circle &circle, Poligon &poligon)
{
  return poligon.Check(circle);
}
