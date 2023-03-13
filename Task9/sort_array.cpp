#include "sort_array.h"

void sort_array(int* arr, int size)
{
    int negative_index = 0;
    int positive_index = size - 1;
    int temp;

    while (negative_index < positive_index) {
        // ���� ��������� ����� ������
        while (negative_index < size && arr[negative_index] >= 0) {
            negative_index++;
        }

        // ���� ��������� �������
        while (positive_index >= 0 && arr[positive_index] < 0) {
            positive_index--;
        }

        // ���� �� ����� �� ������
        if (negative_index < positive_index) {
            // Swap the elements
            temp = arr[negative_index];
            arr[negative_index] = arr[positive_index];
            arr[positive_index] = temp;
        }
    }

    // ��������� ����� � ���������� �������
    for (int i = 0; i < negative_index - 1; i++) {
        for (int j = i + 1; j < negative_index; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // ��������� ������� � ��������� �������
    for (int i = size - 1; i > positive_index + 1; i--) {
        for (int j = i - 1; j > positive_index; j--) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}