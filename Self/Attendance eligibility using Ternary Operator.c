// Attendance eligibility using Ternary Operator 
#include <stdio.h>
int main() {
    int Attendance;
    printf("Enter Attendance percentage: ");
    scanf("%i",&Attendance);
  
    Attendance >= 75 ? printf("Eligible") : printf("Shortage");
       return 0;
}