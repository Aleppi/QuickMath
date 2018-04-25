#include <iostream>
#include "Math/exponent.h"

int main()
{
    std::cout << "Enter a value: ";
    double value;
    std::cin >> value;
    std::cout << Exponent::sqRoot(value) << '\n';
    return 0;
}
