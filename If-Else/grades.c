#include <stdio.h>

int main() {
    int score;
    
    printf("Enter the student's score: ");
    scanf("%d", &score);

    if (score >= 90 && score <= 100) {
        printf("Grade: A\n");
    } else if (score >= 80 && score < 90) {
        printf("Grade: B\n");
    } else if (score >= 70 && score < 80) {
        printf("Grade: C\n");
    } else if (score >= 60 && score < 70) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }
    
    return 0;
}
