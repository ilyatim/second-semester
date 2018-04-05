#include <iostream>
#include <cmath>
#include "triangle.h"

using namespace std;
Triangle::Triangle()
{
  cout << "+Respect(Triangle)" << endl;
}
Triangle::Triangle(Point a, Point b, Point c):Poligon(a, b, c)
{
  cout << "+Respect(Triangle)" << endl;
}
int Triangle::check(Circle &circle)
{
  int a_fir = pow((A.first - get<0>(circle.pCircle)), 2);
  int a_sec = pow((A.second - get<1>(circle.pCircle)), 2);
  int b_fir = pow((B.first - get<0>(circle.pCircle)), 2);
  int b_sec = pow((B.second - get<1>(circle.pCircle)), 2);
  int c_fir = pow((C.first - get<0>(circle.pCircle)), 2);
  int c_sec = pow((C.second - get<1>(circle.pCircle)), 2);
  int R = pow(get<2>(circle.pCircle), 2);

  if ((a_fir + a_sec < R) && (b_fir + b_sec < R) && (c_fir + c_sec < R))
    return 1;
  if ((a_fir + a_sec == R) && (b_fir + b_sec == R) && (c_fir + c_sec == R))
    return 2;
  else
    return 0;
}
Triangle::~Triangle()
{
  cout << "-Respect(Triangle)" << endl;
}
