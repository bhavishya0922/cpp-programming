/**
 * Problem: In-Place 90-Degree Clockwise Matrix Rotation
 * Author: Bhavishya Dewangan
 */
#include <iostream>
#include <vector>
#include <algorithm>

void rotateMatrix(std::vector<std::vector<int>> &mat) {
    int n = mat.size();
    // 1. Transpose matrix
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            std::swap(mat[i][j], mat[j][i]);
        }
    }
    // 2. Reverse each row
    for (int i = 0; i < n; i++) {
        std::reverse(mat[i].begin(), mat[i].end());
    }
}

int main() {
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    rotateMatrix(matrix);

    std::cout << "Rotated Matrix (90 deg clockwise):\n";
    for (const auto &row : matrix) {
        for (int val : row) std::cout << val << " ";
        std::cout << "\n";
    }
    return 0;
}
