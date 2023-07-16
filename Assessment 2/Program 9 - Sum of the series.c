// Sum of series
#include <stdio.h>
int main () {
	
	int i,n,sum;
	sum=0;
	
	printf("Enter the value of n: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++) {
		sum+=i;
	}
	
	printf("Sum of the series: %d",sum);
	return 0;
}