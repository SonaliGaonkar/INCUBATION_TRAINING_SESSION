#include <iostream>
#include <string.h>

class UpperCase
{
    char convert = 0;
    char str[100] = {0};

public:
    UpperCase()
    {
        std::cout << "Enter your String : ";
        std::cin >> str;
    }
    char to_upper()
    {
        for (int i = 0; i < strlen(str); i++)
        {

            convert = toupper(str[i]);
            std::cout << convert;
        }
    }
};
int main()
{
    UpperCase u;
    std::cout << "\nConverted uppercase string is : ";
    u.to_upper();
    return 0;
}