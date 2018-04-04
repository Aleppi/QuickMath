//
// Created by aleppi on 4/4/18.
//

#include <stdio.h>
#include <ctype.h>
#include <stdint.h>

uint64_t calculateFactorial(uint64_t x)
{
    uint64_t result = 1;
    for (uint64_t i = x; i > 1; --i)
        result *= i;
    return result;
}