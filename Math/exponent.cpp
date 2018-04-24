#include "exponent.h"

int Exponent::power(int base, int exp)
{
    int result = 1;
    if (!exp) {
        return result;
    }
    for (int i = 1; i <= exp; ++i) {
        result *= base;
    }
    return result;
}
