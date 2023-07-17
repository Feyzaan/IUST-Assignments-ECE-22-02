#include <stdio.h>

int main () {
	int i;
	
	printf("Enter ASCII to convert into Alphabets: ");
	scanf("%i",&i);
	
	printf("The Alphabet corresponding to ASCII value %i: %c",i,i);
	
	
	return 0;
}