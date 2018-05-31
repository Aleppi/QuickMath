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
    if (vector1.size() != vector2.size())
        return Vector(0); //return null vector if the vectors have different dimensions
    std::vector<double> sumArr(vector1.size());
    for (int i = 0; i < vector1.size(); ++i)
        sumArr[i] = vector1[i] + vector2[i];
    return Vector(sumArr);
}

Vector Vector::vectorDifference(Vector vector1, Vector vector2)
{
    if (vector1.size() != vector2.size())
        return Vector(0); //return null vector if the vectors have different dimensions
    std::vector<double> differenceArr(vector1.size());
    for (int i = 0; i < vector1.size(); ++i)
        differenceArr[i] = vector1[i] - vector2[i];
    return Vector(differenceArr);
}

Vector Vector::vectorScalarMultiplication(Vector vector, double scalar)
{
    std::vector<double> productArr(vector.size());
    for (int i = 0; i < vector.size(); ++i)
       productArr[i] = vector[i] * scalar;
    return Vector(productArr);
}

double Vector::dotProduct(Vector vector1, Vector vector2)
{
    if (vector1.size() != vector2.size())
        return 0; //return zero if the vectors have different dimensions
    double product = 0;
    for (int i = 0; i < vector1.size(); ++i)
        product += vector1[i] * vector2[i];
    return product;
}

Vector Vector::crossProduct(Vector vector1, Vector vector2)
{
    if (vector1.size() != vector2.size() || vector1.size() != 3)
        return Vector(0); //return null vector if the vectors have different dimensions or are not equal to 3
    return Vector((vector1[1] * vector2[2] - vector1[2] * vector2[1]), (vector1[2] * vector2[0] - vector1[0] * vector2[2]), (vector1[0] * vector2[1] - vector1[1] * vector2[0]));
}

double Vector::getLength()
{
    double lengthSquared = 0;
    for (int i = 0; i < m_coordinates.size(); ++i)
        lengthSquared += Exponent::power(m_coordinates[i], 2);
    return Exponent::sqRoot(lengthSquared);
}

double Vector::calculateLength(Vector vector)
{
    double lengthSquared = 0;
    for (int i = 0; i < vector.size(); ++i)
        lengthSquared += Exponent::power(vector[i], 2);
    return Exponent::sqRoot(lengthSquared);
}

double Vector::calculateAngle(Vector vector1, Vector vector2)
{
    double angle(TrigFunctions::arccos(Vector::dotProduct(vector1, vector2) / (Vector::calculateLength(vector1) * Vector::calculateLength(vector2))));
    return angle;
}


