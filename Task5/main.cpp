#include <iostream>
#include "array_utils.h"

int main() {
    // Примеры массивов
    int arr1[] = {-1, 2, -3, 4, -5, 6};
    int arr2[] = {5, -4, 3, -2, 1, -6};
    int arr3[] = {-7, -8, -9, 10, 11, 12};

    int size = sizeof(arr1) / sizeof(arr1[0]);

    // Создание конечных массивов
    int res_arr1[size], res_arr2[size], res_arr3[size];

        split_by_sign(arr1, size, res_arr1);
    split_by_sign(arr2, size, res_arr2);
    split_by_sign(arr3, size, res_arr3);

    // Вывод конечных массивов
    std::cout << "Result 1: ";
    for (int i = 0; i < size; i++) {
        std::cout << res_arr1[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Result 2: ";
    for (int i = 0; i < size; i++) {
        std::cout << res_arr2[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Result 3: ";
    for (int i = 0; i < size; i++) {
        std::cout << res_arr3[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}