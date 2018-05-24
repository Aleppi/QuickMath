#include "vector.h"
#include "../Math/exponent.h"
#include "../Trig/trigFunctions.h"
#include <iostream>

std::vector<double> Vector::getVector()
{
    return m_coordinates;
}

Vector& Vector::addVector(Vector vector)
{
    if (m_coordinates.size() != vector.m_coordinates.size())
        return *this;
    for (int i = 0; i < m_coordinates.size(); ++i)
        m_coordinates[i] += vector.m_coordinates[i];
    return *this;
}

Vector& Vector::subtractVector(Vector vector)
{
    if (m_coordinates.size() != vector.m_coordinates.size())
        return *this;
    for (int i = 0; i < m_coordinates.size(); ++i)
        m_coordinates[i] -= vector.m_coordinates[i];
    return *this;
}

Vector& Vector::scalarMultiply(double scalar)
{
    for (int i = 0; i < m_coordinates.size(); ++i)
        m_coordinates[i] *= scalar;
    return *this;
}

Vector Vector::vectorSum(Vector vector1, Vector vector2)
{
    if (size(vector1) != size(vector2))
        return Vector(0); //return null vector if the vectors can't be added
    std::vector<double> sumArr(size(vector1));
    sumArr.reserve(size(vector1));
    for (int i = 0; i < size(vector1); ++i) {
        sumArr[i] = (vector1[i] + vector2[i]);
    }
    Vector sum(sumArr);
    return sum;
}

//Vector Vector::vectorDifference(Vector vector1, Vector vector2)
//{
//    Vector difference(vector1.m_x - vector2.m_x, vector1.m_y - vector2.m_y, vector1.m_z - vector2.m_z);
//    return difference;
//}
//
//Vector Vector::vectorScalarMultiplication(Vector vector, double scalar)
//{
//    Vector product(vector.m_x * scalar, vector.m_y * scalar, vector.m_z * scalar);
//    return product;
//}
//
//double Vector::dotProduct(Vector vector1, Vector vector2)
//{
//    double product(vector1.m_x * vector2.m_x + vector1.m_y * vector2.m_y + vector1.m_z * vector2.m_z);
//    return product;
//}
//
//Vector Vector::crossProduct(Vector vector1, Vector vector2)
//{
//    int x(vector1.m_y * vector2.m_z - vector1.m_z * vector2.m_y);
//    int y(vector1.m_z * vector2.m_x - vector1.m_x * vector2.m_z);
//    int z(vector1.m_x * vector2.m_y - vector1.m_y * vector2.m_x);
//    Vector product(x, y, z);
//    return product;
//}
//
//double Vector::getLength()
//{
//    double length(Exponent::sqRoot(Exponent::power(m_x, 2) + Exponent::power(m_y, 2) + Exponent::power(m_z, 2)));
//    return length;
//}
//
//double Vector::calculateLength(Vector vector)
//{
//    double length(Exponent::sqRoot(Exponent::power(vector.m_x, 2)  + Exponent::power(vector.m_y, 2) + Exponent::power(vector.m_z, 2)));
//    return length;
//}
//
//double Vector::calculateAngle(Vector vector1, Vector vector2)
//{
//    double angle(TrigFunctions::arccos(Vector::dotProduct(vector1, vector2) / (Vector::calculateLength(vector1) * Vector::calculateLength(vector2))));
//    return angle;
//}
