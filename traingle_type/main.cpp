#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   double a, b, c;

    cout << "Enter The Value Of a,b,c \n"; // side's of triangle
    cin >> a >> b >> c;

    if (a == b && b == c && c == a)
    {
        cout << "The Triangle is Equilateral\n";
    }
    else if ((a == b || b == c || c == a) && (abs(a * a == b * b + c * c || b * b == c * c + a * a || c * c == a * a + b * b))<1e-9)
    {
        cout << "The Triangle is Isosceles Right angled\n";
    }
    else if (a == b || b == c || c == a)
    {
        cout << "The Triangle is Isosceles\n";
    }
    else if ((a != b != c) && (a * a == b * b + c * c || b * b == c * c + a * a || c * c == a * a + b * b))
    {
        cout << "The Triangle is Scalene Right angled\n";
    }
    else
    {
        cout << "The Triangle is Scalene angled\n";
    }
    return 0;
}
