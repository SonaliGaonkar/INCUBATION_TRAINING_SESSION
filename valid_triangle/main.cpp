#include <iostream>
#include "triangle.cpp"

int main()
{
    int a = 60, b = 40, c = 80;
    if (valid(a, b, c))
    {
        std::cout << "Valid";
    }
    else
    {
        std::cout << "Invalid";
    }
}