#include <array>
#include "vector.h"
#include "../Math/exponent.h"

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
    Vector difference(vector1[0] - vector2[0], vector1[1] - vector2[1], vector1[2] - vector2[2]);
    return difference;
}

Vector Vector::scalarProduct(std::array<int, 3> vector, int scalar)
{
    Vector product(vector[0] * scalar, vector[1] * scalar, vector[2] * scalar);
    return product;
}

int Vector::dotProduct(std::array<int, 3> vector1, std::array<int, 3> vector2)
{
    int product(vector1[0] * vector2[0] + vector1[1] * vector2[1] + vector1[2] * vector2[2]);
    return product;
}

Vector Vector::crossProduct(std::array<int, 3> vector1, std::array<int, 3> vector2)
{
    int x(vector1[1] * vector2[2] - vector1[2] * vector2[1]);
    int y(vector1[2] * vector2[0] - vector1[0] * vector2[2]);
    int z(vector1[0] * vector2[1] - vector1[1] * vector2[0]);
    Vector product(x, y, z);
    return product;
}

double Vector::getLength()
{
    double length(Exponent::sqRoot(Exponent::power(m_x, 2) + Exponent::power(m_y, 2) + Exponent::power(m_z, 2)));
    return length;
}

double Vector::calculateLength(std::array<int, 3> vector)
{
    double length(Exponent::sqRoot(Exponent::power(vector[0], 2)  + Exponent::power(vector[1], 2) + Exponent::power(vector[2], 2)));
    return length;
}

double Vector::calculateAngle(std::array<int, 3> vector1, std::array<int, 3> vector2)
{
    double angle;
    return angle;
}
