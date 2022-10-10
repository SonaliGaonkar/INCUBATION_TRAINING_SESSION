#include <cmath>
using namespace std;
double sides(double a, double b, double c)
{
    if (a == b && b == c && c == a)
    {
        return 4; // cout << "The Triangle is Equilateral\n";
    }
    else if ((a == b || b == c || c == a) && (abs(a * a == b * b + c * c || b * b == c * c + a * a || c * c == a * a + b * b)) < 1e-9)
    {
        return 3; // cout << "The Triangle is Isosceles Right angled\n";
    }
    else if (a == b || b == c || c == a)
    {
        return 2; // cout << "The Triangle is Isosceles\n";
    }
    else if ((a != b != c) && (a * a == b * b + c * c || b * b == c * c + a * a || c * c == a * a + b * b))
    {
        return 1; // cout << "The Triangle is Scalene Right angled\n";
    }
    else
    {
        return 0; // cout << "The Triangle Scalene angled\n";
    }
}
