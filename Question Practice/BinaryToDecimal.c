// write the code to convert the binary number to the decimal number

#include <stdio.h>
#include <math.h>

int main() {
    long binaryNumber;
    int decimalNumber = 0, i = 0, remainder;

    printf("Enter a binary number: ");
    scanf("%ld", &binaryNumber);

    while (binaryNumber != 0) {
        remainder = binaryNumber % 10;
        binaryNumber /= 10;
        decimalNumber += remainder * pow(2, i);
        ++i;
    }

    printf("Decimal number: %d", decimalNumber);

    return 0;
}