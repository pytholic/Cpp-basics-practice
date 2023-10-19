/*
vector.cc, created by @python on 2023.10.19
Description: Expanding an array with vector.
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> dynamic_array;

    for (int i = 1; i <= 10; i++)
    {
        dynamic_array.push_back(i * 10);
    }

    for (auto i : dynamic_array)
    {
        cout << i << endl;
    }
}