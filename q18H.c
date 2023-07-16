#include <stdio.h>

int main() {
    int i, j;
  
    int totalCharacters = 10; // Total number of characters including spaces
    int spaceCount = totalCharacters / 2; // Number of spaces in each row

    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= spaceCount; j++) {
            printf(" ");  
        }
        for (j = 1; j <= i; j++) {
            printf("%d ", i);  
         
        }
        spaceCount--; // Decrease the number of spaces for the next row
        printf("\n");
    }

    return 0;
}