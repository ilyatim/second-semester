#include <vector>
#include <iostream>
using namespace std;

int cycleShift(vector<int> &arr, int arraysize , int step) //function for cyclic shift
{
  int i,j,tmp;
  if (step < 0)     //check for shift
  {
    step=abs(step);      //if the number is positive then shift to right, otherwise shift to the left
    for(i = 0; i < step; i++)
    {
      for(j = 0; j < arraysize - 1; j++)
      {
        tmp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = tmp;
      }
    }
  }
  else
  {
    step=abs(step);
    for(i = 0; i < step; i++)
    {
      for(j = arraysize - 1; j > 0; j--)
      {
        tmp = arr[j];
        arr[j] = arr[j - 1];
        arr[j - 1] = tmp;
      }
    }
  }
  for(auto it = arr.begin(); it != arr.end(); it++)   //the output of the array to the screen
    cout << *it << " ";
}
int main()
{
  int n;
  cout << "array size" << endl;
  cin >> n;   //array size
  vector <int> arr;   //creating a dynamic array
  for(int i = 0 ;i < n; i++)
  {                         //fill the array
    int number;
    cout<<"enter a number in the array"<<"\n"<<"array element"<<" "<<i+1<<"=";
    cin>>number;
    arr.push_back(number);
  }
  int choice;
  cout << "select the type of payment(1,2 or 3)" << endl;
  cin >> choice;                                 //the output of the array on the screen
  switch (choice)
  {
    case 1:
      for(vector<int>::iterator it = arr.begin(); it != arr.end(); it++)
      cout<< *it << " ";
      break;
    case 2:
      for(auto it = arr.begin(); it != arr.end(); it++)
      cout << *it << " ";
      break;
    case 3:
      for(auto it:arr)
      cout << it << " ";
      break;
  }
  cout << "\n" << "step shifting=";
  int sizestep;
  cin >> sizestep;                              //the number by which you want to move
  cycleShift(arr,n,sizestep);                 //function for cyclic shift
  return 0;
}
