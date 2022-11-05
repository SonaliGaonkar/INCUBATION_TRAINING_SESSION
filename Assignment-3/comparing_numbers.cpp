// Write a program to accept an integer N and generate an integer M which is formed by reversing the digits of N.
// Please note N can have maximum 5 digits. Print the numbers N and M. Compare N with M and print the result.

#include <iostream>

class Reverse
{
public:
    int num, rem = 0, temp = 0;
    int reverse = 0;
    Reverse()
    {
        std::cout << "\nEnter number to find reverse of it : ";
        std::cin >> num;
    }
    int getReverse()
    {
        temp = num;          // store original value of num in temp variables
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
    int compare()
    {
        std::cout << "\n\nNumber before reversing is : " << temp;
        std::cout << "\nNumber after reversing is : " << reverse;
        if (temp > reverse)
        {
            std::cout << "\n\n"
                      << temp << " is greater than " << reverse;
        }
        else
        {
            std::cout << "\n\n"
                      << reverse << " is greater than " << temp;
        }
    }
};
int main()
{
    Reverse s;
    s.getReverse();
    s.compare();
    return 0;
}