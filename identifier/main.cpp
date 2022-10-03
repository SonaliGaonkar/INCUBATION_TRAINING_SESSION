#include<iostream>
#include"identifier.cpp"

int main()
{
    std::string str = "_abc123";
    int n = str.length();
 
    if (isValid(str))
        std::cout << "Valid";
    else
        std::cout << "Invalid";
 
    return 0;
}