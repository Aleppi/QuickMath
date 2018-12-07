#include <iostream>
#include "Math/operators.h"
#include "LinAlg/vector.h"
#include "LinAlg/matrix.h"
#include "Math/exponent.h"

int main()
{
    Matrix M(3, 3);
    M.setMatrix() = {
        3, 5, 8,
        2, 2, 7,
        7, 1, 2
    };
    for (int i = 0; i < M.getRows(); ++i) {
        for (int j = 0; j < M.getColumns(); ++j) {
            std::cout << M(i, j) << ' ';
        }
        std::cout << '\n';
    }
    std::cout << '\n';
    std::cout << '\n';
    Matrix M_I(M.getInverseMatrix());
    for (int i = 0; i < M_I.getRows(); ++i) {
        for (int j = 0; j < M_I.getColumns(); ++j) {
            std::cout << M_I(i, j) << ' ';
        }
        std::cout << '\n';
    }
    std::cout << '\n';
    std::cout << '\n';
    Matrix I(M * M_I);
    for (int i = 0; i < I.getRows(); ++i) {
        for (int j = 0; j < I.getColumns(); ++j) {
            std::cout << I(i, j) << ' ';
        }
        std::cout << '\n';
    }
    //Vector v1(2, 1 + Exponent::sqRoot(5));
    //Vector v2(2, 1 - Exponent::sqRoot(5));
    //Matrix A(2, 2);
    //A.setMatrix() = {
    //    0, 1,
    //    1, 1
    //};
    //for (int i = 0; i < A.getRows(); ++i) {
    //    for (int j = 0; j < A.getColumns(); ++j) {
    //        std::cout << A(i, j) << ' ';
    //    }
    //    std::cout << '\n';
    //}
    //std::cout << '\n';
    //Matrix E(2, 2);
    //E.setMatrix() = {
    //    v1[0], v2[0],
    //    v1[1], v2[1]
    //};
    //Matrix EInverse(2, 2);
    //EInverse.setMatrix() = {
    //    v2[1], -v2[0],
    //    -v1[1], v1[0]
    //};
    //EInverse = ((1 / E.calculateDeterminant()) * EInverse);
    //Matrix Eigenbasis(EInverse * A * E);
    return 0;
}
