#ifndef PASCAL_H
#define PASCAL_H
#include <vector>

class Pascal {
    public:
        typedef std::vector<std::vector<int>> vector2d;
        Pascal(int rows) : m_rows(rows) {}
        vector2d calculateTriangle(int rows);
        void printTriangle(vector2d triangle);
    private:
        int m_rows = 0;
};
#endif
