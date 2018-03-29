#include <iostream>
#include <tuple>
#include <cstring>
#include <cmath>
using namespace std;

class Figure
{

};

class Circle:public Figure
{
public:
  tuple <int, int, int> CIRCLE;
  void setCnRad()
  {
    cout << "enter the circle center coordinate and his radius" << endl;
    cin >> get <0> (CIRCLE);
    cin >> get <1> (CIRCLE);
    cin >> get <2> (CIRCLE);
  }
};

class Poligon:public Figure
{
public:
  typedef pair <int, int> Point;
  Point A;
  Point B;
  Point C;
  Point D;
  virtual int Check (Circle &circle) = 0;
};

class Triangle:public Poligon
{
public:
  void setTrian()
  {
    cout << "set 3 coordinate" << endl;
    cout << "1st coordinate" << endl;
    cin >> A.first >> A.second;
    cout << "2nd coordinate" << endl;
    cin >> B.first >> B.second;
    cout << "3rd coordinate" << endl;
    cin >> C.first >> C.second;
  }
  virtual int Check (Circle &circle)
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
};

class Quadrangle:public Poligon
{
public:
  void setQuaran()
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
  }
  int Check (Circle &circle)
  {
    if (pow((A.first - get<0>(circle.CIRCLE)), 2) + pow((A.second - get<1>(circle.CIRCLE)), 2) < pow(get<2>(circle.CIRCLE), 2) &&
    pow((B.first - get<0>(circle.CIRCLE)), 2) + pow((B.second - get<1>(circle.CIRCLE)), 2) < pow(get<2>(circle.CIRCLE), 2) &&
    pow((C.first - get<0>(circle.CIRCLE)), 2) + pow((C.second - get<1>(circle.CIRCLE)), 2) < pow(get<2>(circle.CIRCLE), 2) &&
    pow((D.first - get<0>(circle.CIRCLE)), 2) + pow((D.second - get<1>(circle.CIRCLE)), 2) < pow(get<2>(circle.CIRCLE), 2))
    {
      return 1;
    }
    else if (pow((A.first - get<0>(circle.CIRCLE)), 2) + pow((A.second - get<1>(circle.CIRCLE)), 2) == pow(get<2>(circle.CIRCLE), 2) &&
    pow((B.first - get<0>(circle.CIRCLE)), 2) + pow((B.second - get<1>(circle.CIRCLE)), 2) == pow(get<2>(circle.CIRCLE), 2) &&
    pow((C.first - get<0>(circle.CIRCLE)), 2) + pow((C.second - get<1>(circle.CIRCLE)), 2) == pow(get<2>(circle.CIRCLE), 2) &&
    pow((D.first - get<0>(circle.CIRCLE)), 2) + pow((D.second - get<1>(circle.CIRCLE)), 2) == pow(get<2>(circle.CIRCLE), 2))
    {
      return 2;
    }
    else
      return 0;
  }
};

int Check (Circle &circle, Poligon &trian)
{
  return trian.Check(circle);
}

void output(int a)
{
  if (a == 1)
    cout << "INSIDE";
  if (a == 2)
    cout << "TOUCH";
  if (a == 0)
    cout << "OUTSIDE";
}

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
