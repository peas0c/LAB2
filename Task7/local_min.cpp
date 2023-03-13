#include "local_min.h"

int countLocalMins(double* arr, int n) {
    int count = 0;
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] < arr[i-1] && arr[i] < arr[i+1]) {
            count++;
        }
    }
    return count;
}