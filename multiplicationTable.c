#include <stdio.h>;

int main(){

    int length, n, i;
    
printf("Enter the desired length of table: ");
scanf("%d", &length);

printf("Enter the value of n: ");
scanf("%d", &n);

for (i= 1; i<=length; i++){
    printf("\n%d", n*i);
}

}