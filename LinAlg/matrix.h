#ifndef MATRIX_H
#define MATRIX_H
#include "vector.h"

class Matrix {
    public:
        Matrix() {};
        Matrix(Vector column1, Vector column2, Vector column3) : m_column1(column1), m_column2(column2), m_column3(column3) {};
        struct VectorSet {
           Vector column1;
           Vector column2;
           Vector column3;
        };
        VectorSet getMatrix();
    private:
        Vector m_column1;
        Vector m_column2;
        Vector m_column3;
};
#endif
