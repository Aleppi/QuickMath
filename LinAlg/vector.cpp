#include <array>
#include "vector.h"

std::array<int, 3> Vector::getVector()
{
    std::array<int, 3> vector{m_x, m_y, m_z};
    return vector;
}

Vector& Vector::addVector(std::array<int, 3> vector)
{
    m_x += vector[1];
    m_y += vector[2];
    m_z += vector[3];
    return *this;
}

Vector& Vector::subtractVector(std::array<int, 3> vector)
{
    m_x -= vector[1];
    m_y -= vector[2];
    m_z -= vector[3];
    return *this;
}

Vector& Vector::scalarMultiply(int scalar)
{
    m_x *= scalar;
    m_y *= scalar;
    m_z *= scalar;
    return *this;
}
