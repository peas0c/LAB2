#include <iostream>
#include "sort_array.h"

int main() {
    const int N = 12;
    double arr[N];

    std::cout << "Enter " << N << " real numbers: ";
    for (int i = 0; i < N; i++) {
        std::cin >> arr[i];
    }

    int count = sort_array(arr, N);

    std::cout << "Sorted array: ";
    for (int i = 0; i < N; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Number of swaps: " << count << std::endl;

    return 0;
}