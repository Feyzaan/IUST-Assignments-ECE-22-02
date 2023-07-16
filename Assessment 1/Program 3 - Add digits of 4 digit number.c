
#include <stdio.h>
int main () {
	int num,total=0,rem;
	
	printf("Enter a 4 digit Number: ");
	scanf("%d",&num);
	
	while (num!=0) {
		
		rem = num % 10;
		total = total + rem;
		num /= 10;
		
	}
	printf("Total: %d\n",total);

	return 0;
}
