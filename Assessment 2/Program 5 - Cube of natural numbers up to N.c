//Cube of natural numbers upto N
#include <stdio.h>
int main () {
	int i, N;
	
	printf("Enter the value of N: ");
	scanf("%d",&N);
	printf("Cube of %d natural numbers: \n",N);

	for ( i=1; i<=N; i++){
		printf("Cube of %d: %d\n",i,i*i*i);
}

}