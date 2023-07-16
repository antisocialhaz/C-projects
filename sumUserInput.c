#include <stdio.h>

int main(){

int i,n, sum;
sum = 0;

printf("Enter the value of n: ");
scanf("%d", &n);

for(i=1; i<=n; i++){
    printf("%d ", i);
    sum += i;
}
printf("\nthe sum is %d", sum);

}