//Write a program to accept an integer N and generate an integer M which is formed by reversing the digits of N. 
//Please note N can have maximum 5 digits.

#include <iostream>
class reversing_of_digits
{
public:
    int num, rem = 0;
    int reverse = 0;
    reversing_of_digits()
    {
        std::cout << "Enter number to find reverse of it : ";
        std::cin >> num;
    }
    int getReverse()
    {
        if (num < 100000)
        {
            while (num != 0)
            {
                rem = num % 10;
                reverse = reverse * 10 + rem;
                num = num / 10;
            }
            std::cout << "Reverse of digits is : " << reverse;
        }
        else
        {
            std::cout << "Enter number upto 5 digit.";
        }
    }
};
int main()
{
    reversing_of_digits s;
    s.getReverse();
    return 0;
}