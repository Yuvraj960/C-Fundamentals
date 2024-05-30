#include <stdio.h>

int main() {
    char light;
    
    // Take input from the user
    printf("Enter a traffic light signal (R, Y, G): ");
    scanf(" %c", &light);
    
    // Print the corresponding traffic light instruction
    switch (light) {
        case 'R':
            printf("Stop\n");
            break;
        case 'Y':
            printf("Caution\n");
            break;
        case 'G':
            printf("Go\n");
            break;
        default:
            printf("Invalid signal\n");
            break;
    }
    
    return 0;
}
