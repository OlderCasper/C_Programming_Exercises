#include <stdio.h>

int main() {
    int digit1, digit2, digit3, digit4, digit5, digit6, digit7, digit8, digit9, digit10, digit11;
    int first_sum, second_sum, check_digit;

    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &digit1, &digit2, &digit3, &digit4, &digit5, &digit6, &digit7, &digit8, &digit9, &digit10, &digit11);

    first_sum = digit1 + digit3 + digit5 + digit7 + digit9 + digit11;
    second_sum = digit2 + digit4 + digit6 + digit8 + digit10;
    check_digit = 9 - (3 * first_sum + second_sum - 1) % 10;

    printf("Check digit: %d\n", check_digit);

    return 0;
}