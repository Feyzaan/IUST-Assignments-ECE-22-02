// Number divisibility
#include<stdio.h>
int main() {
    int a, b;
   
    printf("Divident:");
    scanf("%d",&b);
    
    printf("Divisor:");
    scanf("%d",&a);
    
    int sol = (b % a);
    
    if (sol ==0)
    printf("%d is divisible by %d",b,a);
    else printf("%d is not divisible by %d",b,a);
    
    return 0; 
}
