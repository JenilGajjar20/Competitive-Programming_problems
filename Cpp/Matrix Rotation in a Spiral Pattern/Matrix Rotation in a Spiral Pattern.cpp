#include <iostream>
#include <vector>

void rotateMatrixInSpiralPattern(std::vector<std::vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    int topRow = 0, bottomRow = rows - 1, leftCol = 0, rightCol = cols - 1;
    
    while (topRow < bottomRow && leftCol < rightCol) {
        int prev = matrix[topRow + 1][leftCol];
        
        // Move elements of top row from left to right
        for (int i = leftCol; i <= rightCol; i++) {
            int temp = matrix[topRow][i];
            matrix[topRow][i] = prev;
            prev = temp;
        }
        topRow++;
        
        // Move elements of rightmost column from top to bottom
        for (int i = topRow; i <= bottomRow; i++) {
            int temp = matrix[i][rightCol];
            matrix[i][rightCol] = prev;
            prev = temp;
        }
        rightCol--;
        
        // Move elements of bottom row from right to left
        for (int i = rightCol; i >= leftCol; i--) {
            int temp = matrix[bottomRow][i];
            matrix[bottomRow][i] = prev;
            prev = temp;
        }
        bottomRow--;
        
        // Move elements of leftmost column from bottom to top
        for (int i = bottomRow; i >= topRow; i--) {
            int temp = matrix[i][leftCol];
            matrix[i][leftCol] = prev;
            prev = temp;
        }
        leftCol++;
    }
}

int main() {
    std::vector<std::vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    std::cout << "Original Matrix:" << std::endl;
    for (const auto& row : matrix) {
        for (int num : row) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
    
    rotateMatrixInSpiralPattern(matrix);
    
    std::cout << "\nRotated Matrix:" << std::endl;
    for (const auto& row : matrix) {
        for (int num : row) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
    
    return 0;
}
