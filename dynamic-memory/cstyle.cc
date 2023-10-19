/*
cstyle.cc, created by @python on 2023.10.19
Description: Expanding an array. Stack array expansion gives memory error. You need to use heap.
*/

#include <iostream>

int main()
{
    int stack_array[5] = {10, 20, 30, 40, 50}; // Create a stack-allocated array of size 5
    int *dynamic_array = new int[5];

    for (int i = 1; i <= 5; i++)
    {
        dynamic_array[i] = stack_array[i]; // Try to add 10 elements to a size-5 array
    }

    for (int i = 6; i <= 10; i++)
    {
        dynamic_array[i] = i * 10;
    }

    for (int i = 0; i < 10; i++)
    {
        std::cout << dynamic_array[i] << " ";
    }

    std::cout << "\nProgram completed." << std::endl;

    return 0;
}