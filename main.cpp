#include <iostream>
#include "LinAlg/vector.h"
#include "LinAlg/matrix.h"

int main()
{
    Vector v1(1, 0, 0);
    Vector v2(0, 1, 0);
    Vector v3(0, 0, 1);
    Matrix m1(v1, v2, v3);
    Vector vectorSet[3];
    m1.getMatrix(vectorSet);
    for (int i = 0; i < 3; ++i) {
        double coordinates[3];
        for (int j = 0; j < 3; ++j) {
            vectorSet[j].getVector(coordinates);
            std::cout << coordinates[i] << " ";
        }
        std::cout << '\n';
    }

    return 0;
}
