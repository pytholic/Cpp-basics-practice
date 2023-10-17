#include <iostream>
using namespace std;

// Passing with pointers (C old way)
void Duplicate(int *a, int *b, int *c)
{
    *a *= 2;
    *b *= 2;
    *c *= 2;
}

int main()
{
    int x = 1, y = 3, z = 7;
    Duplicate(&x, &y, &z);
    // The following outputs: x=2, y=6, z=14.
    cout << "x=" << x << ", y=" << y << ", z=" << z;
    return 0;
}

// Passing parameters by reference (C++ way).

// void Duplicate(int &a, int &b, int &c)
// {
//     a *= 2;
//     b *= 2;
//     c *= 2;
// }

// int main()
// {
//     int x = 1, y = 3, z = 7;
//     Duplicate(x, y, z);
//     // The following outputs: x=2, y=6, z=14.
//     cout << "x=" << x << ", y=" << y << ", z=" << z;
//     return 0;
// }