#include <iostream>
#include "LinAlg/vector.h"
#include "LinAlg/matrix.h"

int main()
{
    Vector a(1, 4, 7);
    Vector b(2, 5, 8);
    Vector c(3, 6, 9);
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
    std::cout << "\n\n";
    Matrix n(Vector(2, 2, 2), Vector(2, 2, 2), Vector(2, 2, 2));
    Matrix newMatrix(Matrix::matrixMultiplication(m, n));
    Vector vectors[3];
    newMatrix.getMatrix(vectors);
    for (int i = 0; i < 3; ++i) {
        double coordinates[3];
        for (int j = 0; j < 3; ++j) {
            vectors[j].getVector(coordinates);
            std::cout << coordinates[i] << " ";
        }
        std::cout << '\n';
    }
    return 0;
}
