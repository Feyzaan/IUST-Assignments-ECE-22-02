//Reverse

#include <stdio.h>
int main () {
	int num,temp,reverse=0,rem;
	
	printf("Enter Number: ");
	scanf("%d",&num);
	
	temp = num;

//Reverse of a Number
	while (temp!=0) {
		
		rem = temp % 10;
		reverse = reverse * 10 + rem;
		temp /= 10;
		
	}
	printf("Reverse: %d\n",reverse);
// Palindrome
	if ( reverse == num) {
		printf("This number is a Palindrome.");
	} else printf ("This number is not a Palindrome.");
	
	return 0;
}
