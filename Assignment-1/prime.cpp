#include <iostream>

int main()
{
    int num, c = 0;
    std::cout << "Enter number to check if it is prime : ";
    std::cin >> num;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            c++;
        }
    }

    if (c == 2)
    {
        std::cout << num << " is a Prime number.";
    }
    else
    {
        std::cout << num << " is not a Prime number.";
    }
    return 0;
}