#include <iostream>
#include "LinAlg/vector.h"
#include "LinAlg/matrix.h"

int main()
{
    Matrix m(4, 4);
    m.setMatrix() = {
        1, 0, 0, 0,
        0, 1, 0, 0,
        0, 0, 1, 0,
        0, 0, 0, 1
    };
    //Matrix o(m.getSubMatrix(1, 1));
    //for (int i = 0; i < o.getRows(); ++i) {
    //    for (int j = 0; j < o.getColumns(); ++j) {
    //        std::cout << o(i, j) << ' ';
    //    }
    //    std::cout << '\n';
    //}
    std::cout << m.calculateDeterminant() << '\n';
    return 0;
}
