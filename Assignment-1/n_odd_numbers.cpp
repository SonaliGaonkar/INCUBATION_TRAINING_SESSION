#include <iostream>

int main()
{
    int num;
    std::cout << "Enter a number : ";
    std::cin >> num;
    std::cout << "First " << num << " odd numbers are : \n";
    for (int i = 1; i <= 2 * num; i++)
    {
        if (i % 2 != 0)
        {
            std::cout << i << "\n";
        }
    }
    return 0;
}