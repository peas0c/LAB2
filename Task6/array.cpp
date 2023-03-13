#include <iostream>
#include "array.h"

using namespace std;

void swap_halves(double* a, int n, int& count) {
    for (int i = 0; i < n / 2; i++) {
        swap(a[i], a[n/2 + i]);
        count++;
    }
}

void print_array(double* a, int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}