#include <stdio.h>

int main() {
    int dollars;
    int numbers_of_20_dollars, numbers_of_10_dollars, numbers_of_5_dollars, numbers_of_1_dollars;
    printf("Enter a dollar amount: ");
    scanf("%d", &dollars);

    numbers_of_20_dollars = dollars / 20;
    dollars %= 20;
    numbers_of_10_dollars = dollars / 10;
    dollars %= 10;
    numbers_of_5_dollars = dollars / 5;
    dollars %= 5;
    numbers_of_1_dollars = dollars;

    printf("$20 bills: %d\n", numbers_of_20_dollars);
    printf("$10 bills: %d\n", numbers_of_10_dollars);
    printf(" $5 bills: %d\n", numbers_of_5_dollars);
    printf(" $1 bills: %d\n", numbers_of_1_dollars);

    return 0;
}