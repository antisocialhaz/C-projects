#include <stdio.h>;

int main(){

    int n, sum, i;

    sum = 0;
printf("Enter the value of n: ");
scanf("%d", &n);
    for(i=1; i<=n; i++){
if(i%2 != 0 ){
    printf("%d ", i);
    sum += i;
}
    }
    printf("\nThe sum is %d", sum);
}