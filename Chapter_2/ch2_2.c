#include <stdio.h>
#define RADIUS 10
#define PI 3.14159f

int main() {
    float volume = (4.0f / 3.0f) * PI * RADIUS * RADIUS * RADIUS;
    printf("Volume of the sphere: %.2f cubic meters\n", volume);
    return 0;
}