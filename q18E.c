#include <stdio.h>

int main(){
    int  i, j;
    
    for(i=1; i<=4; i++){
        for(j=1; j<= 4-i; j++){
            printf(" ");
        }
        for(j=i; j>= 1; j--){
            printf("%d", j);
        }
        printf("\n");
    }
}