#include <stdio.h>
int main () {
	
	float n,sum;
	int i;
	 
	sum = 0;
	
	for(i=1;i<=10;i++){
		printf("Number %d:",i);
		scanf("%f",&n);
		
		sum += n; // sum = sum +n 
	}
	
	printf("The sum of the numbers: %f \n",sum);
	
	float avg;
	avg = sum/10;
	
	printf("The average of the numbers: %.2f",avg);
	
	return 0;
}