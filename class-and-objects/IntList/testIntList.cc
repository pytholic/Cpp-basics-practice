#include "IntList.h"
#include <iostream>

using namespace std;

int main()
{
    auto Items = vector<int>{10, 12, 23, 1, 2};
    IntList L(Items);

    cout << "Before adding elements: " << endl;
    L.Print();
    L.Length();
    cout << endl;

    cout << "Adding elements to the list." << endl;
    L.AddToEnd(5);
    L.AddToEnd(89);

    cout << "\nAfter adding elements: " << endl;
    L.Print();
    L.Length();
}