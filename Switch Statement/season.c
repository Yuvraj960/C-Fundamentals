#include <stdio.h>

int main() {
    int season;
    
    // Take input from the user
    printf("Enter a number (1-4): ");
    scanf("%d", &season);
    
    // Print the corresponding season
    switch (season) {
        case 1:
            printf("Winter\n");
            break;
        case 2:
            printf("Spring\n");
            break;
        case 3:
            printf("Summer\n");
            break;
        case 4:
            printf("Autumn\n");
            break;
        default:
            printf("Invalid input\n");
            break;
    }
    
    return 0;
}
