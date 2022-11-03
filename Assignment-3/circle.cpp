// Write a program to accept number of circles N and radius and coordinates of center (x,y) for each circle.
// Select appropriate data structure and explain why you chose it.
// Arrange the circles in increasing order of their area and print all the data of each circle.

#include <iostream>
using namespace std;

#define MAX 100

class Circle
{
public:
    int radius;
    int x;
    int y;
    float area;

public:
    void getDetails(void)
    {
        cout << "\nEnter radius: ";
        cin >> radius;
        cout << "Enter co-ordinate x: ";
        cin >> x;
        cout << "Enter co-ordinate y: ";
        cin >> y;

        area = 3.14 * radius * radius;
    };
    void putDetails(void)
    {
        cout << "\nradius:" << radius;
        cout << "\nco-ordinate x:" << x;
        cout << "\nco-ordinate y:" << y;
        cout << "\nArea:" << area;
    }
};

int main()
{
    class Circle s[MAX]; // array of objects creation
    int n, i, j, temp;

    cout << "Enter total number of circles: ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << "Enter data for circle " << i + 1;
        s[i].getDetails();
        std::cout << "\n";
    }

    cout << endl;

    for (i = 0; i < n; i++)
    {
        cout << "\nData of circle " << (i + 1);
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (s[i].area > s[j].area)
                {
                    temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                }
            }
            s[i].putDetails();
        }

        std::cout << "\n";
    }

    return 0;
}