#include "swap_first_last.h"

void swap_first_last(int* pa, int* pla) {
    int temp = *pa;
    *pa = *pla;
    *pla = temp;
}