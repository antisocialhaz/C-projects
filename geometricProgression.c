#include <stdio.h>

int main() {
    int terms, i;
    int currentTerm = 2;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    printf("Series: ");

    for (i = 0; i < terms; i++) {
        printf("%d ", currentTerm);
        currentTerm *= 2;
    }

    return 0;
}