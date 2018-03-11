#include <iostream>
#include <vector>
#include "func1.h"

using namespace std;

int funcProverki(vector <int> &arr, int razmer)
{
  bool flag = true;
  for (int i = 0; i < razmer; i++)
  {
    if(arr.at(i) < 0)
      flag = false;
  }
  if(flag)
    return true;
  else
    return false;
}
