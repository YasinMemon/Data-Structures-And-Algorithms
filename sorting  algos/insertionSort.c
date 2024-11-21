#include <stdio.h>

void display(int arr[], int size){
    int i=0;
    for(i=0;i<size;i++){
        printf("%d\n", arr[i]);
    }
}

void insertionSort(int arr[], int size){
    int i=0;
    for(i=0;i<size-1;i++){
        int curr = arr[i];
        int j = i-1;

        while(j>=0 && arr[j] < curr){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = curr;
    }
}

int main(){
    int arr[] = {12,34,5,7,89,43,21,11,4,2};
    int size = sizeof(arr)/sizeof(int);
    
    display(arr, size);
    insertionSort(arr, size);
    printf("Array after sorting\n");
    display(arr, size);
}