#include <stdio.h>
#include <math.h>

int main() {
    int number = 12345, original_first_digit, original_last_digit, num_digits = 0, temp, NewFirstDigit, NewLastDigit, SameDigits, swapped_number=0, digit;
    
    digit = (int) log10(number);

    int power = pow(10, digit);

    original_last_digit = number % 10;

    original_first_digit = number / power ;

    NewFirstDigit = original_last_digit * power;

    SameDigits = number % ((int) pow(10, digit)) - original_last_digit;

    NewLastDigit = original_first_digit;

    swapped_number = NewFirstDigit + SameDigits + NewLastDigit;
    printf("%d", swapped_number);
    
    return 0;
}