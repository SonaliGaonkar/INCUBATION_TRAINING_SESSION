#include <iostream>
#include <string.h>
#include <ctype.h>

int main()
{

    int i = 0, flag = 0;
    char a[10][10] = {"int", "float", "break", "long", "char", "for", "if", "switch", "else", "while"}, string[10];

    std::cout << "Enter a string : ";
    std::cin >> string;

    for (i = 0; i < 10; i++)
    {
        if ((strcmp(a[i], string) == 0))
            flag = 1;
    }

    if (flag == 1)
        std::cout << string << " is a valid keyword ";
    else
    {
        flag = 0;

        if ((string[0] == '_') || (isalpha(string[0]) != 0))
        {
            for (i = 1; string[i] != '\0'; i++)
                if ((isalnum(string[i]) == 0) && (string[i] != '_'))
                    flag = 1;
        }
        else
            flag = 1;
        if (flag == 0)
            std::cout << string << " is a valid identifier ";
        else
            std::cout << string << " is neither a keyword nor an identifier " << string;
    }
    return 0;
}