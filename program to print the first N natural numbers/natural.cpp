#include <iostream>

int main()
{
    int num;
    std::cout << "Enter a number : ";
    std::cin >> num;
    std::cout << "First " << num << " Natural numbers are : \n";
    for (int i = 1; i <= num; i++)
    {
        std::cout << i << "\n";
    }
    return 0;
}