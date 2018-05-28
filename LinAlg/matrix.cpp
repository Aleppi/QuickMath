#include "matrix.h"
#include "vector.h"

std::vector<double> Matrix::getMatrix()
{
    return m_matrix;
}

std::vector<double>& Matrix::setMatrix()
{
    return m_matrix;
}

Vector Matrix::getRowVector(unsigned int row)
{
    std::vector<double> rowVector;
    rowVector.reserve(m_columns);
    rowVector.resize(m_columns);
    for (int i = 0; i < m_columns; ++i)
        rowVector[i] = (*this)(row, i);
    return Vector(rowVector);
}

Vector Matrix::getColumnVector(unsigned int column)
{ 
    std::vector<double> columnVector;
    columnVector.reserve(m_rows);
    columnVector.resize(m_rows);
    for (int i = 0; i < m_rows; ++i)
        columnVector[i] = (*this)(i, column);
    return Vector(columnVector);
}

unsigned int Matrix::getRows()
{
    return m_rows;
}

unsigned int Matrix::getColumns()
{
    return m_columns;
}

void Matrix::zero()
{
    for (int i = 0; i < m_rows; ++i) {
        for (int j = 0; j < m_columns; ++j) {
            (*this)(i, j) = 0;
        }
    }
}

Matrix Matrix::matrixSum(Matrix matrix1, Matrix matrix2)
{
    if (matrix1.m_rows != matrix2.m_rows || matrix1.m_columns != matrix2.m_columns) {
        Matrix zero(1, 1);
        zero.zero();
        return zero; //Return 1x1 zero matrix if the dimensions are different
    }
    Matrix sum(matrix1.m_rows, matrix1.m_columns);
    sum.zero();
    for (int i = 0; i < matrix1.m_rows; ++i) {
        for (int j = 0; j < matrix1.m_columns; ++j) {
           sum(i, j) = matrix1(i, j) + matrix2(i, j);
        }
    }
    return sum;
}

Matrix Matrix::matrixDifference(Matrix matrix1, Matrix matrix2)
{
    if (matrix1.m_rows != matrix2.m_rows || matrix1.m_columns != matrix2.m_columns) {
        Matrix zero(1, 1);
        zero.zero();
        return zero; //Return 1x1 zero matrix if the dimensions are different
    }
    Matrix difference(matrix1.m_rows, matrix1.m_columns);
    difference.zero();
    for (int i = 0; i < matrix1.m_rows; ++i) {
        for (int j = 0; j < matrix1.m_columns; ++j) {
           difference(i, j) = matrix1(i, j) - matrix2(i, j);
        }
    }
    return difference;
}

Matrix Matrix::matrixScalarMultiplication(Matrix matrix, double scalar)
{
    Matrix product(matrix);
    for (int i = 0; i < product.m_matrix.size(); ++i)
        product.m_matrix[i] *= scalar;
    return product;
}

Matrix Matrix::matrixMultiplication(Matrix matrix1, Matrix matrix2)
{
    if (matrix1.m_columns != matrix2.m_rows) {
        Matrix zero(1, 1);
        zero.zero();
        return zero; //Return 1x1 zero matrix if matrix multiplication is not possible
    }
    Matrix product(matrix1.m_rows, matrix2.m_columns);
    for (int i = 0; i < product.m_rows; ++i) {
        for (int j = 0; j < product.m_columns; ++j) {
            product(i, j) = Vector::dotProduct(matrix1.getRowVector(i), matrix2.getColumnVector(j));
        }
    }
    return product;
}

//double Matrix::calculateDeterminant()
//{
//    double *column1Arr = new double[3];
//    m_column1.getVector(column1Arr);
//    double *column2Arr = new double[3];
//    m_column2.getVector(column2Arr);
//    double *column3Arr = new double[3];
//    m_column3.getVector(column3Arr);   
//
//    double *matrixArr = new double[9]
//    {
//        column1Arr[0], column2Arr[0], column3Arr[0],
//        column1Arr[1], column2Arr[1], column3Arr[1],
//        column1Arr[2], column2Arr[2], column3Arr[2]
//    };
//
//    double det(matrixArr[0] * matrixArr[4] * matrixArr[8] + matrixArr[1] * matrixArr[5] * matrixArr[6] + matrixArr[2] * matrixArr[3] * matrixArr[7] - matrixArr[6] * matrixArr[4] * matrixArr[2] - matrixArr[7] * matrixArr[5] * matrixArr[0] - matrixArr[8] * matrixArr[3] * matrixArr[1]);
//
//    delete[] column1Arr;
//    delete[] column2Arr;
//    delete[] column3Arr;
//    delete[] matrixArr;
//    return det;
//}


