#include "factorial.h"

unsigned long Factorial::calculateFactorial(unsigned long x)
{
    unsigned long result = 1;
    for (unsigned long i = x; i > 1; --i)
        result *= i;
    return result;
}
