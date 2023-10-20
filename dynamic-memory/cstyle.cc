/*
cstyle.cc, created by @python on 2023.10.19
Description: Expanding an array. Stack array expansion gives memory error. You need to use heap.
*/

#include <iostream>

int main()
{
    int stack_array[5] = {10, 20, 30, 40, 50}; // Create a stack-allocated array of size 5
    int *dynamic_array = nullptr;              // Create a dynamic array of size 10

    int size = 10;
    dynamic_array = new int[size];

    for (int i = 0; i < 5; i++)
    {
        dynamic_array[i] = stack_array[i]; // Copy the first 5 elements from the stack array
    }

    for (int i = 5; i < 10; i++)
    {
        dynamic_array[i] = i * 10; // Add elements 50, 60, 70, 80, 90
    }

    for (int i = 0; i < 10; i++)
    {
        std::cout << dynamic_array[i] << " ";
    }

    std::cout << "\nProgram completed." << std::endl;

    delete[] dynamic_array; // Don't forget to release the dynamically allocated memory

    return 0;
}
