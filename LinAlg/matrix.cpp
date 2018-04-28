#include "matrix.h"

Matrix::VectorSet Matrix::getMatrix()
{
    VectorSet currentMatrix = {m_column1, m_column2, m_column3};
    return currentMatrix;
}
