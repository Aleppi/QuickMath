#include <array>
#include "vector.h"

std::array<int, 3> Vector::getVector()
{
    std::array<int, 3> vector{m_x, m_y, m_z};
    return vector;
}

Vector& Vector::addVector(std::array<int, 3> vector)
{
    m_x += vector[0];
    m_y += vector[1];
    m_z += vector[2];
    return *this;
}

Vector& Vector::subtractVector(std::array<int, 3> vector)
{
    m_x -= vector[0];
    m_y -= vector[1];
    m_z -= vector[2];
    return *this;
}

Vector& Vector::scalarMultiply(int scalar)
{
    m_x *= scalar;
    m_y *= scalar;
    m_z *= scalar;
    return *this;
}

Vector Vector::vectorSum(std::array<int, 3> vector1, std::array<int, 3> vector2)
{
    Vector sum(vector1[0] + vector2[0], vector1[1] + vector2[1], vector1[2] + vector2[2]);
    return sum;
}

Vector Vector::vectorDifference(std::array<int, 3> vector1, std::array<int, 3> vector2)
{
    Vector sum(vector1[0] - vector2[0], vector1[1] - vector2[1], vector1[2] - vector2[2]);
    return sum;
}

Vector Vector::scalarProduct(std::array<int, 3> vector, int scalar)
{
    Vector sum(vector[0] * scalar, vector[1] * scalar, vector[2] * scalar);
    return sum;
}

int Vector::dotProduct(std::array<int, 3> vector)
{
    int product = m_x * vector[0] + m_y * vector[1] + m_z * vector[2];
    return product;
}

Vector Vector::crossProduct(std::array<int, 3> vector)
{
    int x = m_y * vector[2] - m_z * vector[1];
    int y = m_z * vector[0] - m_x * vector[2];
    int z = m_x * vector[1] - m_y * vector[0];
    Vector product(x, y, z);
    return product;
}

double Vector::calculateAngle(std::array<int, 3> vector)
{
    double angle;
    return angle;
}
