#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2;
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f",&a, &b, &c);

    discriminant = b*b - 4*a*c;

    switch(discriminant > 0) {
        case 1:
            root1 = (-b+sqrt(discriminant))/(2*a);
            root2 = (-b-sqrt(discriminant))/(2*a);
            printf("Roots are real and different.\n");
            printf("root1 = %f and root2 = %f",root1 , root2);
            break;
        case 0:
            switch(discriminant == 0) {
                case 1:
                    root1 = root2 = -b/(2*a);
                    printf("Roots are real and the same.\n");
                    printf("root1 = %f and root2 = %f",root1 , root2);
                    break;
                case 0:
                    root1 = -b/(2*a);
                    root2 = sqrt(-discriminant)/(2*a);
                    printf("Roots are complex and different.\n");
                    printf("root1 = %f+%fi and root2 = %f-%fi", root1, root2, root1, root2);
                    break;
            }
            break;
    }

    return 0;
}
