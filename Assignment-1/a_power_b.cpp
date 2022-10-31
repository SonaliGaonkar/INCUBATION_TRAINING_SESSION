#include <iostream>
#include <math.h>

int main()
{
    int base, exponent, power;
    std::cout << "Enter base number : ";
    std::cin >> base;
    std::cout << "Enter exponent number : ";
    std::cin >> exponent;
    power = pow(base, exponent);
    std::cout << base << " ^ " << exponent << " = " << power;
    return 0;
}