#include <stdio.h>

void display(int *arr, int n){
    int i=0;

    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
        printf("\n");
}

void insertionSort(int *arr, int n){
    int i,j,key;

    for(i=1;i<=n-1;i++){
        key = arr[i];
        j=i-1;

        while (j>=0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }
}

int main(){
    int arr[] = { 44, 11, 33, 44, 32, 21 ,32, 2, 1, 34};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("%d",n);
    display(arr, n);
    insertionSort(arr, n);
    display(arr, n);
}