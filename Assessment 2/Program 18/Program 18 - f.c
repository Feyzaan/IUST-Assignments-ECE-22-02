#include <stdio.h>

int main() {
    int rows, i, j, num, spaces;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
       
        for (spaces = 1; spaces <= rows - i; spaces++) {
            printf(" ");
        }
        for (num = i; num >= 1; num--) { 	 // Print numbers in descending order
            printf("%d", num);
        }
        for (num = 2; num <= i; num++) { 	  // Print numbers in ascending order
            printf("%d", num);
        }
        printf("\n");
    }
    return 0;
}
