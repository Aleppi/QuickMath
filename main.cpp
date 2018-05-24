#include <iostream>
#include "LinAlg/vector.h"
//#include "LinAlg/matrix.h"
//#include "Combi/combi.h"

int main()
{
    Vector two(1, 2);
    Vector v2(2, 3);
    Vector four(3, 2, 4, 1);

    for (int i = 0; i < size(two); ++i) {
        std::cout << two[i] << '\n';
    }
    std::cout << '\n';
    for (int i = 0; i < size(v2); ++i) {
        std::cout << v2[i] << '\n';
    }
    std::cout << '\n';
    Vector sum(Vector::vectorSum(two, v2));
    for (int i = 0; i < size(sum); ++i) {
        std::cout << sum[i] << '\n';
    }
    return 0;
}
