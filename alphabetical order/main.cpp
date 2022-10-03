#include <iostream>

void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}
void bubblesort(std::string arr[], int n)
{
    int i, j;
    for (i = 0; i <= n - 1; i++)
    {
        for (j = 0; j <= n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
    }
}
void print(std::string arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        std::cout << arr[i] << "\n";
}
int main()
{
    std::string arr[] = {"dbg", "abh", "fnjfjf", "ffk", "fkfk", "iieo", "poi", "urk", "wuj", "agb"};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubblesort(arr, n);
    std::cout << "Sorted array: \n";
    print(arr, n);
    return 0;
}
