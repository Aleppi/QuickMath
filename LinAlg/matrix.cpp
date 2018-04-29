#include "matrix.h"
#include "vector.h"

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
