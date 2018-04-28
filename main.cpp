#include <iostream>
#include "LinAlg/vector.h"
#include "LinAlg/matrix.h"

int main()
{
    Vector v1(1, 0, 0);
    Vector v2(0, 1, 0);
    Vector v3(0, 0, 1);
    Matrix m1(v1, v2, v3);
    Matrix::VectorSet matrix1 = m1.getMatrix();
    for (int i = 0; i < 3; ++i) {
        std::cout << matrix1.column1.getVector()[i] << ' ';
        std::cout << matrix1.column2.getVector()[i] << ' ';
        std::cout << matrix1.column3.getVector()[i] << '\n';
    }
    return 0;
}
