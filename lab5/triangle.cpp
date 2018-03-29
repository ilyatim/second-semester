#include "triangle.h"
#include <iostream>
#include <cmath>

using namespace std;

void Triangle::setTrian()
{
  cout << "set 3 coordinate" << endl;
  cout << "1st coordinate" << endl;
  cin >> A.first >> A.second;
  cout << "2nd coordinate" << endl;
  cin >> B.first >> B.second;
  cout << "3rd coordinate" << endl;
  cin >> C.first >> C.second;
}
int Triangle::Check (Circle &circle)
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
