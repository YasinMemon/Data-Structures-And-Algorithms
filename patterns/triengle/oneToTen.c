#include <stdio.h>

int main(){
    int i,j,n=4;
    int num = 1;

    for(i=0;i<n;i++){
        for(j=0;j<i+1;j++){
            printf("%d", num);
            num++;
        }
        printf("\n");
    }
}