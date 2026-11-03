#include <stdio.h>

int main() {
    float loan, interest_rate, monthly_payment;
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    float balance_1 = loan + loan * interest_rate / 100 / 12 - monthly_payment * 1;
    float balance_2 = balance_1 + balance_1 * interest_rate / 100 / 12 - monthly_payment * 1;
    float balance_3 = balance_2 + balance_2 * interest_rate / 100 / 12 - monthly_payment * 1;

    printf("Balance remaining after first payment: $%.2f\n", balance_1);
    printf("Balance remaining after second payment: $%.2f\n", balance_2);
    printf("Balance remaining after third payment: $%.2f\n", balance_3);
    return 0;
}