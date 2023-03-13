#include <iostream>
#include "sort_array.h"

int main()
{
    int arr[15] = { 4, -2, 7, 0, -8, 5, 1, -3, 6, -1, -9, 3, -6, -4, 2 };
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Исходный массив: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    sort_array(arr, size);

    std::cout << "Отсортированный массив: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}