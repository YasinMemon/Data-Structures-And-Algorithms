#include <stdint.h>

int main(){
    int i,j,n=4;

    for(i=0;i<n;i++){
        for(j=0;j<i+1;j++){
            printf("%d", i+1);
        }
        printf("\n");
    }
}