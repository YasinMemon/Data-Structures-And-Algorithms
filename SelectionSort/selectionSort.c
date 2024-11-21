#include <stdio.h>

void display(int *arr, int n){
    int i=0;

    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
        printf("\n");
}

void selectionSort(int arr[], int n){
    int i, j;
    for (i = 0; i < n; i++)
    {
        int smallIdx = i;
        for (j=i+1; j < n; j++)
        {
            if (arr[j] > arr[smallIdx])
            {
                smallIdx = j;
            }
        }
        int tmp;
        tmp = arr[smallIdx];
        arr[smallIdx] = arr[i];
        arr[i] = tmp;
    }
    
}   

int main(){
    int arr[] = { 12,34,54,56,43,22,34 };
    int n=7;

    display(arr, n);
    selectionSort(arr, n);
    display(arr, n);

}