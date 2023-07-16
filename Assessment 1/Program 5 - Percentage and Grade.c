// Percentage and Grade
#include <stdio.h>

main() {
// Variables
	int e,m,p,c,b;

//Input
	printf("Enter marks in English: ");
	scanf("%d",&e);
	
	printf("Enter marks in Maths: ");
	scanf("%d",&m);
	
	printf("Enter marks in Physics: ");
	scanf("%d",&p);
	
	printf("Enter marks in Chemistry: ");
	scanf("%d",&c);
	
	printf("Enter marks in Biology: ");
	scanf("%d",&b);	
	 
//Marks
	int marks = e+m+p+c+b;
	
//Percentage
	float percentage = ((float)marks / 500) *100;
	
	printf("Marks: %d \n",marks);
	printf("Percentage: %.2f%% \n",percentage);
	
//Grading
	if (percentage <=100 && percentage >=90){
		printf("Grade: A+");
	}else if (percentage < 90 && percentage >=80){
		printf("Grade: A");
	}else if (percentage < 80 && percentage >=70){
		printf("Grade: B");
	}else if (percentage < 70 && percentage >=60){
		printf("Grade: C); 
	}else if (percentage <60 && percentage >=50){
		printf("Grade: D");
	}else printf("You have Failed");
}