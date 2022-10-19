#include <iostream>

int main()
{
    char str[50], i;
    std::cout << "Enter any string: ";
    std::cin >> str;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            str[i] = '*';
        }
    }
    std::cout << "\nNew String (after replacing vowel with '*' =" << str;

    return 0;
}