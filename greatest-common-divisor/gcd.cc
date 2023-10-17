/*
gcd.cpp, created by @python on 2012.10.16

An example program to caluclate GEC (Greated Common Divisor)
using Euclidean algorithm.
*/

#include <iostream>

// Function to implement Euclid's algorithm for calculating gcd
int gcd(int a, int b)
{
    int temp;
    while (b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main()
{
    int res, a, b;
    std::cout << "Enter two integers: ";
    if (!(std::cin >> a >> b))
    {
        std::cout << "Please enter only integers!" << std::endl;
    }
    else
    {
        res = gcd(a, b);
        std::cout << "gcd: " << a << ", " << b << " = " << res << std::endl;
    }
    return 0;
}