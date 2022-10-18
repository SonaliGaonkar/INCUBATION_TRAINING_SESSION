#include <iostream>

int main()
{
    int num;
    std::cout << "Enter number to check if it is negative : ";
    std::cin >> num;
    if (num < 0)
    {
        std::cout << "The number " << num << " is negative.";
    }
    else
    {
        std::cout << "The number " << num << " is not negative.";
    }
    return 0;
}