#include <iostream>
#include "check.h"

using namespace std;

void output(int a)
{
  if (a == 1)
    cout << "INSIDE";
  if (a == 2)
    cout << "TOUCH";
  if (a == 0)
    cout << "OUTSIDE";
}
