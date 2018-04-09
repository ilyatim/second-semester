#include <iostream>
#include <tuple>
#include <cstring>
#include <cmath>
#include "poligon.h"
#include "figure.h"
#include "circle.h"
#include "triangle.h"
#include "quadrangle.h"
#include "check.h"
#include "output.h"

using namespace std;


int main()
{
  Point A;
  Point B;
  Point C;
  Point D;
  cout << "enter the circle center coordinate and his radius" << endl;
  int PointCircle1;
  int PointCircle2;
  int PointCircle3;
  cin >> PointCircle1 >> PointCircle2 >> PointCircle3;
  Circle *circle = new Circle(PointCircle1, PointCircle2, PointCircle3);
  cout << "select your figure(Quad(1) or trian(2)) " << endl;
  string choice;
  cin >> choice;
  if (choice == "q" || choice == "Quad" || choice == "1")
  {
    cout << "set 4 coordinate" << endl;
    cout << "1st coordinate" << endl;
    cin >> A.first >> A.second;
    cout << "2nd coordinate" << endl;
    cin >> B.first >> B.second;
    cout << "3rd coordinate" << endl;
    cin >> C.first >> C.second;
    cout << "4th coordinate" << endl;
    cin >> D.first >> D.second;
    Quadrangle *quadr = new Quadrangle(A, B, C, D);
    cout << endl;
    Quadrangle *quadr2 = new Quadrangle(*quadr);
    cout << endl;
    Circle *circle2 = new Circle(*circle);
    cout << endl;
    output(check(*circle2, *quadr2));
    delete quadr;
    delete quadr2;
    delete circle;
    delete circle2;
  }
  else if (choice == "t" || choice == "Trian" || choice == "2")
  {
    cout << "set 3 coordinate" << endl;
    cout << "1st coordinate" << endl;
    cin >> A.first >> A.second;
    cout << "2nd coordinate" << endl;
    cin >> B.first >> B.second;
    cout << "3rd coordinate" << endl;
    cin >> C.first >> C.second;
    Triangle *trian = new Triangle(A, B, C);
    cout << endl;
    Triangle *trian2 = new Triangle(*trian);
    cout << endl;
    Circle *circle2 = new Circle(*circle);
    cout << endl;
    output(check(*circle, *trian2));
    delete trian;
    delete trian2;
    delete circle;
    delete circle2;
  }
  else
    cout << "wrong figure";
  return 0;
}
