#include "vector.h"
#include "../Math/exponent.h"
#include "../Trig/trigFunctions.h"

void Vector::getVector(double coordinateArr[3])
{
    coordinateArr[0] = m_x;
    coordinateArr[1] = m_y;
    coordinateArr[2] = m_z;
}

Vector& Vector::addVector(Vector vector)
{
    m_x += vector.m_x;
    m_y += vector.m_y;
    m_z += vector.m_z;
    return *this;
}

Vector& Vector::subtractVector(Vector vector)
{
    m_x -= vector.m_x;
    m_y -= vector.m_y;
    m_z -= vector.m_z;
    return *this;
}

Vector& Vector::scalarMultiply(double scalar)
{
    m_x *= scalar;
    m_y *= scalar;
    m_z *= scalar;
    return *this;
}

Vector Vector::vectorSum(Vector vector1, Vector vector2)
{
    Vector sum(vector1.m_x + vector2.m_x, vector1.m_y + vector2.m_y, vector1.m_z + vector2.m_z);
    return sum;
}

Vector Vector::vectorDifference(Vector vector1, Vector vector2)
{
    Vector difference(vector1.m_x - vector2.m_x, vector1.m_y - vector2.m_y, vector1.m_z - vector2.m_z);
    return difference;
}

Vector Vector::vectorScalarMultiplication(Vector vector, double scalar)
{
    Vector product(vector.m_x * scalar, vector.m_y * scalar, vector.m_z * scalar);
    return product;
}

double Vector::dotProduct(Vector vector1, Vector vector2)
{
    double product(vector1.m_x * vector2.m_x + vector1.m_y * vector2.m_y + vector1.m_z * vector2.m_z);
    return product;
}

Vector Vector::crossProduct(Vector vector1, Vector vector2)
{
    int x(vector1.m_y * vector2.m_z - vector1.m_z * vector2.m_y);
    int y(vector1.m_z * vector2.m_x - vector1.m_x * vector2.m_z);
    int z(vector1.m_x * vector2.m_y - vector1.m_y * vector2.m_x);
    Vector product(x, y, z);
    return product;
}

double Vector::getLength()
{
    double length(Exponent::sqRoot(Exponent::power(m_x, 2) + Exponent::power(m_y, 2) + Exponent::power(m_z, 2)));
    return length;
}

double Vector::calculateLength(Vector vector)
{
    double length(Exponent::sqRoot(Exponent::power(vector.m_x, 2)  + Exponent::power(vector.m_y, 2) + Exponent::power(vector.m_z, 2)));
    return length;
}

double Vector::calculateAngle(Vector vector1, Vector vector2)
{
    double angle(TrigFunctions::arccos(Vector::dotProduct(vector1, vector2) / (Vector::calculateLength(vector1) * Vector::calculateLength(vector2))));
    return angle;
}
