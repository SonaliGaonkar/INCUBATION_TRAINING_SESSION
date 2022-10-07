#include <iostream>
#include "alphabet.cpp"

int main()
{
    std::string arr[] = {"watermelon", "banana", "guava", "grapes", "papaya", "fig", "orange", "apple", "mango"};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubblesort(arr, n);
    std::cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << "\n";
    }
    return 0;
}