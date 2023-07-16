// Body Mass Index Calculator
#include <stdio.h>
int main () {
    float wt_lb, ht_in,BMI;
    
    printf("Enter Weight (in pounds): ");
    scanf("%f", &wt_lb);
    
    printf("Enter Height (in inches): ");
    scanf("%f", &ht_in);
    
    BMI= 703*(wt_lb)/(ht_in*ht_in);
    printf("BMI: %f\n",BMI);
    
    if (BMI>0 && BMI<=18.5) { 
        printf("Underweight");
    } else if (BMI>18.5 && BMI<=25.0){
        printf("Healthy weight");
    }else if ( BMI >25.0 && BMI<=29.9){
        printf("Overweight");
    }else if ( BMI>= 30.0) {
        printf("Obese\n");
    }
    return 0;
}