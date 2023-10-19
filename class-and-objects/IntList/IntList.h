#include <iostream>
#include <vector>

class IntList
{
public:
    IntList(); // constructor; initialize the list to be empty
    IntList(const std::vector<int> &list);
    void AddToEnd(int k); // add k to the end of the list
    void Print();         // const; print the list to output
    void Length() const;

private:
    static const int SIZE = 10; // initial size of the array
    std::vector<int> Items;     // items will point to the dynamically allocated array
    int numItems;               // number of items currently in the list
    int arraySize;              // the current size of the array
};