#include <stdio.h>

int main() {
    int rows, i, j, space;
    char star = '*';

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("%c", star);
        }
        printf("\n");
    }

    return 0;
}
