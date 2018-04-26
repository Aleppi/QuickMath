#ifndef TRIGFUNCTIONS_H
#define TRIGFUNCTIONS_H
class TrigFunctions {
    public:
        TrigFunctions() {};
        TrigFunctions(double x) : m_x(x) {};
        static double sin(double x);
        static double cos(double x);
        static double tan(double x);
        static double arcsin(double x);
        static double arccos(double x);
        static double arctan(double x);
    private:
        double m_x;
};
#endif
