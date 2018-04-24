#ifndef EXPONENT_H
#define EXPONENT_H
class Exponent {
    public:
        Exponent() {};
        Exponent(int x) : m_x(x) {};
        static int power(int base, int exp);
    private:
        int m_x;
};
#endif
