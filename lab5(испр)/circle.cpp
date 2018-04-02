#include <iostream>
#include "circle.h"

void Circle::readCnRad()
{
  std::cout << "enter the circle center coordinate and his radius" << std::endl;
  std::cin >> std::get <0> (pCircle);
  std::cin >> std::get <1> (pCircle);
  std::cin >> std::get <2> (pCircle);
}
