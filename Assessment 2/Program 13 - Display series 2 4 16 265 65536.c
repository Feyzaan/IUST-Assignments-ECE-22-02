// Display the series 2 4 16 256 65536...

#include<stdio.h>
int main () {
	
	int i,n,temp;
	temp=2;
	
	printf("Enter number of terms: ");
	scanf("%d",&n);
	printf("Series: \n");
	for(i=1;i<=n;i++) {

	printf("%d \n",temp);
	temp *= temp;
	}
	
	return 0;
}