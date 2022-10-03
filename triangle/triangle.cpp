#include <iostream>

bool valid(int a, int b, int c)
{
    if (a + b + c == 180 && a != 0 && b != 0 && c != 0)
    {
        return 1; //1 is valid 
    }
    else
    {
        return 0;  // 0 is invalid
    }
}
