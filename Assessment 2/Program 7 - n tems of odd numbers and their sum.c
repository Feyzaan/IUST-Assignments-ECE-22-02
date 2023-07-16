// n terms of odd numbers and their sum
#include <stdio.h>
int main () {
	
	int i,n,temp,sum;
	temp = -1;
	
	printf("Enter the value of n: ");
	scanf("%d",&n);
	
	printf("%d terms of odd natural numbers are: \n",n);
	for ( i = 1; i <=n; i++) {
		temp = temp + 2;
		sum+=temp;
		printf("%d\n",temp);
	}
	printf("The sum of %d odd natural numbers: %d",n,sum);
	return 0;
}