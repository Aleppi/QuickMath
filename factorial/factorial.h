#ifndef FACTORIAL_H
#define FACTORIAL_H
class Factorial {
    public:
        Factorial()
        {
        }
        Factorial(unsigned long factorial)
            : m_factorial(factorial)
        {
        }
        unsigned long calculateFactorial(unsigned long x);
    private:
        unsigned long m_factorial = 0;
};
#endif
