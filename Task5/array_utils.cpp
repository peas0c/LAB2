#include "array_utils.h"

void split_by_sign(int* arr, int size, int* res_arr) {
    // Индексы для отрицательных и положительных элементов
    int neg_index = 0, pos_index = size - 1;

    // Проход по исходному массиву
    for (int i = 0; i < size; i++) {
        // Если элемент отрицательный, помещаем его в начало конечного массива
        if (arr[i] < 0) {
            res_arr[neg_index] = arr[i];
            neg_index++;
        }
        // Если элемент положительный, помещаем его в конец конечного массива
        else {
            res_arr[pos_index] = arr[i];
            pos_index--;
        }
    }
}