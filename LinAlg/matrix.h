#ifndef MATRIX_H
#define MATRIX_H
#include "vector.h"
#include <vector>

class Matrix {
    public:
        Matrix(unsigned int rows, unsigned int columns)
        {
            unsigned int dimensions(rows * columns);
            m_matrix.reserve(dimensions);
            m_matrix.resize(dimensions);
            m_rows = rows;
            m_columns = columns;
        }       
        double& operator()(unsigned int row, unsigned int column)
        {
            return m_matrix[row * m_columns + column];
        }
        std::vector<double> getMatrix();
        std::vector<double>& setMatrix();
        void zero();
        static Matrix matrixSum(Matrix matrix1, Matrix matrix2);
//        static Matrix matrixDifference(Matrix matrix1, Matrix matrix2);
//        static Matrix matrixScalarMultiplication(Matrix matrix, double scalar);
//        static Matrix matrixMultiplication(Matrix matrix1, Matrix matrix2);
//        double calculateDeterminant();
    private:
        std::vector<double> m_matrix;
        unsigned int m_rows;
        unsigned int m_columns;
        
};
#endif
