// Genertation of Electricity Bill
#include <stdio.h>
int main () {
    int con_no,pmr,cmr,eb;
    char cons_name[100];
    //input details
    printf("Enter Consumer Number: ");
    scanf("%i",&con_no);
    
    printf("Enter Consumer Name: ");
    scanf("%s",&cons_name);
    
    printf("Enter Previous Month Reading: ");
    scanf("%i",&pmr);
    
    printf("Enter Current Month Reading: ");
    scanf("%i",&cmr);
    
    printf("Enter the type of EB connection (1-Domestic, 2-Commercial): ");
    scanf("%i",&eb);
    
    //input units
    float u;
    printf("Enter Units: ");
    scanf("%f",&u);
    
    
    //choose type of connection 
    switch (eb) {
        case 1 :{ printf("You have chosen Domestic Connection \n");
        float f1= u*1, f2= 100+(u-100)*2.5, f3=100+ (100*2.5)+(u-200)*4, f4=100+(100*2.5)+(300*4)+((u-501)*6);
        if (u >= 0 && u<= 100){
            printf("Amount to be paid: ?%f",f1);
        }else if (u>= 101 && u <= 200){
            printf("Amount to be paid: ?%f",f2);
        }else if (u >= 201 && u<= 500) {
            printf("Amount to be paid: ?%f",f3);
        }else if (u>= 501){
            printf("Amount to paid: ?%f",f4);
        }
        break;
        }
        
        case 2 :{ printf("You have chosen Commercial Connection\n");

        float f1= u*2, f2= 100+(u-100)*4.5, f3=100+ (100*2.5)+(u-200)*6, f4=100+(100*2.5)+(300*6)+((u-501)*7);
    
        if (u >= 0 && u<= 100){
            printf("Amount to be paid: ?%f",f1);
        }else if (u>= 101 && u <= 200){
            printf("Amount to be paid: ?%f",f2);
        }else if (u >= 201 && u<= 500) {
            printf("Amount to be paid: ?%f",f3);
        }else if (u>= 501){
            printf("Amount to paid: ?%f",f4);
        }
        break;
        }
    default : printf("Invalid Type."); 
    }
    return 0;
}