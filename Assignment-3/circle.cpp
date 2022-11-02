// Write a program to accept number of circles N and radius and coordinates of center (x,y) for each circle.
// Select appropriate data structure and explain why you chose it.
// Arrange the circles in increasing order of their area and print all the data of each circle.

/* Reason to use vector data structure : I have used vector as a data structure
data can be easily accessed using vector
I have also used class to store multiple data and used vector to store multiple objects
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Cordinates
{
public:
    int x, y;
};
class Circle
{
public:
    int radius;
    float area = 0;
    vector<Cordinates> cordinate;
};
class Data
{
public:
    vector<Circle> circles;

    void getData(int n)
    {
        Circle circle;
        Cordinates cordinates;
        for (int i = 0; i < n; i++)
        {
            cout << "Enter the Radius of Circle : " << i + 1 << endl;
            int radius;
            cin >> radius;
            circle.radius = radius;
            cout << "Enter the X and Y coordinate of Circle : " << i + 1 << endl;
            int x, y;
            cin >> x >> y;
            cordinates.x = x;
            cordinates.y = y;
            circle.cordinate.emplace_back(cordinates);
            circles.emplace_back(circle);
            circle.cordinate.clear();
        }
    }
    void calculateArea()
    {
        for (int i = 0; i < circles.size(); i++)
        {
            circles[i].area = 3.14 * circles[i].radius * circles[i].radius;
        }
    }
    void printData()
    {
        cout << "\n";
        sort(circles.begin(), circles.end(), [](Circle const &a, Circle const &b)
             { return a.area < b.area; });
        for (int i = 0; i < circles.size(); i++)
        {
            cout << "Circle " << i + 1 << " : " << endl;
            cout << "\t"
                 << "Radius - " << circles[i].radius << endl;
            cout << "\t"
                 << "Cordinate X - " << circles[i].cordinate[0].x << endl;
            cout << "\t"
                 << "Cordinate Y - " << circles[i].cordinate[0].y << endl;

            cout << "\t"
                 << "Area - " << circles[i].area << endl;
        }
    }
};

int main()
{
    Data circleData;
    int n;
    cout << "Enter the number of circles" << endl;
    cin >> n;
    circleData.getData(n);
    circleData.calculateArea();
    circleData.printData();
    return EXIT_SUCCESS;
}