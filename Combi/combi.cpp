#include "combi.h"
#include "../Factorial/factorial.h"
#include "../Math/exponent.h"

int Combi::calculatePermutations(int n, int k)
{
    if (k > n)
        return 0;
    int permutations(Factorial::calculateFactorial(n) / Factorial::calculateFactorial(n - k));
    return permutations;
}

int Combi::calculateRepetitivePermutations(int n, int k)
{
    return Exponent::power(k, n);
}

int Combi::calculateCombinations(int n, int k)
{
    if (k > n)
        return 0;
    int combinations(Factorial::calculateFactorial(n) / (Factorial::calculateFactorial(k) * Factorial::calculateFactorial(n - k)));
    return combinations;
}

int Combi::calculateRepetitiveCombinations(int n, int k)
{
    return Combi::calculateCombinations((n + k - 1), k);
}
