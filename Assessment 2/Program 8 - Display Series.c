//Display series 1 2 3 4 5 ... n
#include <stdio.h>
int main () {

	int i,n,sum;
	sum = 0;
	printf("Enter the range: ");
	scanf("%d",&n);
	
	for (i=1;i<=n;i++) {	
	printf("%d \n",i);
	sum += i;
	
	
	}
	printf("Sum of the series: %d",sum);
	
	return 0;
}
