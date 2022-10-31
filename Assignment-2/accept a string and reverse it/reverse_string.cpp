#include <iostream>
#include <cstring>
int main()
{
    char str[100];
    std::cout << "Enter a string to reverse it : ";
    std::cin >> str;
    strrev(str);
    std::cout << "Reverse string is : " << str;
    return 0;
}