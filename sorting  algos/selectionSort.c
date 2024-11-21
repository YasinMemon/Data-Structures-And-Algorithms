#include <stdio.h>

void display(int arr[], int size){
    int i=0;
    for(i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
}

void selectionSort(int arr[], int size){
   int i,j;
   for(i=0;i<size-1;i++){
    int si = i;
    for(j=i+1;j<size;j++){
        if(arr[j] < arr[si]){
            si = j;
        }
    }
        int tmp;
        tmp = arr[i];
        arr[i] = arr[si];
        arr[si] = tmp;
   }
}

int main(){
    int arr[] = {12,34,5,7,89,43,21,11,4,2};
    int size = sizeof(arr)/sizeof(int);
    
    display(arr, size);
    selectionSort(arr, size);
    printf("\nArray after sorting\n");
    display(arr, size);
}