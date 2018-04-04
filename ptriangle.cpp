//
// Created by aleppi on 4/4/18.
//

#include <iostream>
#include <vector>

typedef std::vector<std::vector<int>> vector2d;

vector2d calculateTriangle(int num);
void printTriangle(vector2d triangle);

vector2d calculateTriangle(int rows)
{
    vector2d vec;
    for (int i = 0; i < rows; ++i) {
        std::vector<int> row;
        for (int j = 0; j < i + 1; ++j) {
            if (i == 0 || j == 0)
                row.push_back(1);
            else if (i == 1 && j == 1)
                row.push_back(1);
            else
                row.push_back(vec[i - 1][j - 1] + vec[i - 1][j]);
        }
        vec.push_back(row);
    }
    return vec;
}

void printTriangle(vector2d triangle)
{
    for (int i = 0; i < triangle.size(); ++i) {
        for (int j = 0; j < triangle[i].size(); ++j) {
            std::cout << triangle[i][j] << " ";
        }
        std::cout << '\n';
    }
}