#include <iostream>

using namespace std;

int main()
{
  int razmer;
  cout << "array size" << endl;
  cin >> razmer;
  int Mass[razmer];
  int summa = [Mass]()
  {
    int sum = 0;
    for (int i = 0; i < razmer; i++)
    {
      sum = sum + Mass[i]
    }
    return sum;
  }
  cout << "the sum of all array elements" << endl;
  cout << summa;
  return 0;
}
