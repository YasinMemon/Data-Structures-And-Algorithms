#include <stdio.h>

void display(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf(" %d", arr[i]);
    }
    printf("\n");
}

int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    do {
        while (i <= high && arr[i] <= pivot) {
            i++;
        }

        while (j >= low && arr[j] > pivot) {
            j--;
        }

        if (i < j) {
            int tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        }
    } while (i < j);

    // Swap pivot with arr[j] to place pivot in its correct position
    int tmp = arr[low];
    arr[low] = arr[j];
    arr[j] = tmp;

    return j;
}

void QuickSort(int arr[], int low, int high) {
    if (low < high) {
        int partitionIdx = partition(arr, low, high);
        QuickSort(arr, low, partitionIdx - 1);
        QuickSort(arr, partitionIdx + 1, high);
    }
}

int main() {
    int arr[] = {12, 34, 5, 7, 89, 43, 21, 11, 4, 2};
    int size = sizeof(arr) / sizeof(int);

    printf("Array before sorting:\n");
    display(arr, size);

    QuickSort(arr, 0, size - 1);

    printf("Array after sorting:\n");
    display(arr, size);

    return 0;
}
