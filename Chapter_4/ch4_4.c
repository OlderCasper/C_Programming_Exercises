#include <stdio.h>

int main() {
    int num, remainder1, remainder2, remainder3, remainder4, remainder5;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);

    remainder1 = num % 8;
    remainder2 = (num / 8) % 8;
    remainder3 = (num / 64) % 8;
    remainder4 = (num / 512) % 8;
    remainder5 = (num / 4096) % 8;
    printf("In octal, your number is: %d%d%d%d%d\n", remainder5, remainder4, remainder3, remainder2, remainder1);
    
    return 0;
}