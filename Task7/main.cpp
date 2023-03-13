#include <iostream>
#include "local_min.h"

using namespace std;

int main() {
    double arr[] = {5, 3, 1, 2, 4, 7, 6, 8, 9, 11, 10, 12, 14, 13};
    int n = sizeof(arr) / sizeof(double);
    
    int count = countLocalMins(arr, n);
    
    cout << "Количество локальных минимумов: " << count << endl;
    
    return 0;
}