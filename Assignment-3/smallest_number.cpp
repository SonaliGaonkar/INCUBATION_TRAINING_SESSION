// Write a program to accept a list of N integers. Accept integer K. Find the Kth smallest number in the list and its position.

#include <iostream>
#include <algorithm>
using namespace std;

int Smallest(int arr[], int N, int K)
{
    sort(arr, arr + N);
    return arr[K - 1];
}
int main()
{
    int N, K, arr[100];
    std::cout << "Enter no of integers : ";
    std::cin >> N;
    std::cout << "Enter values in list : ";
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    std::cout << "Enter integer K : ";
    std::cin >> K;

    cout << "K'th smallest element is "
         << Smallest(arr, N, K);
    return 0;
}