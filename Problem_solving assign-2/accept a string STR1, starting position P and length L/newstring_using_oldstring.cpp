#include <iostream>
#include <string.h>
int main()
{
    int s, l;
    std::string str;

    std::cout << "Enter the string : ";
    std::cin >> str;
    std::cout << "Enter the starting position : ";
    std::cin >> s;
    std::cout << "Enter the length : ";
    std::cin >> l;

    std::string r = str.substr(s, l);
    std::cout << "\nNew sub String  = " << r;

    return 0;
}