#include <iostream>
#include "Matrix.h"

using namespace std;

int main() {
        int matrix[3][4] = {{1, 0, 3, 0},
                        {0, 5, 6, 7},
                        {0, 9, 0, 11}};

    int numRows = sizeof(matrix) / sizeof(matrix[0]);

    // Подсчитываем суммы элементов между двумя нулями в каждой строке матрицы
    for (int i = 0; i < numRows; i++) {
        int* row = matrix[i];
        int rowSize = sizeof(matrix[i]) / sizeof(matrix[i][0]);
        int sum = sumBetweenZeros(row, rowSize);
        cout << "Сумма элементов между нулевх = " << i << ": " << sum << endl;
    }

    return 0;
}