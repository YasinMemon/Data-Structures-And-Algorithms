#include <stdio.h>

void display(int *arr, int n){
    int i=0;

    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
        printf("\n");
}

void insertionSort(int *arr, int n){
    int key,j,i;

    for(i=0; i<=n-1;i++){
        key=arr[i];
        j=i-1;

        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }
}

int main(){
    int arr[] = { 12,34,54,56,43,22,34 };
    int n=7;

    display(arr, n);
    insertionSort(arr, n);
    display(arr, n);
}