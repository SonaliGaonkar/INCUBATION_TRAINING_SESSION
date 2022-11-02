// Write a program to accept a list L1 of N integers.
// Accept integer M. Multiply each integer in the list by M and generate a new list L2. Print the lists L1 and L2.
#include <iostream>

int multiply(int L1[], int L2[], int M, int N)
{
    for (int i = 0; i < N; i++)
    {
        L2[i] = L1[i] * M;
    }
}
int main()
{
    int N, M, L1[100], L2[100];
    std::cout << "Enter no of integers : ";
    std::cin >> N;
    std::cout << "Enter values in list : ";
    for (int i = 0; i < N; i++)
    {
        std::cin >> L1[i];
    }
    std::cout << "Enter integer M : ";
    std::cin >> M;
    multiply(L1, L2, M, N);
    std::cout << "\nList 1: [ ";
    for (int i = 0; i < N; i++)
    {
        std::cout << L1[i] << "   ";
    }
    std::cout << "]";
    std::cout << "\nList 2: [ ";
    for (int i = 0; i < N; i++)
    {
        std::cout << L2[i] << "   ";
    }
    std::cout << "]";
}