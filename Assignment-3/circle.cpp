// Write a program to accept number of circles N and radius and coordinates of center (x,y) for each circle.
// Select appropriate data structure and explain why you chose it.
// Arrange the circles in increasing order of their area and print all the data of each circle.

/* Reason to use array data structure : I have used array as a data structure
data can be easily accessed using array.
I have stored data using structure type variable and a temp variable for temporary value storing.
*/
#include <iostream>
using namespace std;
struct Circle
{
    int radius;
    int x;
    int y;
    float area;
};

int main()
{
    struct Circle s[20], temp;
    int i, j, n;
    cout << "Enter total number of circles : ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << "\n\nEnter data for circle " << i << " : ";
        cout << "\nEnter radius: ";
        cin >> s[i].radius;
        cout << "Enter co-ordinate x: ";
        cin >> s[i].x;
        cout << "Enter co-ordinate y: ";
        cin >> s[i].y;

        s[i].area = 3.14 * s[i].radius * s[i].radius;
    }
    for (i = 1; i <= n - 1; i++)
    {
        for (j = i + 1; j <= n; j++)
        {
            if (s[i].area > s[j].area)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    cout << "Sorted data of circle are:\n";
    for (i = 1; i <= n; i++)
    {
        cout << "\n\nData for circle " << i << " : ";
        cout << "\n\nradius:" << s[i].radius;
        cout << "\nco-ordinate x:" << s[i].x;
        cout << "\nco-ordinate y:" << s[i].y;
        cout << "\nArea:" << s[i].area;
    }
    return 0;
}