// write the code to convert the decimal number to the binary number

#include <stdio.h>

int main() {
    int num, binary = 0, remainder, temp = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    while (num > 0) {
        remainder = num % 2;
        num = num / 2;
        binary += remainder * temp;
        temp = temp * 10;
    }

    printf("Binary representation: %d\n", binary);

    return 0;
}