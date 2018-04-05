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
  tuple <int, int, int> PointCircle;
  Point A;
  Point B;
  Point C;
  Point D;
  cout << "select your figure(Quad(1) or trian(2)) " << endl;
  string choice;
  cin >> choice;
  if (choice == "q" || choice == "Quad" || choice == "1")
  {
    Circle *circle = new Circle(PointCircle);
    Quadrangle *quadr = new Quadrangle(A, B, C, D);
    cout << endl;
    Quadrangle *quadr2 = new Quadrangle(*quadr);
    cout << endl;
    output(check(*circle, *quadr2));
    delete quadr;
    delete quadr2;
    delete circle;
  }
  else if (choice == "t" || choice == "Trian" || choice == "2")
  {

    Circle *circle = new Circle(PointCircle);
    Triangle *trian = new Triangle(A, B, C);
    cout << endl;
    Triangle *trian2 = new Triangle(*trian);
    cout << endl;
    output(check(*circle, *trian2));
    delete trian;
    delete trian2;
    delete circle;
  }
  else
    cout << "wrong figure";
  return 0;
}
