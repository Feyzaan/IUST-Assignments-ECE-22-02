#include <stdio.h>

int main()
{ 
    int a[10], i, j, n,temp;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    // Selection Sort
    for (i = 0; i < n; i++) {
        for (j = i+1; j < n; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
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