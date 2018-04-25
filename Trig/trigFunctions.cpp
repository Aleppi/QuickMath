#include "trigFunctions.h"
#include "../config.h"
#include "../Math/exponent.h"
#include "../Factorial/factorial.h"

double TrigFunctions::sin(double x)
{
   double result = 0;
   for (int n = 0; n <= config::trigPrecision; ++n) {
       result += (((Exponent::power(-1, n)) / (Factorial::calculateFactorial(2 * n + 1))) * Exponent::power(x, 2 * n + 1));
   }
   return result;
}

double TrigFunctions::cos(double x)
{
    double result = 0;
    for (int n = 0; n <= config::trigPrecision; ++n) {
        result += (((Exponent::power(-1, n)) / (Factorial::calculateFactorial(2 * n))) * Exponent::power(x, 2*n));
    }
    return result;
}

double TrigFunctions::tan(double x)
{
    double result = 0;
    for (int n = 1; n <= config::trigPrecision; ++n) {
        result += (((config::bernoulli[2 * n] * Exponent::power(-4, n) * (1 - Exponent::power(4, n))) / (Factorial::calculateFactorial(2 * n))) * Exponent::power(x, 2 * n - 1));
    }
    return result;
}

double TrigFunctions::arcsin(double x)
{

}

double TrigFunctions::arccos(double x)
{

}

double TrigFunctions::arctan(double x)
{

}
