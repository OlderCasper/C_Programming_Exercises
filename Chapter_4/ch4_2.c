#include <stdio.h>

int main() {
    int num, first_digit, second_digit, third_digit;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    first_digit = num / 100; // Extract the first digit
    second_digit = (num / 10) % 10; // Extract the second digit
    third_digit = num % 10; // Extract the third digit
    printf("The reversal is: %d", third_digit * 100 + second_digit * 10 + first_digit); // Print the reversed number
    
    return 0;
}