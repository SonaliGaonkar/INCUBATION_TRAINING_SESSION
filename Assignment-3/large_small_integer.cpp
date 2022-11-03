// Write a program to a accept a list of N integers.
// Find the largest and the smallest number in the list and their respective positions in the list.
#include <iostream>
using namespace std;

int main()
{

    int i,j, n;
    float arr[100];

    cout << "Enter total number of elements: ";
    cin >> n;
    cout << endl;

    for (i = 0; i < n; ++i)
    {
        cout << "Enter Number " << i + 1 << " : ";
        cin >> arr[i];
    }

    for (i = 1; i < n; ++i)
    {
        if (arr[0] < arr[i])
            arr[0] = arr[i];
    }

    cout << endl
         << "Largest element = " << arr[0] << "and its position is : " << arr[i];

    for (j = 1; j < n; ++j)
    {
        if (arr[0] > arr[j])
            arr[0] = arr[j];
    }

    cout << endl
         << "Smallest element = " << arr[0] << "and its position is : " << arr[j];

    return 0;
}
