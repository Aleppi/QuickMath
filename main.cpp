#include <iostream>
#include "LinAlg/vector.h"

int main()
{
    Vector v1(0, 4, 3);
    std::cout << v1.getLength() << '\n';
    return 0;
}
