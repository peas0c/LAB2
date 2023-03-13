#include "Matrix.h"

// Функция для нахождения суммы элементов между двумя нулями в строке матрицы
int sumBetweenZeros(int* arr, int size) {
    int sum = 0;
    bool foundFirstZero = false;

    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            if (foundFirstZero) { // найден второй ноль
                break;
            }
            foundFirstZero = true;
        } else if (foundFirstZero) {
            sum += arr[i];
        }
    }

    return sum;
}