#include <stdio.h>

void display(int *arr, int n){
    int i=0;

    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
        printf("\n");
}

bubbleSort(int *arr, int n){
    int i, j, tmp;
    int isSorted = 0;

    for(i=0;i<n-1;i++){
        isSorted = 1;
        // printf("Array sort on pass number %d \n", i+1);
        for(j=0;j<n-1-i;j++){
            if(arr[j] > arr[j+1]){
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                isSorted = 0;
            }
        }
        if(isSorted){
            return;
        }
    }
}

int main(){
    int arr[] = { 12,34,54,56,43,22,34 };
    // int arr[] = { 12,22,34,34,43,54,56 };
    int n = 7;

    display(arr, n);
    bubbleSort(arr, n);
    display(arr, n);
}