#include <iostream>

int main()
{
    int x, y;
    std::cout << "Enter set of points : ";
    std::cin >> x >> y;
    if (x == 0 && y == 0)
    {
        std::cout << "Points lies on origin.";
    }
    else if (x != 0 && y == 0)
    {
        std::cout << "Points lies on x-axis.";
    }
    else if (x == 0 && y != 0)
    {
        std::cout << "Points lies on y-axis.";
    }
    else
    {
        std::cout << "Points neither lies on X-axis nor Y-axis.";
    }
    return 0;
}