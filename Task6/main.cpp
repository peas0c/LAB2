#include <iostream>
#include "array.h"

using namespace std;

int main() {
    const int n = 14;
    double a[n] = {1.2, 4.5, 2.3, 6.7, 3.4, 8.1, 5.6, 9.8, 7.6, 0.9, 2.1, 5.3, 7.2, 4.8};
    int count = 0;

    cout << "Исходный массив:" << endl;
    print_array(a, n);

    swap_halves(a, n, count);

    cout << "Массив после перестановки:" << endl;
    print_array(a, n);

    cout << "Количество перестановок: " << count << endl;

    return 0;
}