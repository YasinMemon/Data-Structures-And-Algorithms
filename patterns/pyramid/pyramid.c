#include <stdio.h>

int main(){
    int i,j,n=4;

    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            printf(" ");
        }

        for(j=1;j<=i+1;j++){
            printf("%d",j);
        }

        for(j=i;j>0;j--){
            printf("%d",j);
        }

        printf("\n");
    }
    return 0;
}