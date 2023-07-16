//Display series 2 4 8 16 32 64
#include<stdio.h>
int main () {
	
	int i,n,temp;
	temp=1;
	
	printf("Enter Range: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++) {
		temp= temp*2;
		printf("%d \n",temp);
		
	} 
	
	
	return 0;
}