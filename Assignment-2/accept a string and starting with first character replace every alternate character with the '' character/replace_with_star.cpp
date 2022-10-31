#include <iostream>

int main()
{
    char str[50], i;
    std::cout << "Enter any string: ";
    std::cin >> str;

    for (i = 0; str[i] != '\0'; i += 2)
    {
        {
            str[i] = '*';
        }
    }
    std::cout << "\nNew String (after replacing alternate character with '*' =" << str;

    return 0;
}