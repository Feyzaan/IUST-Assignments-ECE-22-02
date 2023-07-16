// Perimeter of a rectangle
#include <stdio.h>
int main () {
    int length, width;
    printf("Length:");
    scanf("%i",&length);
    
    printf("Width:");
    scanf("%i", &width);
    
    printf("The perimeter of rectangle is:%i", 2*length+ 2*width);
    return 0;
}