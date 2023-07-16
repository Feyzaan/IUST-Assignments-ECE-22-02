#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    printf("Quadratic Equation:\n");

    printf("Enter the value of a: ");
    scanf("%f", &a);

    if (a != 0) {
        printf("Enter the value of b: ");
        scanf("%f", &b);

        printf("Enter the value of c: ");
        scanf("%f", &c);

        float D = (b * b) - (4 * a * c);
		printf("The provided equation: (%.1f)x^2 + (%.1f)x + %.1f \n",a,b,c);
        if (D > 0) {
            printf("The roots are Real but Distinct.\n");
            float x1 = (-b - sqrt(D)) / (2 * a);
            float x2 = (-b + sqrt(D)) / (2 * a);

            printf("The roots are %.2f and %.2f\n", x1, x2);
        } else if (D == 0) {
            printf("The roots are Real and Equal.\n");
            float x = -b / (2 * a);
            printf("The root is %.2f\n", x);
        } else {
            printf("The roots are complex.\n");
            float realPart = -b / (2 * a);
            float imPart = sqrt(-D) / (2 * a);

            printf("The roots are %.2f + %.2fi and %.2f - %.2fi\n", realPart, imPart, realPart, imPart);
        }
    } else {
        printf("This is not a Quadratic Equation\n");
    }

    return 0;
}
