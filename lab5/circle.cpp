#include "circle.h"
#include <iostream>

void Circle::setCnRad()
{
  std::cout << "enter the circle center coordinate and his radius" << std::endl;
  std::cin >> std::get <0> (CIRCLE);
  std::cin >> std::get <1> (CIRCLE);
  std::cin >> std::get <2> (CIRCLE);
}
