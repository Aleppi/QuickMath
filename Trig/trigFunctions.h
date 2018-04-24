#ifndef TRIGFUNCTIONS_H
#define TRIGFUNCTIONS_H
class TrigFunctions {
    public:
        TrigFunctions() {};
        TrigFunctions(double x) : m_x(x) {};
        double sin(double x);
        double cos(double x);
        double tan(double x);
        double arcsin(double x);
        double arccos(double x);
        double arctan(double x);
    private:
        double m_x;
};
#endif
