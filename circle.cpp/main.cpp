#include <iostream>
#include "circle.cpp"
int main()
{
    int x1 = 0, y1 = 1, x = 1, y = 1, r = 2;
    if (points(x1, y1, x, y, r))
    {
        std::cout << "outside circle";
    }
    else if (points(x1, y1, x, y, r))
    {
        std::cout << "inside circle";
    }
    else
    {
        std::cout << "on circle";
    }
}