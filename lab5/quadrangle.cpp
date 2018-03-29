#include <iostream>
#include <cmath>
#include <utility>
#include "quadrangle.h"
using namespace std;

void Quadrangle::setQuaran()
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

int Quadrangle::Check (Circle &circle)
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
