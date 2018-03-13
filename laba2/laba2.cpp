#include <iostream>
#include <vector>

using namespace std;

template <class T, class S>  //create a template
S func(vector <T> &Array, T (*function)(T, S), S start)  //a function that calls an anonymous function to count the sum of the array numbers
{
    S R = start;
    for (int i = 1; i < Array.size(); i++)
        R=function(Array[i], R);
    return R;
}

int main()
{
  int size;
  cout << "array size" << endl;
  cin >> size;
  vector <int> Mass;   // creating a dynamic array
  for(int i = 0; i < size; i++)   //fill the array
  {
    int element;
    cout << "enter a number in the array" << "\n" << "array element" << " " << i+1 << " = ";
    cin>>element;
    Mass.push_back(element);
  }
  int (*summa)(int , int) = [](int a, int b)  //creating an anonymous function that returns the sum of numbers
  {
   return a+b;
  };
  cout << "the sum of the numbers in the array = ";
  cout << func(Mass, summa, Mass[0]) << endl;
  return 0;
}
