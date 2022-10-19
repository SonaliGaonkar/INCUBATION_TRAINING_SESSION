#include <iostream>
#include <string.h>

int main()
{
    int count = 0;
    char str[100] = {0};
    std::cout << "Enter your String:";
    std::cin >> str;

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            count++;
        }
    }
    if (count == strlen(str))
    {
        std::cout << "String contains only digits.";
    }
    else
    {
        std::cout << "String does not contains only digits.";
    }
    return 0;
}