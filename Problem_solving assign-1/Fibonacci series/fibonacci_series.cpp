#include <iostream>

int n;
int fibonacci_numbers(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci_numbers(n - 2) + fibonacci_numbers(n - 1);
    }
}

int main()
{
    std::cout << "Enter number to print fibonacci series : ";
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cout << fibonacci_numbers(i) << " ";
    }
    return 0;
}
