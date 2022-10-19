#include <iostream>
#include <string.h>

class LowerCase
{
    char convert = 0;
    char str[100] = {0};

public:
    LowerCase()
    {
        std::cout << "Enter your String : ";
        std::cin >> str;
    }
    char to_lower()
    {
        for (int i = 0; i < strlen(str); i++)
        {

            convert = tolower(str[i]);
            std::cout << convert;
        }
    }
};
int main()
{
    LowerCase l;
    std::cout << "\nConverted lowercase string is : ";
    l.to_lower();
    return 0;
}