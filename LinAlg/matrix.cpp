#include "matrix.h"
#include "vector.h"
#include <iostream>
//Matrix::VectorSet Matrix::getMatrix()
//{
//    VectorSet currentMatrix = {m_column1, m_column2, m_column3};
//    return currentMatrix;
//}

void Matrix::getMatrix(Vector vectorArr[3])
{
    vectorArr[0] = m_column1;
    vectorArr[1] = m_column2;
    vectorArr[2] = m_column3;
}

Matrix Matrix::matrixSum(Matrix matrix1, Matrix matrix2)
{
    Matrix sum(Vector::vectorSum(matrix1.m_column1, matrix2.m_column1), Vector::vectorSum(matrix1.m_column2, matrix2.m_column2), Vector::vectorSum(matrix1.m_column3, matrix2.m_column3));
    return sum;
}

Matrix Matrix::matrixDifference(Matrix matrix1, Matrix matrix2)
{
    Matrix difference(Vector::vectorDifference(matrix1.m_column1, matrix2.m_column1), Vector::vectorDifference(matrix1.m_column2, matrix2.m_column2), Vector::vectorDifference(matrix1.m_column3, matrix2.m_column3));
    return difference;
}

Matrix Matrix::matrixScalarMultiplication(Matrix matrix, double scalar)
{
    Matrix product(Vector::vectorScalarMultiplication(matrix.m_column1, scalar), Vector::vectorScalarMultiplication(matrix.m_column2, scalar), Vector::vectorScalarMultiplication(matrix.m_column3, scalar));
    return product;
}

Matrix Matrix::matrixMultiplication(Matrix matrix1, Matrix matrix2)
{
    Vector *matrix1Vectors = new Vector[3];
    matrix1.getMatrix(matrix1Vectors);
    double *column1Arr = new double[3];
    matrix1Vectors[0].getVector(column1Arr);
    double *column2Arr = new double[3];
    matrix1Vectors[1].getVector(column2Arr);
    double *column3Arr = new double[3];
    matrix1Vectors[2].getVector(column3Arr);   

    double *matrix1Arr = new double[9]
    {
        column1Arr[0], column2Arr[0], column3Arr[0],
        column1Arr[1], column2Arr[1], column3Arr[1],
        column1Arr[2], column2Arr[2], column3Arr[2]
    };

    Vector *matrix2Vectors = new Vector[3];
    matrix2.getMatrix(matrix2Vectors);
    matrix2Vectors[0].getVector(column1Arr);
    matrix2Vectors[1].getVector(column2Arr);
    matrix2Vectors[2].getVector(column3Arr);
    
    double *matrix2Arr = new double[9]
    {
        column1Arr[0], column2Arr[0], column3Arr[0],
        column1Arr[1], column2Arr[1], column3Arr[1],
        column1Arr[2], column2Arr[2], column3Arr[2]
    };
   
    double *matrixProductArr = new double[9];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            matrixProductArr[i * 3 + j] = Vector::dotProduct(Vector(matrix1Arr[i * 3 + 0], matrix1Arr[i * 3 + 1], matrix1Arr[i * 3 + 2]), Vector(matrix2Arr[0 * 3 + j], matrix2Arr[1 * 3 + j], matrix2Arr[2 * 3 + j]));
        }
    }
    Matrix product(Vector(matrixProductArr[0 * 3 + 0], matrixProductArr[1 * 3 + 0], matrixProductArr[2 * 3 + 0]), Vector(matrixProductArr[0 * 3 + 1], matrixProductArr[1 * 3 + 1], matrixProductArr[2 * 3 + 1]), Vector(matrixProductArr[0 * 3 + 2], matrixProductArr[1 * 3 + 2], matrixProductArr[2 * 3 + 2]));

    delete[] matrix1Vectors;
    delete[] matrix2Vectors;
    delete[] column1Arr;
    delete[] column2Arr;
    delete[] column3Arr;
    delete[] matrix1Arr;
    delete[] matrix2Arr; 
    delete[] matrixProductArr;
    return product;
}
