#include <iostream>
#include <string.h>
int main()
{
    int p;
    char str[100];

    std::cout << "Enter the string : ";
    std::cin >> str;
    std::cout << "Enter the position to print the character at that position : ";
    std::cin >> p;
    for (int i = 1; i < strlen(str); i++)
    {
        if (p == i)
        {
            std::cout << str[i];
        }
    }
    return 0;
}
