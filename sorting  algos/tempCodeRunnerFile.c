#include <stdio.h>

void display(int arr[], int size){
    int i=0;
    for(i=0;i<size;i++){
        printf(" %d", arr[i]);
    }
}

int partician(int arr[], int low, int high){
    int pivot = arr[low];
    int i=low+1;
    int j=high;

    do{
        while(i <= high && arr[i] <= pivot){
            i++;
        }

        while(j >= low && arr[j] >= pivot){
            j--;
        }

        if(i<j){
            int tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        }
    }while(i<j);

    int tmp = arr[low];
        arr[low] = arr[j];
        arr[j] = tmp;

        return j;
}

void QuickSort(int arr[], int low, int high){
    int particianIdx;
    if(low < high){
        particianIdx = partician(arr, low, high);
        QuickSort(arr, low, particianIdx-1); 
        QuickSort(arr, particianIdx+1,high);
    }
}

int main(){
    int arr[] = {12,34,5,7,89,43,21,11,4,2};
    int size = sizeof(arr)/sizeof(int);
    
    display(arr, size);
    QuickSort(arr, 0, size-1);
    printf("Array after sorting\n");
    display(arr, size);
}