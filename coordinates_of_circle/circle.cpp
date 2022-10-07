#include <iostream>

// co-ordinates of center(x1,y1)
// co-ordinates of point whose position is to be determined (x,y)
// radius r
double points(double x, double y, double x1, double y1, double r)
{
    double dist = ((x - x1) * (x - x1)) + ((y - y1) * (y - y1));
    if (dist > r * r)
    {
        return 2; // outside circle
    }
    else if (dist < r * r)
    {
        return 1; // inside circle
    }
    else // dist == r*r
    {
        return 0; // on circle
    }
}
