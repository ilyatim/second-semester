#include <iostream>
#include <tuple>
#include "circle.h"

using namespace std;
Circle::Circle()
{
  cout << "+Respect(Circle)" << endl;
}

Circle::Circle(int point1, int point2, int point3)
{
  auto MyCircle = make_tuple(point1, point2, point3);
  pCircle = MyCircle;
  cout << "+Respect(Circle)" << endl;
}
Circle::Circle(const Circle &other)
{
    pCircle = other.pCircle;
    std::cout << "=Respect(Circle)" << std::endl;
}
Circle::~Circle()
{
  cout << "-Respect(Circle)" << endl;
}
