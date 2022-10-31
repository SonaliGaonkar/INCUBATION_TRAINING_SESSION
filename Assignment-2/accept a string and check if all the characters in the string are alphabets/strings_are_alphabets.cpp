#include <iostream>
#include <string.h>

class Alphabet
{
    int count = 0;
    char str[100] = {0};

public:
    Alphabet()
    {
        std::cout << "Enter your String:";
        std::cin >> str;
    }
    char check()
    {
        for (int i = 0; i < strlen(str); i++)
        {
            if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            {
                count++;
            }
        }
        if (count == strlen(str))
        {
            std::cout << "String contains only alphabets.";
        }
        else
        {
            std::cout << "String does not contains only alphabets.";
        }
    }
};
int main()
{
    Alphabet a;
    a.check();
    return 0;
}