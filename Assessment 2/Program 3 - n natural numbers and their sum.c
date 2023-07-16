// n terms of natural numbers and their sum	
#include <stdio.h>
int main () {
	int i,n,sum;
	sum = 0;
	
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	
	printf("%d natural numbers: \n",n);
	
	for (i=1;i<=n;i++) {
		printf("%d\n",i);
		sum +=i;	
	}
	printf("Sum of %d natural numbers: %d",n,sum);
}