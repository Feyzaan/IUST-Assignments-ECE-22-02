//Simple Calculator using switch
#include <stdio.h>
int main(){
	float a,b;
	char sign;
	printf("Enter the expression: ");
	scanf("%f %c %f",&a,&sign,&b);
	
	switch (sign) {
		case '+' : printf("Solution : %f",a+b);
			break;
		case '-' : printf("Solution : &f",a-b);
			break;
		case '*' : printf("Solution : %f",a*b);
			break;
		case '/' : printf("Solution: %f",a/b);
			break;
		default : printf("Invalid expression");
	}
	return 0;
} 