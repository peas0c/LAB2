#include "matrix.h"

#include <iostream>

void inputMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        std::cout << "Enter elements for row " << i + 1 << ":" << std::endl;
        for (int j = 0; j < cols; j++) {
            std::cin >> matrix[i][j];
        }
    }
}

void findMinMaxRows(int** matrix, int rows, int cols, int& minRow, int& maxRow) {
    int minSum = INT_MAX;
    int maxSum = INT_MIN;

    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += matrix[i][j];
        }

        if (rowSum < minSum) {
            minSum = rowSum;
            minRow = i;
        }

        if (rowSum > maxSum) {
            maxSum = rowSum;
            maxRow = i;
        }
    }
}