#include <stdio.h>

int main(){
    int i, j, n=3;
        char ch = 'A';
        // int num=1;
    for(i=0; i<n; i++){
        // char ch = 'A';
        for(j=0;j<n;j++){
            printf("%c", ch);
            ch = ch+1;
            // printf("%d", num);
            // num++;
        }
        printf("\n");
    }
}