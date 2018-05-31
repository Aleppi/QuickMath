#ifndef OPERATORS_H
#define OPERATORS_H
#include "../LinAlg/vector.h"
#include "../LinAlg/matrix.h"

Vector operator+(const Vector &v1, const Vector &v2)
{
    return Vector::vectorSum(v1, v2);
}

Vector operator-(const Vector &v1, const Vector &v2)
{
    return Vector::vectorDifference(v1, v2);
}

Vector operator*(const Vector &v, const double &s)
{
    return Vector::vectorScalarMultiplication(v, s);
}

Vector operator*(const double &s, const Vector &v)
{
    return Vector::vectorScalarMultiplication(v, s);
}

Vector operator*(const Matrix &m, const Vector &v)
{
    return Matrix::linearTransformation(m, v);
}

Vector operator*(const Vector &v, const Matrix &m)
{
    return Matrix::linearTransformation(m, v);
}

double operator*(const Vector &v1, const Vector &v2)
{
    return Vector::dotProduct(v1, v2);
}

Matrix operator+(const Matrix &m1, const Matrix &m2)
{
    return Matrix::matrixSum(m1, m2);
}

Matrix operator-(const Matrix &m1, const Matrix &m2)
{
    return Matrix::matrixDifference(m1, m2);
}

Matrix operator*(const Matrix &m, const double &s)
{
    return Matrix::matrixScalarMultiplication(m, s);
}

Matrix operator*(const double &s, const Matrix &m)
{
    return Matrix::matrixScalarMultiplication(m, s);
}

Matrix operator*(const Matrix &m1, const Matrix &m2)
{
    return Matrix::matrixMultiplication(m1, m2);
}
#endif
