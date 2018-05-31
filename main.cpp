#include <iostream>
#include "LinAlg/vector.h"
#include "LinAlg/matrix.h"
#include "Math/operators.h"

int main()
{
    Vector v1(1, 2);
    Vector v2(2, 3);
    Matrix m(2, 2);
    m.setMatrix() = {
        1, 3,
        3, 1
    };
    Vector v3(v1 * m);
    for (int i = 0; i < v3.size(); ++i)
        std::cout << v3[i] << '\n';
    std::cout << '\n';
    Vector v4(m * v2);
    for (int i = 0; i < v4.size(); ++i)
        std::cout << v4[i] << '\n';

    //for (int i = 0; i < o.getRows(); ++i) {
    //    for (int j = 0; j < o.getColumns(); ++j) {
    //        std::cout << o(i, j) << ' ';
    //    }
    //    std::cout << '\n';
    //}
    //std::cout << m.calculateDeterminant() << '\n';
    return 0;
}
