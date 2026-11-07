#include <stdio.h>

int main() {
    int digit1, digit2, digit3, digit4, digit5, digit6, digit7, digit8, digit9, digit10, digit11, digit12;
    int sum_odd, sum_even, total_sum, check_digit;
    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &digit1, &digit2, &digit3, &digit4, &digit5, &digit6, &digit7, &digit8, &digit9, &digit10, &digit11, &digit12);

    sum_odd = digit1 + digit3 + digit5 + digit7 + digit9 + digit11;
    sum_even = digit2 + digit4 + digit6 + digit8 + digit10 + digit12;
    total_sum = sum_odd + (sum_even * 3);
    check_digit = 9 - (total_sum - 1) % 10;

    printf("Check digit: %d\n", check_digit);

    return 0;
}