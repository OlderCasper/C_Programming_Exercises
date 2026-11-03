#include <stdio.h>
#define PI 3.14159f

int main() {
    float radius;
    printf("Please enter the radius of the sphere: ");
    scanf("%f", &radius);
    float volume = (4.0f / 3.0f) * PI * radius * radius * radius;
    printf("Volume of the sphere: %.2f cubic meters\n", volume);
    return 0;
}