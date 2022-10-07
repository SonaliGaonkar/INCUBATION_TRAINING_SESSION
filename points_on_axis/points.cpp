#include <iostream>
#include <string.h>

int axisCheck(int x, int y)
{
    if (x == 0 && y == 0)
    {
        return 3;
    }
    else if (x != 0 && y == 0)
    {
        return 2;
    }
    else if (x == 0 && y != 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}