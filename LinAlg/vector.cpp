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

int Vector::dotProduct(std::array<int, 3> vector)
{
    int result = m_x * vector[1] + m_y * vector[2] + m_z * vector[3];
    return result;
}

Vector Vector::crossProduct(std::array<int, 3> vector)
{
    int x = m_y * vector[3] - m_z * vector[2];
    int y = m_z * vector[1] - m_x * vector[3];
    int z = m_x * vector[2] - m_y * vector[1];
    Vector result(x, y, z);
    return result;
}

double Vector::calculateAngle(std::array<int, 3> vector)
{
    double angle;
    return angle;
}
