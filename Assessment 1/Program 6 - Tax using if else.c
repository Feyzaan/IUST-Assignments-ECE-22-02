// Tax using if else
#include <stdio.h>
int main () {
	float m;
	
	printf("Enter Income: ");
	scanf("%f",&m);
	
	if (m<150000) { 
	printf("No Tax.");
	}
	else if (m > 150000 && m <= 300000) {
		printf("Tax: %.2f INR only", m*10/100);
	} else if ( m > 300000 && m <= 500000) {
		printf("Tax: %.2f INR only", m*20/100);
	} else if ( m > 500000) {
		printf("Tax: %.2f INR only", m*30/100);
	}
		
	return 0;
}