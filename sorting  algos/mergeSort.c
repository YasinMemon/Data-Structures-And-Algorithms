#include <stdio.h>

void display(int arr[], int n){
    int i;

    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
}

void merge(int a[], int mid, int low, int high){
    int i,j,k,b[100];

    i=low;
    j=mid+1;
    k=low; 

    while(i <= mid && j <= high){
        if(a[i] < a[j]){
            b[k] = a[i];
            i++; k++;
        }else{
            b[k] = a[j];
            j++; k++;
        }
    }

    while(i <= mid){
            b[k] = a[i];
            i++;k++;
        }

        while(j <= high){
            b[k] = a[j];
            k++;j++;
        }
    int m;
    for (m = low; m <= high; m++) {
        a[m] = b[m];
    }
}

void mergeSort(int a[], int low, int high){
    int mid;
    if(low < high){
        mid = (low + high)/2;
        mergeSort(a,low,mid);
        mergeSort(a,mid+1,high);
        merge(a,mid,low,high);
    }
}

int main(){
    int arr[] = {12,4,45,6,77,8};
    int n = sizeof(arr)/sizeof(int);

    printf("Array before sorting....\n");
    display(arr, n);

    mergeSort(arr, 0, n-1);
    
    printf("\nArray after sorting...\n");
    display(arr ,n);

    return 0;
}

