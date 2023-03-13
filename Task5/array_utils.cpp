#include "array_utils.h"

void split_by_sign(int* arr, int size, int* res_arr) {
    // ������� ��� ������������� � ������������� ���������
    int neg_index = 0, pos_index = size - 1;

    // ������ �� ��������� �������
    for (int i = 0; i < size; i++) {
        // ���� ������� �������������, �������� ��� � ������ ��������� �������
        if (arr[i] < 0) {
            res_arr[neg_index] = arr[i];
            neg_index++;
        }
        // ���� ������� �������������, �������� ��� � ����� ��������� �������
        else {
            res_arr[pos_index] = arr[i];
            pos_index--;
        }
    }
}