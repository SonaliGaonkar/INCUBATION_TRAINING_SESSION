//Write a program to accept a 5 digit integer N and then generates a number M by adding 1 to each digit.

#include <iostream>
class Number
{
public:
    int num, rem;
    int sum = 0, reverse = 0;
    Number()
    {
        std::cout << "Enter number to generate new number : ";
        std::cin >> num;
    }
    int generate_num()
    {
        if (num > 9999 && num < 100000)
        {
            while (num != 0)
            {
                rem = num % 10;
                rem = rem + 1;
                reverse = reverse * 10 + rem;
                num = num / 10;
            }
            {
                while (reverse != 0)
                {
                    rem = reverse % 10;
                    num = num * 10 + rem;
                    reverse = reverse / 10;
                }
            }
            std::cout << "Generated new number is : " << num;
        }
        else
        {
            std::cout << "Enter five digit number";
        }
        return 0;
    }
   
};
int main()
{
    Number n;
    n.generate_num();
    return 0;
}