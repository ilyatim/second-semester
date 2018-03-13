#include <iostream>
#include <tuple>
#include <cmath>
#include <cstring>
using namespace std;


int FunCheckTriag (pair <int, int> pointA, pair <int, int> pointB, pair <int, int> pointC, tuple <int, int, int> Circle2) //a function that checks if a point falls into a circle
{
    if (pow((pointA.first - get<0>(Circle2)), 2) + pow((pointA.second - get<1>(Circle2)), 2) < pow(get<2>(Circle2), 2)
        &&
        pow((pointB.first - get<0>(Circle2)), 2) + pow((pointB.second - get<1>(Circle2)), 2) < pow(get<2>(Circle2), 2)
        &&
        pow((pointC.first - get<0>(Circle2)), 2) + pow((pointC.second - get<1>(Circle2)), 2) < pow(get<2>(Circle2), 2))

        return 1;  //if the figure falls into a circle, then return 1

    else if (pow((pointA.first - get<0>(Circle2)), 2) + pow((pointA.second - get<1>(Circle2)), 2) == pow(get<2>(Circle2), 2)
            &&
            pow((pointB.first - get<0>(Circle2)), 2) + pow((pointB.second - get<1>(Circle2)), 2) == pow(get<2>(Circle2), 2)
            &&
            pow((pointC.first - get<0>(Circle2)), 2) + pow((pointC.second - get<1>(Circle2)), 2) == pow(get<2>(Circle2), 2))

            return 2; //if the figure falls into a circle, then return 2

    else
        return 0; //if the figure does not fall into the circle return 0
}

int FunCheckRectang (pair <int, int> pointA, pair <int, int> pointB, pair <int, int> pointC, pair <int, int> pointD, tuple <int, int, int> Circle2)  //a function that checks if a point falls into a circle
{
    if (pow((pointA.first - get<0>(Circle2)), 2) + pow((pointA.second - get<1>(Circle2)), 2) < pow(get<2>(Circle2), 2)
        &&
        pow((pointB.first - get<0>(Circle2)), 2) + pow((pointB.second - get<1>(Circle2)), 2) < pow(get<2>(Circle2), 2)
        &&
        pow((pointC.first - get<0>(Circle2)), 2) + pow((pointC.second - get<1>(Circle2)), 2) < pow(get<2>(Circle2), 2)
        &&
        pow((pointD.first - get<0>(Circle2)), 2) + pow((pointD.second - get<1>(Circle2)), 2) < pow(get<2>(Circle2), 2))

        return 1;  //if the figure falls into a circle, then return 1

    else if (pow((pointA.first - get<0>(Circle2)), 2) + pow((pointA.second - get<1>(Circle2)), 2) == pow(get<2>(Circle2), 2)
             &&
             pow((pointB.first - get<0>(Circle2)), 2) + pow((pointB.second - get<1>(Circle2)), 2) == pow(get<2>(Circle2), 2)
             &&
             pow((pointC.first - get<0>(Circle2)), 2) + pow((pointC.second - get<1>(Circle2)), 2) == pow(get<2>(Circle2), 2)
             &&
             pow((pointD.first - get<0>(Circle2)), 2) + pow((pointD.second - get<1>(Circle2)), 2) == pow(get<2>(Circle2), 2))

            return 2;  //if the figure falls into a circle, then return 2

    else
        return 0;  //if the figure does not fall into the circle return 0
}

int main()
{
  typedef pair <int , int> MPair;  //with structure "pair" create 4 points
  MPair point1;
  MPair point2;
  MPair point3;
  MPair point4;
  tuple <int, int, int> Circle;  //create a structure "tuple" with a center of a circle and a radius

  cout << "please enter the coordinates of the circle center (first x, second y)"
       << endl;

  cin >> get<0>(Circle) >> get<1>(Circle);
  cout << "enter radius" << endl;
  cin >> get<2>(Circle);

  cout << "enter a shape"
       <<"\n"
       << "triangle(1 or t) or rectangle(2 or r)"
       << endl;

  string figur;
  int otvet;
  cin >> figur; //choose a shape (1-triangle, 2-rectangle)

  if (figur == "1" || figur == "t" || figur == "triangle")
  {
    cout << "enter the first coordinate"   //enter the coordinates of the shape in turn
         << endl;
    cin >> point1.first >> point1.second;

    cout << "enter the second coordinate"
         << endl;
    cin >> point2.first >> point2.second;

    cout << "enter the third coordinate"
         << endl;
    cin >> point3.first >> point3.second;

    otvet = FunCheckTriag(point1, point2, point3, Circle);  //check all points in the function
    if (otvet == 1)
      cout << "this figure belongs to the circle(INSIDE)"
           << endl;
    else if (otvet == 2)
      cout << "this figure lies on the circle(TOUCH)"
           << endl;
    else
      cout << "this figure does not belong to the circle(OUTSIDE)"
           << endl;
  }
  else if (figur == "2" || figur == "r" || figur == "rectangle")
  {
    cout << "enter the first coordinate"    //enter the coordinates of the shape in turn
         << endl;
    cin >> point1.first >> point1.second;

    cout << "enter the second coordinate"
         << endl;
    cin >> point2.first >> point2.second;

    cout << "enter the third coordinate"
         << endl;
    cin >> point3.first >> point3.second;

    cout << "enter the fourth coordinate"
         << endl;
    cin >> point4.first >> point4.second;

    otvet = FunCheckRectang(point1, point2, point3, point4, Circle);   //check all points in the function

    if (otvet == 1)
      cout << "this figure belongs to the circle(INSIDE)" << endl;
    else if (otvet == 2)
      cout << "this figure lies on the circle(TOUCH)" << endl;
    else
      cout << "this figure does not belong to the circle(OUTSIDE)" << endl;
  }
  else
    cout << "the wrong figure";
  return 0;
}