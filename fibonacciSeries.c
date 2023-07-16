#include <stdio.h>

int main() {
    int terms, i, first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    printf("Fibonacci Series up to %d terms:\n", terms);

    for (i = 0; i < terms; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }

    return 0;
}
