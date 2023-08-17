#include <stdio.h>

int main()
{ 
    int a[10], i, j, n, temp, min;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    // Insertion Sort
    for (i = 0; i < n; i++) {
        min = i;
        for (j = i+1; j < n; j++) {
            if (a[min] > a[j]) {
                min = j;
            }
        }
        if (i != min) { 
            temp = a[min];
            a[min] = a[i];
            a[i] = temp;
        }
    }
    printf("Sorted Array: \n");
    for (i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }
    return 0;
}
