#include "IntList.h"

IntList::IntList() : Items(std::vector<int>(SIZE, 0)), arraySize(SIZE)
{
    numItems = Items.size();
}
IntList::IntList(const std::vector<int> &list) : Items(list), arraySize(SIZE)
{
    numItems = Items.size();
}

void IntList::AddToEnd(int k)
{
    Items.push_back(k);
    numItems++;
}

void IntList::Print()
{
    for (const int val : Items)
    {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}

void IntList::Length() const
{
    std::cout << numItems;
}