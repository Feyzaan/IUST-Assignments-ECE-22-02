// Factorial of a number n
#include <stdio.h>
int main () {
	
	int i,n,f;
	f=1;
	printf("Enter the value of n: ");
	scanf("%d",&n);

	for(i=1;i<=n;i++) {
		f*=i;		
	}
		if (n!=0) {
	printf("The factorial of %d: %d",n,f);
} else printf("The factorial of %d: 1",n);

	return 0;
}