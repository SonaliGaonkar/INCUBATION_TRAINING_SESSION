#include <iostream>

int main()
{
    std::string str;
    std::cout << "Enter string to calculate its length : ";
    std::cin >> str;
    std::cout << "Length of the string is : " << str.length();
    return 0;
}