#include <stdio.h>
#include <conio.h>

int binarySearch(int st, int arr[], int end, int target)
{
    while (st <= end)
    {
        int mid = (st + end) / 2;
        if (target < arr[mid])
        {
            end = mid - 1;
            // return binarySearch(st, arr, end, target);
        }
        else if (target > arr[mid])
        {
            st = mid + 1;
            // return binarySearch(st, arr, end, target);
        }else{
            return mid;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 3, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(int);
    int end = n - 1, target = 8;
    int flag = binarySearch(0, arr, end, target);

    if(flag != -1){
        printf("%d is found", target);
    }else{
        printf("%d is not found", target);
    }
    return 0;
}