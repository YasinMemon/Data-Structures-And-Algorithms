#include <stdio.h>
#include <conio.h>

void binarySearch(int arr[], int size, int target){
    int sti = 0, endi = size-1;

    while (sti <= endi)
    {
        int mid = ( sti + endi )/2;
        if(target < arr[mid]){
            endi = mid-1;
        }else if(target > arr[mid]){
            sti = mid+1;
        }else{
            printf("%d is found at index %d", target, mid);
            return;
        }
    }
    printf("%d is not found in array", target);
    
}

int main(){
    int arr[] = { 1,3,5,6,7,8 };
    int n = sizeof(arr)/sizeof(int);

    binarySearch(arr, n, 72);
    return 0;
}