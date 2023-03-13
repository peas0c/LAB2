#include <iostream>
#include "swap.h"

int main() {
    int a = 5;
    int b = 10;

    std::cout << "Перед перестановкой: a = " << a << ", b = " << b << std::endl;

    swap(&a, &b);

    std::cout << "После перестановки: a = " << a << ", b = " << b << std::endl;

    return 0;
}