// Display the series: 2 4 16 256 65536 .......

#include <stdio.h>
#include <math.h>

int main() {
    int terms, i;
    unsigned long long int currentTerm = 2;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    printf("Series: ");

    for (i = 0; i < terms; i++) {
        printf("%llu ", currentTerm);
        currentTerm = pow(currentTerm, 2);
    }

    return 0;
}
