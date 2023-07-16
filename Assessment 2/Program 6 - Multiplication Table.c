// Multiplication table of a given integer
#include <stdio.h>
int main () {
		int i, integer, n;
		
		printf("Enter the integer: ");
		scanf("%d",&integer);
		
		printf("Enter Table Length: ");
		scanf ("%d",&n);
		
		printf("Multiplication table of %d : \n",integer);
		
		for ( i = 1; i<= n; i++){
			
			printf("%d x %d = %d \n",integer,i,i*integer);
			
		}
	
	
}