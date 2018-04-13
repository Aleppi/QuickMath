#ifndef VECTOR_H
#define VECTOR_H
#include <array>

class Vector {
    public:
        Vector() {}
        Vector(int x, int y, int z) : m_x(x), m_y(y), m_z(z) {}
        std::array<int, 3> getVector();
        Vector& addVector(std::array<int, 3> vector);
        Vector& subtractVector(std::array<int, 3> vector);
        Vector& scalarMultiply(int scalar);
        int dotProduct(std::array<int, 3> vector);
        Vector crossProduct(std::array<int, 3> vector);
    private:
        int m_x = 0;
        int m_y = 0;
        int m_z = 0;
};
#endif
