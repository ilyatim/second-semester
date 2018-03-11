#include <iostream>
#include <vector>
#include "func1.h"
using namespace std;

int main()
    {
    int arraysize;
    cout << "array size"<<"\n";
    cin >> arraysize;
    vector <int> array;
    for (int i = 0; i < arraysize; i++)
    {
        int element;
        cout<<"enter a number in the array"<<"\n"<<"array element"<<" "<<i + 1<<"=";
        cin>>element;
        array.push_back(element);
    }
    bool answer = funcProverki(array, arraysize);

    cout << (answer ? "yes" : "no") << "\n";

    return 0;
    }
