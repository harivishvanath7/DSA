#include <iostream>

int main() {
    int rows = 4; // Number of rows in the pattern

    // Outer loop for rows
    for (int i = 0; i < rows; i++) {
        // Inner loop for spaces
        for (int j = 0; j < i; j++) {
            std::cout << " ";
        }
        // Inner loop for asterisks
        for (int k = 0; k < rows - i; k++) {
            std::cout << "*";
        }
        // Move to the next line after each row
        std::cout << std::endl;
    }

    return 0;
}
