/*
animals.cc, created by @python on 2012.10.16

Brute force search example.

Horses cost $10, pigs cost $3, and rabbits are only $0.50.
A farmer buys 100 animals for $100, How many of each animal
did he buy?
*/

#include <iostream>
using namespace std;

int main()
{

    for (int h = 0; h < 100; h++)
        for (int p = 0; p < 100; p++)
            for (int r = 0; r < 100; r++)
                if ((h + p + r) == 100)
                    if (((10 * h) + (3 * p) + (0.5 * r)) == 100)
                        cout << "Found one! " << h << " horses " << p << " pigs " << r << " rabbits " << endl;
}