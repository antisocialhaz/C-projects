#include <stdio.h>;

int main(){

    int n, i, sum, data[10];
    sum = 0;
    
    for(i=0; i < 10; i++){
        printf("Enter the value: ");
        scanf("%d", &data[i]);
        sum += data[i];
    }
    
    printf("The sum is %d and the mean is %d", sum, sum/10);
}