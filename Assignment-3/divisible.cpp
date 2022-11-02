// Write a program to accept a list L1 of N integers. Accept integer D.
// Generate list L2 such that it contains only those integers from list L1 which are divisible by D.
// Calculate the size of list L2. Print the list L1, N, D, list L2 and its size.

#include <iostream>

int divisible(int L1[], int L2[], int D, int N, int number)
{
    std::cout << "\nList 2: [ ";
    for (int i = 0; i < N; i++)
    {
        
        if (L1[i] % D == 0)
        {
            number = L1[i];
            std::cout << number << "   ";
        }
    }
    std::cout << "]";
}
int main()
{
    int N, D, L1[100], L2[100], number;
    std::cout << "Enter no of integers : ";
    std::cin >> N;
    std::cout << "Enter values in list : ";
    for (int i = 0; i < N; i++)
    {
        std::cin >> L1[i];
    }
    std::cout << "Enter integer D : ";
    std::cin >> D;

    std::cout << "\nList 1: [ ";
    for (int i = 0; i < N; i++)
    {
        std::cout << L1[i] << "   ";
    }
    std::cout << "]";
    divisible(L1, L2, D, N, number);
    std::cout << "\nValue of N is : " << N;
    std::cout << "\nValue of D is : " << D;
}