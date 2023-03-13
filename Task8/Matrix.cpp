#include "Matrix.h"

// ������� ��� ���������� ����� ��������� ����� ����� ������ � ������ �������
int sumBetweenZeros(int* arr, int size) {
    int sum = 0;
    bool foundFirstZero = false;

    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            if (foundFirstZero) { // ������ ������ ����
                break;
            }
            foundFirstZero = true;
        } else if (foundFirstZero) {
            sum += arr[i];
        }
    }

    return sum;
}