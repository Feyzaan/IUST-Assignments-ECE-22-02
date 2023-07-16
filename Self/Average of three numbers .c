// Average of three numbers 
#include<stdio.h>
int main() {
  int a,b,c;
  printf("Number 1: ");
  scanf("%d", &a);
  
  printf("Number 2: ");
  scanf("%d", &b);
  
  printf("Number 3: ");
  scanf("%d", &c);
  
  int avg = ((a+b+c)/3);
  printf("Average is : %d",avg);
    return 0; 
}