#include <iostream>

int main()
{
    int num;
    std::cout << "Enter number to check if it is positive : ";
    std::cin >> num;
    if (num > 0)
    {
        std::cout << "The number " << num << " is positive.";
    }
    else
    {
        std::cout << "The number " << num << " is not positive.";
    }
    return 0;
}