#include <stdio.h>

int binarySearch(int arr[], int size){
    int st = 0, end = size-1, target;
    
    printf("Enter Element to search\t");
    scanf("%d",&target);

    while (st <= end)
    {
        int mid = (st+end)/2;
        if(target < arr[mid]){
            end = mid-1;
        }else if(target > arr[mid]){
            st = mid+1;
        }else{
            return 1;        
        }
    }
    return 0;
}

int main(){
    int arr[] = {23,44,56,77,89};
    int size = sizeof(arr)/sizeof(int);

    int result = binarySearch(arr, size);
    if(result){
        printf("Target found in the array");
    }else{
        printf("Target not found");
    }
    return 0;
}