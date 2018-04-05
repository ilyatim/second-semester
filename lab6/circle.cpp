#include <iostream>
#include "circle.h"

using namespace std;
Circle::Circle()
{
  cout << "+Respect(Circle)" << endl;
}

Circle::Circle(tuple <int, int, int> Circle)
{
  cout << "enter the circle center coordinate and his radius" << endl;
  cin >> get <0> (Circle);
  get<0>(pCircle) = get<0>(Circle);
  cin >> get <1> (Circle);
  get<1>(pCircle) = get<1>(Circle);
  cin >> get <2> (Circle);
  get<2>(pCircle) = get<2>(Circle);
  cout << "+Respect(Circle)" << endl;
}

Circle::~Circle()
{
  cout << "-Respect(Circle)" << endl;
}
