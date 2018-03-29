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
  cout << "select your figure(Quad(1) or trian(2)) " << endl;
  string choice;
  cin >> choice;
  if (choice == "q" || choice == "Quad" || choice == "1")
  {
    Circle circle;
    circle.setCnRad();
    Quadrangle quar;
    quar.setQuaran();
    output(Check(circle, quar));
  }
  else if(choice == "t" || choice == "Trian" || choice == "2")
  {

    Circle circle;
    circle.setCnRad();
    Triangle trian;
    trian.setTrian();
    output(Check(circle, trian));
  }
  else
    cout << "wrong figure";
  return 0;
}
