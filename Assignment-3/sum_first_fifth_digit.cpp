//Write a program to accept 5 digit integer N and calculate the sum of its first and fifth digit.
#include <iostream>

class sum_of_digits
{
public:
    int num, rem = 0;
    int sum = 0;
    sum_of_digits()
    {
        std::cout << "Enter five digit number : ";
        std::cin >> num;
    }
    int getSum()
    {
        if (num > 9999 && num < 100000)
        {
           while (num != 0)
            {
                rem = num % 10; 
                sum = sum + rem;
                num = num / 10000;
            }
            std::cout << "Sum of first and fifth digit is : " << sum; 
        }
        else
        {
            std::cout << "Enter valid five digit number";
        }
    }
};
int main()
{
    sum_of_digits s;
    s.getSum();
    return 0;
}