#ifndef VECTOR_H
#define VECTOR_H
#include <vector>

class Vector {
    public:
        Vector(double x)
        {
           m_coordinates.reserve(1);
           m_coordinates = {x};
           m_coordinates.resize(1);
        }
        Vector(double x, double y)
        {
           m_coordinates.reserve(2);
           m_coordinates = {x, y};
           m_coordinates.resize(2);
        }
        Vector(double x, double y, double z)
        {
           m_coordinates.reserve(3);
           m_coordinates = {x, y, z};
           m_coordinates.resize(3);
        }
        Vector(double x, double y, double z, double w)
        {
           m_coordinates.reserve(4);
           m_coordinates = {x, y, z, w};
           m_coordinates.resize(4);
        }
        Vector(std::vector<double> coordinates)
        {
           m_coordinates.reserve(coordinates.size());
           //m_coordinates = coordinates;
           for (int i = 0; i < coordinates.size(); ++i)
               m_coordinates.push_back(coordinates[i]);
           m_coordinates.resize(coordinates.size());
        }
        double& operator[](const int index)
        {
            return m_coordinates[index];
        }
        const double& operator[](const int index) const
        {
            return m_coordinates[index];
        }
        friend int size(Vector &vector)
        {
            return vector.m_coordinates.size();
        }
        std::vector<double> getVector();
        Vector& addVector(Vector vector);
        Vector& subtractVector(Vector vector);
        Vector& scalarMultiply(double scalar);
        static Vector vectorSum(Vector vector1, Vector vector2);
//        static Vector vectorDifference(Vector vector1, Vector vector2);
//        static Vector vectorScalarMultiplication(Vector vector, double scalar);
//        static double dotProduct(Vector vector1, Vector vector2);
//        static Vector crossProduct(Vector vector1, Vector vector2);
//        double getLength();
//        static double calculateLength(Vector vector);
//        static double calculateAngle(Vector vector1, Vector vector2);
    private:
        std::vector<double> m_coordinates; 
};
#endif
