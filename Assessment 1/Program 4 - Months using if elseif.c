// Months using if elseif
#include <stdio.h>
int main () {
 int t;
 
	printf("Enter Month (1-12): ");
	scanf("%d",&t);
	
	if (t==1){
		printf("January");
	}else if (t==2) {
		printf("February");
	}else if (t==3){
		printf("March");
	}else if (t==4){
		printf("April");
	}else if (t==5){
		printf("May");
	}else if (t==6){
		printf("June");
	}else if (t==7){
		printf("July");
	}else if (t==8){
		printf("August");
	}else if (t==9){
		printf("September");
	}else if (t==10){
		printf("October");
	}else if (t==11){
		printf("November");
	}else if (t==12) {
		printf("December");
	} else printf("Invalid Month");
	
}
