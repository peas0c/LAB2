#include <iostream>
#include "matrix.h"

int main() {
    int rows, cols;
    std::cout << "������� ����� ����� � �������� : ";
    std::cin >> rows >> cols;

    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }

    inputMatrix(matrix, rows, cols);

    // ������� ����������� � ������������ ����� � ������
    int minRow, maxRow;
    findMinMaxRows(matrix, rows, cols, minRow, maxRow);

    std::cout << "��� � ����������� ������: " << minRow + 1 << std::endl;
    std::cout << "��� � ������������ ������: " << maxRow + 1 << std::endl;

    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}