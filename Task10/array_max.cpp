#include "array_max.h"

void swap_max_elements(double* arr1, int size1, double* arr2, int size2) {
    // »щем максимальный элемент первого массива
    double max1 = arr1[0];
    int max1_index = 0;
    for (int i = 1; i < size1; i++) {
        if (arr1[i] > max1) {
            max1 = arr1[i];
            max1_index = i;
        }
    }
    
    // »щем максимальный элемент второго массива
    double max2 = arr2[0];
    int max2_index = 0;
    for (int i = 1; i < size2; i++) {
        if (arr2[i] > max2) {
            max2 = arr2[i];
            max2_index = i;
        }
    }
    
    // ћен€ем местами максимальные элементы
    double temp = arr1[max1_index];
    arr1[max1_index] = arr2[max2_index];
    arr2[max2_index] = temp;
}