// Roots using pow(x,y) 
#include <stdio.h>
#include<math.h>
int main() {
    
    int n,m;
    
    printf("Number: ");
    scanf("%i",&n);
    
    printf("Power: ");
    scanf("%i",&m);
    
     int a = pow(n,m);
     
     if ( m==2 ){
     	  printf("The %dnd power of %d is: %i",m,n,a);
	 } else if ( m == 1 ) {
	 	  printf("The %dst power of %d is: %i",m,n,a);
	 } else if ( m == 3) {
	 	  printf("The %drd power of %d is: %i",m,n,a);
	 } else if (m== 0) {
	 	  printf("Anything raised to power 0 is: 1");
	 } else{
    printf("The %dth power of %d is: %i",m,n,a);
}
    return 0;
}