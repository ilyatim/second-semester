#include "triangle.h"
#include <iostream>
#include <cmath>
void Triangle::setTrian()
{
  std::cout << "set 3 coordinate" << std::endl;
  std::cout << "1st coordinate" << std::endl;
  std::cin >> A.first >> A.second;
  std::cout << "2nd coordinate" << std::endl;
  std::cin >> B.first >> B.second;
  std::cout << "3rd coordinate" << std::endl;
  std::cin >> C.first >> C.second;
}
virtual int Triangle::Check (Circle &circle)
{
  if (pow((A.first - get<0>(circle.CIRCLE)), 2) + pow((A.second - get<1>(circle.CIRCLE)), 2) < pow(get<2>(circle.CIRCLE), 2) &&
  pow((B.first - get<0>(circle.CIRCLE)), 2) + pow((B.second - get<1>(circle.CIRCLE)), 2) < pow(get<2>(circle.CIRCLE), 2) &&
  pow((C.first - get<0>(circle.CIRCLE)), 2) + pow((C.second - get<1>(circle.CIRCLE)), 2) < pow(get<2>(circle.CIRCLE), 2))
  {
    return 1;
  }
  if (pow((A.first - get<0>(circle.CIRCLE)), 2) + pow((A.second - get<1>(circle.CIRCLE)), 2) == pow(get<2>(circle.CIRCLE), 2) &&
  pow((B.first - get<0>(circle.CIRCLE)), 2) + pow((B.second - get<1>(circle.CIRCLE)), 2) == pow(get<2>(circle.CIRCLE), 2) &&
  pow((C.first - get<0>(circle.CIRCLE)), 2) + pow((C.second - get<1>(circle.CIRCLE)), 2) == pow(get<2>(circle.CIRCLE), 2))
  {
    return 2;
  }
  else
    return 0;
}
