#include <iostream>
#include <vector>

const int ROWS = 3;
const int COLS = 3;

int main() {
    std::vector<std::vector<int>> matrix(ROWS, std::vector<int>(COLS));

    // Initializing the matrix
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            matrix[i][j] = i * COLS + j + 1;
        }
    }

    // Accessing elements of the matrix
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
