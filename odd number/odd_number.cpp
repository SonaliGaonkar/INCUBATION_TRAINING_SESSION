#include <iostream>

int main()
{
    int num;
    std::cout << "Enter number : ";
    std::cin >> num;
    if (num % 2 != 0)
    {
        std::cout << "Entered number is odd.";
    }
    else
    {
        std::cout << "Entered number is not odd.";
    }
    return 0;
}