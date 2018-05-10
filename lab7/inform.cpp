#include <iostream>
#include "inform.h"

using namespace std;

void inform()
{
  cout << endl;
  cout << "enter the operation what you want to perform(1 - 11)" << endl;
  cout << "1 to add vertex" << endl;
  cout << "2 to rename vertex" << endl;
  cout << "3 to print all vertex" << endl;
  cout << "4 to delete vertex" << endl;
  cout << "5 to add arc" << endl;
  cout << "6 to delete arc" << endl;
  cout << "7 to loading a graph from a text file" << endl;
  cout << "8 to saving a graph in a text file" << endl;
  cout << "9 to print a list of outgoing arcs" << endl;
  cout << "10 to print a list of ingoing arcs" << endl;
  cout << "something else to exit from program" << endl;
  cout << endl;
}
