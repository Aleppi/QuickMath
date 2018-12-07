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
        Matrix(unsigned int rows, unsigned int columns, std::vector<double> matrix)
        {
            m_matrix = matrix;
            m_rows = rows;
            m_columns = columns;
        }
        double& operator()(unsigned int row, unsigned int column)
        {
            return m_matrix[row * m_columns + column];
        }
        std::vector<double> getMatrix();
        std::vector<double>& setMatrix();
        Vector getRowVector(unsigned int row);
        Vector getColumnVector(unsigned int column);
        Matrix getSubMatrix(unsigned int row, unsigned int column);
        unsigned int getRows();
        unsigned int getColumns();
        void zero();
        Vector linearTransform(Vector vector);
        static Matrix matrixSum(Matrix matrix1, Matrix matrix2);
        static Matrix matrixDifference(Matrix matrix1, Matrix matrix2);
        static Matrix matrixScalarMultiplication(Matrix matrix, double scalar);
        static Matrix matrixMultiplication(Matrix matrix1, Matrix matrix2);
        static Vector linearTransformation(Matrix matrix, Vector vector);
        double calculateDeterminant();
        Matrix transpose();
        static Matrix matrixTranspose(Matrix matrix);
        Matrix getCofactorMatrix();
        static Matrix cofactorMatrix(Matrix matrix);
        Matrix getAdjugateMatrix();
        static Matrix adjugateMatrix(Matrix matrix);
        Matrix getInverseMatrix();
        static Matrix inverseMatrix(Matrix matrix);
    private:
        std::vector<double> m_matrix;
        unsigned int m_rows;
        unsigned int m_columns;
        
};
#endif
