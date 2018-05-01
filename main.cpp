#include <iostream>
#include "LinAlg/vector.h"
#include "LinAlg/matrix.h"

int main()
{
    Vector a(1, 0, 0);
    Vector b(0, 1, 0);
    Vector c(0, 0, 1);
    Matrix m(a, b, c);
    Vector vectorSet[3];
    m.getMatrix(vectorSet);
    for (int i = 0; i < 3; ++i) {
        double coordinates[3];
        for (int j = 0; j < 3; ++j) {
            vectorSet[j].getVector(coordinates);
            std::cout << coordinates[i] << " ";
        }
        std::cout << '\n';
    }
    std::cout << '\n';
    double det = m.calculateDeterminant();
    std::cout << det << '\n';
    return 0;
}
