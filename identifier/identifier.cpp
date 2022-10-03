#include <iostream>

bool isValid(std::string str)
{

    // check for valid identifier
    if (((str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z') || str[0] == '_'))
        return 1;

    // Traverse the string for the rest of the characters
    for (int i = 1; i < str.length(); i++)
    {
        if (((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9') 
        || str[i] == '_'))
            return 0;
    }

    // String is a invalid identifier
    return 0;
}
