#include <stdio.h>

int main() {
    char grade;
    
    // Take input from the user
    printf("Enter a grade (A, B, C, D, F): ");
    scanf(" %c", &grade);
    
    // Print the corresponding grade description
    switch (grade) {
        case 'A':
            printf("Excellent\n");
            break;
        case 'B':
            printf("Good\n");
            break;
        case 'C':
            printf("Average\n");
            break;
        case 'D':
            printf("Poor\n");
            break;
        case 'F':
            printf("Fail\n");
            break;
        default:
            printf("Invalid grade\n");
            break;
    }
    
    return 0;
}
