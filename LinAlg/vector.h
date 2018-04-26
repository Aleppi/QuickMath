#ifndef VECTOR_H
#define VECTOR_H
#include <array>

class Vector {
    public:
        Vector() {};
        Vector(int x, int y, int z) : m_x(x), m_y(y), m_z(z) {};
        std::array<int, 3> getVector();
        Vector& addVector(std::array<int, 3> vector);
        Vector& subtractVector(std::array<int, 3> vector);
        Vector& scalarMultiply(int scalar);
        static Vector vectorSum(std::array<int, 3> vector1, std::array<int, 3> vector2);
        static Vector vectorDifference(std::array<int, 3> vector1, std::array<int, 3> vector2);
        static Vector scalarProduct(std::array<int, 3> vector, int scalar);
        static int dotProduct(std::array<int, 3> vector1, std::array<int, 3> vector2);
        static Vector crossProduct(std::array<int, 3> vector1, std::array<int, 3> vector2);
        double getLength();
        static double calculateLength(std::array<int, 3> vector);
        static double calculateAngle(std::array<int, 3> vector1, std::array<int, 3> vector2);
    private:
        int m_x = 0;
        int m_y = 0;
        int m_z = 0;
};
#endif
