#include "sort_array.h"

int sort_array(double* arr, int n) {
    int count = 0;
    bool swapped;

    for (int i = 0; i < n-1; i++) {
        swapped = false;
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                double temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true;
                count++;
            }
        }
        if (!swapped) {
            break;
        }
    }

    return count;
}