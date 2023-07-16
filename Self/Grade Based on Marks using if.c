// Grade Based on Marks using if
#include <stdio.h>
int main() {
    int marks;
    printf("Enter Marks(0-100): ");
    scanf("%i",&marks);
    
   if (marks>=75) {
       printf("Passed\n");
   }
   if (marks >=75 && marks<=100) {
           printf("Distinction\n");
       }
       if ( marks >= 60 && marks < 75){
           printf("Grade B\n"); 
       }
       
       if (marks >= 45 && marks <60){
             printf("Grade C\n");
         }
       
   
   if ( marks >= 0 && marks <45) {
       printf("Failed\n");
        return 0;
}
}
      