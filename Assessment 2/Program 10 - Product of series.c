// Product of series
#include <stdio.h>
int main () {
	
	int i,n,prod;
	prod=1;
	
	printf("Enter the value of n: ");
	scanf("%d",&n);
	
	for ( i=1;i<=n;i++) {
		prod*=i;
	}	
	printf("The product of the series: %d",prod);
	return 0;
}