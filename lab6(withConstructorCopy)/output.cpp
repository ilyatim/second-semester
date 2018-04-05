#include <iostream>
#include "check.h"

using namespace std;

void output(int a)
{
  if (a == 1)
    cout << "INSIDE" << endl;
  if (a == 2)
    cout << "TOUCH" << endl;
  if (a == 0)
    cout << "OUTSIDE" << endl;
}
