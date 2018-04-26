#include <iostream>
#include "LinAlg/vector.h"

int main()
{
    Vector v1(1, 0, 0);
    Vector v2(0, 1, 0);
    std::cout << Vector::calculateAngle(v1.getVector(), v2.getVector()) << '\n';
    return 0;
}
