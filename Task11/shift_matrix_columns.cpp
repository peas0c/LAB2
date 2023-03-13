#include "shift_matrix_columns.h"

void shiftColumns(int **matrix, int nRows, int nCols) {
    int temp;
    for (int j = 0; j < nCols; j++) {
        temp = matrix[nRows - 1][j];
        for (int i = nRows - 1; i > 0; i--)
            matrix[i][j] = matrix[i - 1][j];
        matrix[0][j] = temp;
    }
}