#include <iostream>
#include "LinAlg/vector.h"
#include "LinAlg/matrix.h"

int main()
{
    Vector i_hat(1, 0, 0);
    Vector j_hat(0, 1, 0);

    for (int i = 0; i < i_hat.size(); ++i) {
        std::cout << i_hat[i] << '\n';
    }
    std::cout << '\n';
    for (int i = 0; i < j_hat.size(); ++i) {
        std::cout << j_hat[i] << '\n';
    }
    std::cout << '\n';
    Vector k_hat(Vector::crossProduct(i_hat, j_hat));
    for (int i = 0; i < k_hat.size(); ++i) {
        std::cout << k_hat[i] << '\n';
    }

    std::cout << Vector::calculateAngle(i_hat, j_hat) << '\n';
    std::cout << i_hat.getLength() << '\n';

    Matrix m(2, 2);
    Matrix n(2, 2);
    m.setMatrix() = {3, 4, 5, 8};
    n.setMatrix() = {1, 1, 1, 1};
    Matrix o(Matrix::matrixMultiplication(m, n));
    for (int j = 0; j < o.getColumns(); ++j) {
        for (int i = 0; i < o.getRows(); ++i) {
            std::cout << o(i, j) << ' ';
        }
        std::cout << '\n';
    }
    return 0;
}
