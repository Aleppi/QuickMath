#ifndef EXPONENT_H
#define EXPONENT_H
class Exponent {
    public:
        Exponent() {};
        Exponent(double x) : m_x(x) {};
        static long double power(double base, int exp);
        static long double sqRoot(double radicand);
    private:
        double m_x;
};
#endif
