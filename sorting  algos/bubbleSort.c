#include <stdio.h>
#include <stdlib.h>

void display(int arr[], int size){
    int i=0;
    for(i=0;i<size;i++){
        printf("%d\n", arr[i]);
    }
}

void bubble(int arr[], int n){
    int i,j,tmp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(arr[j] > arr[j+1]){
               tmp = arr[j];
               arr[j] = arr[j+1];
               arr[j+1] = tmp; 
            }
        }
    }
}

int main(){
    int arr[] = {12,34,5,7,89,43,21,11,4,2};
    int size = sizeof(arr)/sizeof(int);
    
    display(arr, size);
    bubble(arr, size);
    printf("Array after sorting\n");
    display(arr, size);
}