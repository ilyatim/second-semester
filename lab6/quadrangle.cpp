#include <iostream>
#include <cmath>
#include <utility>
#include "quadrangle.h"
using namespace std;

Quadrangle::Quadrangle()
{
  cout << "+Respect(Quadrangle)" << endl;
}
Quadrangle::Quadrangle(Point a, Point b, Point c, Point d):Poligon(a,b,c,d)
{
  cout << "+Respect(Quadrangle)" << endl;
}

int Quadrangle::check(Circle &circle)
{
  int a_fir = pow((A.first - get<0>(circle.pCircle)), 2);
  int a_sec = pow((A.second - get<1>(circle.pCircle)), 2);
  int b_fir = pow((B.first - get<0>(circle.pCircle)), 2);
  int b_sec = pow((B.second - get<1>(circle.pCircle)), 2);
  int c_fir = pow((C.first - get<0>(circle.pCircle)), 2);
  int c_sec = pow((C.second - get<1>(circle.pCircle)), 2);
  int d_fir = pow((D.first - get<0>(circle.pCircle)), 2);
  int d_sec = pow((D.second - get<1>(circle.pCircle)), 2);
  int R = pow(get<2>(circle.pCircle), 2);

  if ((a_fir + a_sec < R) && (b_fir + b_sec < R) && (c_fir + c_sec < R) && (d_fir + d_sec < R))
    return 1;
  else if ((a_fir + a_sec == R) && (b_fir + b_sec == R) && (c_fir + c_sec == R) && (d_fir + d_sec == R))
    return 2;
  else
    return 0;
}
Quadrangle::~Quadrangle()
{
  cout << "-Respect(Quadrangle)" << endl;
}
