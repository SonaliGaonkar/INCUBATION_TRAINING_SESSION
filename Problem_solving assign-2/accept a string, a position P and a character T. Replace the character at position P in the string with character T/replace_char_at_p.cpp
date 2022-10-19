#include <iostream>
#include <string.h>
int main()
{
    int p;
    char c;
    char str[100];

    std::cout << "Enter the string : ";
    std::cin >> str;
    std::cout << "Enter the position to be replaced : ";
    std::cin >> p;
    std::cout << "Enter the character to be replaced at that position : ";
    std::cin >> c;

    for (int i = 1; i < strlen(str); i++)
    {
        if (p == i)
        {
            str[i] = c;
        }
    }
    std::cout << "\nNew String (after replacing character at given position = " << str;

    return 0;
}
