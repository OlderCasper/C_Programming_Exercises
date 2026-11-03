#include <stdio.h>
#define TAX_RATE 0.05f

int main() {
    float amount, tax, total;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    tax = amount * TAX_RATE;
    total = amount + tax;

    printf("With tax added: $%.2f\n", total);

    return 0;
}