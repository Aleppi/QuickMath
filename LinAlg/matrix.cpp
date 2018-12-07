#include "matrix.h"
#include "vector.h"
#include "../Math/exponent.h"

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
    for (int i = 0; i < m_columns; ++i)
        rowVector.push_back((*this)(row, i));
    return Vector(rowVector);
}

Vector Matrix::getColumnVector(unsigned int column)
{ 
    std::vector<double> columnVector;
    columnVector.reserve(m_rows);
    for (int i = 0; i < m_rows; ++i)
        columnVector.push_back((*this)(i, column));
    return Vector(columnVector);
}

Matrix Matrix::getSubMatrix(unsigned int row, unsigned int column)
{
    std::vector<double> subMatrix;
    subMatrix.reserve((m_rows - 1) * (m_columns - 1));
    for (int i = 0; i < m_rows; ++i) {
        for (int j = 0; j < m_columns; ++j) {
            if (i != row && j != column)
                subMatrix.push_back((*this)(i, j));
        }
    }
    return Matrix(m_rows - 1, m_columns - 1, subMatrix);
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

Vector Matrix::linearTransform(Vector vector)
{
    return Vector(Matrix::matrixMultiplication((*this), Matrix(vector.size(), 1, vector.getVector())).getMatrix());
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

Vector Matrix::linearTransformation(Matrix matrix, Vector vector)
{
    return Vector(Matrix::matrixMultiplication(matrix, Matrix(vector.size(), 1, vector.getVector())).getMatrix());
}

double Matrix::calculateDeterminant()
{
    if (m_rows != m_columns) {
        return 0;
         //If the matrix is non-square throw an exception here in the future
    }
    if (m_rows == 2 && m_columns == 2)
        return m_matrix[0] * m_matrix[3] - m_matrix[1] * m_matrix[2];
    std::vector<double> minor;
    minor.reserve(m_columns);
    minor.resize(m_columns);
    for (int j = 0; j < m_columns; ++j) {
        minor[j] = (*this).getSubMatrix(0, j).calculateDeterminant();
    }
    double det = 0;
    for (int j = 0; j < minor.size(); ++j) {
        det += Exponent::power(-1, (2 + j)) * (*this)(0, j) * minor[j];
    }
    return det;
}

Matrix Matrix::transpose()
{
    Matrix transpose(m_columns, m_rows);
    for (int i = 0; i < m_rows; ++i) {
        for (int j = 0; j < m_columns; ++j) {
            transpose(i, j) = (*this)(j, i);
        }
    }
    return transpose;
}

Matrix Matrix::matrixTranspose(Matrix matrix)
{
    Matrix transpose(matrix.m_columns, matrix.m_rows);
    for (int i = 0; i < transpose.m_rows; ++i) {
        for (int j = 0; j < transpose.m_columns; ++j) {
            transpose(i, j) = matrix(j, i);
        }
    }
    return transpose;
}

Matrix Matrix::getCofactorMatrix()
{
    Matrix cofactor(m_rows, m_columns);
    for (int i = 0; i < m_rows; ++i) {
        for (int j = 0; j < m_columns; ++j) {
            cofactor(i, j) = (*this).getSubMatrix(i, j).calculateDeterminant() * Exponent::power(-1, (i + j + 2));
        }
    }
    return cofactor;
}

Matrix Matrix::cofactorMatrix(Matrix matrix)
{
    Matrix cofactor(matrix.m_rows, matrix.m_columns);
    for (int i = 0; i < cofactor.m_rows; ++i) {
        for (int j = 0; j < cofactor.m_columns; ++j) {
            cofactor(i, j) = matrix.getSubMatrix(i, j).calculateDeterminant() * Exponent::power(-1, (i + j + 2));
        }
    }
    return cofactor;
}

Matrix Matrix::getAdjugateMatrix()
{
    return (*this).getCofactorMatrix().transpose();
}

Matrix Matrix::adjugateMatrix(Matrix matrix)
{
    return Matrix::matrixTranspose(Matrix::cofactorMatrix(matrix));
}

Matrix Matrix::getInverseMatrix()
{
    double det((*this).calculateDeterminant());
    if (!det) {
        Matrix zero(1, 1);
        zero.zero();
        return zero;
    }
    return Matrix::matrixScalarMultiplication((*this).getAdjugateMatrix(), (1/det));
}

Matrix Matrix::inverseMatrix(Matrix matrix)
{
    double det(matrix.calculateDeterminant());
    if (!det) {
        Matrix zero(1, 1);
        zero.zero();
        return zero;
    }
    return Matrix::matrixScalarMultiplication(adjugateMatrix(matrix), (1/det));
}
