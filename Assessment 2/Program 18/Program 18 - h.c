#include <stdio.h>

int main() {
    int rows, i, j, number;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // Calculate the number to be printed
        number = i % 10; // Repeat the numbers from 1 to 9

        // Print spaces before the numbers
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print numbers in the current row
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("%d", number);
        }

        printf("\n");
    }

    return 0;
}
