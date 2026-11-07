#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &a, &b, &c);
    printf("The reversal is: %d\n", c * 100 + b * 10 + a); // Print the reversed number

    return 0;
}