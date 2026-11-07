#include <stdio.h>

int main() {
    int num, first_digit, second_digit;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    first_digit = num / 10;
    second_digit = num % 10;
    printf("The reversal is: %d", second_digit * 10 + first_digit);

    return 0;
}