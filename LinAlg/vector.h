#ifndef VECTOR_H
#define VECTOR_H

class Vector {
    public:
        Vector() {};
        Vector(double x, double y, double z) : m_x(x), m_y(y), m_z(z) {};
        void getVector(double coordinateArr[3]);
        Vector& addVector(Vector vector);
        Vector& subtractVector(Vector vector);
        Vector& scalarMultiply(double scalar);
        static Vector vectorSum(Vector vector1, Vector vector2);
        static Vector vectorDifference(Vector vector1, Vector vector2);
        static Vector vectorScalarMultiplication(Vector vector, double scalar);
        static double dotProduct(Vector vector1, Vector vector2);
        static Vector crossProduct(Vector vector1, Vector vector2);
        double getLength();
        static double calculateLength(Vector vector);
        static double calculateAngle(Vector vector1, Vector vector2);
    private:
        double m_x = 0;
        double m_y = 0;
        double m_z = 0;
};
#endif
