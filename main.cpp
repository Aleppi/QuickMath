#include <iostream>
#include "LinAlg/vector.h"
#include "LinAlg/matrix.h"

int main()
{
    Matrix m(3, 3);
    m.setMatrix() = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::cout << m.calculateDeterminant() << '\n';
    return 0;
}
