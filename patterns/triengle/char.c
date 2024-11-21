#include <stdio.h>

int main(){
    int i,j,n=4;
    char ch = 'A';

    for(i=0;i<=n;i++){
        for(j=0;j<i-1;j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
}