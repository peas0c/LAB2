#include <iostream>
#include "shift_matrix_columns.h"

int main() {
    int nRows = 3;
    int nCols = 4;

    int **matrix = new int *[nRows];
    for (int i = 0; i < nRows; i++)
        matrix[i] = new int[nCols];

    // Создание матрицы
    for (int i = 0; i < nRows; i++)
        for (int j = 0; j < nCols; j++)
            matrix[i][j] = i * nCols + j + 1;

    // Вывод исходной матрицы
    std::cout << "Исходная матрица:\n";
    for (int i = 0; i < nRows; i++) {
        for (int j = 0; j < nCols; j++)
            std::cout << matrix[i][j] << " ";
        std::cout << std::endl;
    }

    // Сдвиг столбцов матрицы на один столбец вправо
    shiftColumns(matrix, nRows, nCols);

        std::cout << "Матрица после сдвига:\n";
    for (int i = 0; i < nRows; i++) {
        for (int j = 0; j < nCols; j++)
            std::cout << matrix[i][j] << " ";
        std::cout << std::endl;
    }
    for (int i = 0; i < nRows; i++)
        delete[] matrix[i];
    delete[] matrix;

    return 0;
}