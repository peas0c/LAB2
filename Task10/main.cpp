#include <iostream>
#include "array_max.h"

using namespace std;

int main() {
    const int SIZE = 5;
    double arr1[SIZE] = {1.2, 2.1, 3.5, 4.8, 5.3};
    double arr2[SIZE] = {6.1, 7.9, 8.4, 9.2, 10.0};

    // Выводим исходные массивы
    cout << "Исходные массивы: " << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    // Меняем местами максимальные элементы
    swap_max_elements(arr1, SIZE, arr2, SIZE);

    // Выводим измененные массивы
    cout << "Измененные массивы: " << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}