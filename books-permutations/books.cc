/*
books.cc, created by @python on 2012.10.16

Ways to arrays six books on a shelf.
*/

#include <iostream>

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int n = 6;
    int permutations = 0;
    permutations = factorial(n);
    std::cout << "Total number of permutations = " << permutations << std::endl;
    return 0;
}