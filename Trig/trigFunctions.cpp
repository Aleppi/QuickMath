#include "../config.h"
#include "trigFunctions.h"
#include "../Math/exponent.h"
#include "../Factorial/factorial.h"

double TrigFunctions::sin(double x)
{
   if (x > 1 || x < -1) {
       return -2; //To show the input was invalid
   }
   double result = 0;
   for (int n = 0; n <= config::trigPrecision; ++n) {
       result += (((Exponent::power(-1, n)) / (Factorial::calculateFactorial(2 * n + 1))) * Exponent::power(x, 2*n+1));
   }
   return result;
}

double TrigFunctions::cos(double x)
{

}

double TrigFunctions::tan(double x)
{

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
