#include <stdio.h>

int main() {
    int areaCode, prefix, lineNumber;
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &areaCode, &prefix, &lineNumber);
    printf("You entered %d.%d.%d\n", areaCode, prefix, lineNumber);
    return 0;
}