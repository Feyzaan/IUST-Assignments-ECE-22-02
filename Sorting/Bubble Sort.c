#include <stdio.h>

int main() {
    int a[10], i, j, n, temp;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    // Bubble Sort
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Sorted Array: \n");
    for (i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }
    return 0;
}