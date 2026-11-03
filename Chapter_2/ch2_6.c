#include <stdio.h>

int main() {
    float x;
    printf("Please enter a number: ");
    scanf("%f", &x);
    
    float result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
    printf("The result is: %f\n", result);
    
    return 0;
}