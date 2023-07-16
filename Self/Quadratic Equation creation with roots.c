// Quadratic Equation creation with roots
#include <stdio.h>
#include <math.h>

int main() {
    float x1,x2;
    
    printf("Enter the first root: ");
    scanf("%f",&x1);
   
    printf("Enter the second root: ");
    scanf("%f",&x2);
    
    float a= 1.00;
    float b = -(x1+x2);
    float c = (x1*x2);
    
    printf("The quadratic equation is : x^2+(%.2f)x+(%.2f)",b,c);
}