#include <iostream>
#include <string.h>

class Alphanumeric
{
    int count = 0;
    char str[100] = {0};

public:
    Alphanumeric()
    {
        std::cout << "Enter your String:";
        std::cin >> str;
    }
    char check()
    {
        for (int i = 0; i < strlen(str); i++)
        {
            if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
            {
                count++;
            }
        }
        if (count == strlen(str))
        {
            std::cout << "String contains alphanumeric characters.";
        }
        else
        {
            std::cout << "String does not contains alphanumeric characters.";
        }
    }
};
int main()
{
    Alphanumeric a;
    a.check();
    return 0;
}