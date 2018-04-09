#include <iostream>
#include "poligon.h"

using namespace std;
Poligon::Poligon()
{
  cout << "+Respect(Poligon)" << endl;
}
Poligon::Poligon(Point a, Point b, Point c, Point d)
{
  A = a;
  B = b;
  C = c;
  D = d;
  cout << "+Respect(Poligon)" << endl;
}
Poligon::Poligon(Point a, Point b, Point c)
{
  A = a;
  B = b;
  C = c;
  cout << "+Respect(poligon)" << endl;
}
Poligon::~Poligon()
{
  cout << "-Respect(Poligon)" << endl;
}
