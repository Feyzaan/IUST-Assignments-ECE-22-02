#include <stdio.h>

int main() {
    int rows, i, j, number;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        for (number = i; number >= 1; number--) {
            printf("%d", number);
        }
        printf("\n");
    }
    return 0;
}
