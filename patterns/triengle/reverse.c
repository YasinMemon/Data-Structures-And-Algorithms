#include <stdio.h>

int main(){
    int i,j,n=4;

    for(i=0;i<n;i++){
        for(j=i+1;j>0;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
}