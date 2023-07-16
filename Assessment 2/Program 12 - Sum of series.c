// Find the sum of series 1 3 5 7 ... n
#include <stdio.h>
int main () {
	
	int i,n,temp,sum;
	temp= -1,sum=0;
	
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("Series: \n");
	for(i=1;i<=n;i++){
		
		temp+=2;
		sum += temp;
		printf("%d\n",temp);
	}
	printf("The sum of the series: %d",sum);
	
	
	return 0;
}