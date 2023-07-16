// Simple Calculator using if elseif
#include <stdio.h>
int main () {
	float a,b;
	char sign;
	
	printf("Enter the expression: ");
	scanf("%f %c %f",&a,&sign,&b);
	
	if (sign == '+') {
		printf("Solution: %.2f",a+b);
	} else if (sign == '-') {
		printf("Solution: %.2f",a-b);
	} else if (sign == '*') {
		printf("Solution: %.2f", a*b);
	} else if (sign == '/') {
		printf(" Solution: %.2f",a/b);
	}else printf("Invalid expression.");
	
	return 0;
}