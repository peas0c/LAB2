#include <iostream>
#include "swap_first_last.h"

int main() {
    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    int* a = new int[n];
    int* pa = &a[0];
    int* pla = &a[n-1];

    std::cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::cout << "Before swap: ";
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;

    swap_first_last(pa, pla);

    std::cout << "After swap: ";
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;

    delete[] a;

    return 0;
}