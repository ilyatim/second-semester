#include <iostream>
#include "poligon.h"

using namespace std;
Poligon::Poligon()
{
  cout << "+Respect(Poligon)" << endl;
}
Poligon::Poligon(Point a, Point b, Point c, Point d)
{
  cout << "set 4 coordinate" << endl;
  cout << "1st coordinate" << endl;
  cin >> a.first >> a.second;
  A = a;
  cout << "2nd coordinate" << endl;
  cin >> b.first >> b.second;
  B = b;
  cout << "3rd coordinate" << endl;
  cin >> c.first >> c.second;
  C = c;
  cout << "4th coordinate" << endl;
  cin >> d.first >> d.second;
  D = d;
  cout << "+Respect(Poligon)" << endl;
}
Poligon::Poligon(Point a, Point b, Point c)
{
  cout << "set 3 coordinate" << endl;
  cout << "1st coordinate" << endl;
  cin >> a.first >> a.second;
  A = a;
  cout << "2nd coordinate" << endl;
  cin >> b.first >> b.second;
  B = b;
  cout << "3rd coordinate" << endl;
  cin >> c.first >> c.second;
  C = c;
  cout << "+Respect(poligon)" << endl;
}
Poligon::~Poligon()
{
  cout << "-Respect(Poligon)" << endl;
}
