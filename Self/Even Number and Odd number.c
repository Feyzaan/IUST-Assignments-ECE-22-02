// Even Number and Odd number
#include<stdio.h>
int main() {
  int a;
    printf("Number:");
    scanf("%d",&a);
    
    int sol = (a % 2);
    
    if (sol ==0)
    printf("%d is an even number.",a);
    else printf("%d is an odd number.",a);
    
    return 0; 
}