#include <iostream>
#include <tuple>
#include <cmath>
using namespace std;

void FunCheck(pair <int, int> MyPair, tuple <int, int, int> Circle2, int *link)  //a function that checks if a point falls into a circle
{
  if (pow((MyPair.first - get<0>(Circle2)), 2) + pow((MyPair.second - get<1>(Circle2)), 2) < pow(get<2>(Circle2), 2))
    *link = *link + 2;  //if point is mired in a circle, add 2
  else if ((pow((MyPair.first - get<0>(Circle2)), 2) + pow((MyPair.second - get<1>(Circle2)), 2) == pow(get<2>(Circle2), 2)))
    *link = *link + 3;  //if the point touch the circle, add 3
  else
    *link = 0;  // if the point is outside the circle, reset
}

int main()
{
  typedef pair <int , int> MPair;  //with structure pair create 4 points
  MPair point1;
  MPair point2;
  MPair point3;
  MPair point4;
  tuple <int, int, int> Circle;

  int link = 0;  // create a variable that will count how many times the point falls into the circle or touches it

  cout << "please enter the coordinates of the circle center and it's radius"
       << endl;

  cin >> get<0>(Circle) >> get<1>(Circle) >> get<2>(Circle);

  cout << "enter a shape"
       <<"\n"
       << "triangle(1) or rectangle(2)"
       << endl;

  int figur;
  cin >> figur; //choose a shape (1-triangle, 2-rectangle)

  if(figur == 1)
  {
    cout << "enter the first coordinate"
         << endl;
    cin >> point1.first >> point1.second;

    cout << "enter the second coordinate"
         << endl;
    cin >> point2.first >> point2.second;

    cout << "enter the third coordinate"
         << endl;
    cin >> point3.first >> point3.second;

    FunCheck(point1, Circle, &link);  //check all points in the function
    FunCheck(point2, Circle, &link);
    FunCheck(point3, Circle, &link);
    if ((link < 9) && (link > 5))
      cout << "this figure belongs to the circle(INSIDE)" << endl;
    else if (link == 9)
      cout << "this figure lies on the circle(TOUCH)" << endl;
    else
      cout << "this figure does not belong to the circle(OUTSIDE)" << endl;
  }
  else if(figur == 2)
  {
    cout << "enter the first coordinate"
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

    FunCheck(point1, Circle, &link);
    FunCheck(point2, Circle, &link);
    FunCheck(point3, Circle, &link);
    FunCheck(point4, Circle, &link);
    if ((link < 12) && (link > 7))
      cout << "this figure belongs to the circle(INSIDE)" << endl;
    else if (link == 12)
      cout << "this figure lies on the circle(TOUCH)" << endl;
    else
      cout << "this figure does not belong to the circle(OUTSIDE)" << endl;
  }
  else
    cout << "the wrong figure";
  return 0;
}
