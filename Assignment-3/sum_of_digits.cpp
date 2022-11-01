//Write a program to accept an integer N and calculate the sum of its digits. Please note N can have maximum 5 digits.
#include <iostream>

class sum_of_digits
{
public:
    int num, rem = 0;
    int sum = 0;
    sum_of_digits()
    {
        std::cout << "Enter number to find sum of its digit : ";
        std::cin >> num;
    }
    int getSum()
    {
        if (num < 100000)
        {
            while (num != 0)
            {
                rem = num % 10;
                sum = sum + rem;
                num = num / 10;
            }
            std::cout << "Sum of digits is : " << sum;
        }
        else
        {
            std::cout << "Enter number upto 5 digit.";
        }
    }
};
int main()
{
    sum_of_digits s;
    s.getSum();
    return 0;
}