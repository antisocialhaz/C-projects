#include <stdio.h>

int main() {
    int n1,n2, i, j;

printf("Enter value of n1: ");
scanf("%d", &n1);

printf("Enter value of n2: ");
scanf("%d", &n2);
for(i=1; i<=n1; i++){
    for(j=1; j<=n2; j++){
        printf("%d ", j);
    }
}
}