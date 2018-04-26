#include "exponent.h"
#include "../config.h"

long double Exponent::power(double base, int exp)
{
    long double result(1);
    if (!exp)
        return result;
    else if (exp < 0)
        return -2;

    for (int i = 1; i <= exp; ++i) {
        result *= base;
    }
    return result;
}

long double Exponent::sqRoot(double radicand)
{
    long double root(radicand / 2);
    for (int i = 0; i <= config::sqRootPrecision; ++i) {
        root = ((root + (radicand / root)) / 2);
    }
    return root;
}

