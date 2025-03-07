#include <stdio.h>

int main() {
    float radius, area;

    // Input the radius of the circle
    printf("");
    scanf("%f", &radius);

    // Calculate the area using the formula area = π * radius * radius
    area = 3.14 * radius * radius;

    // Print the area with 4 decimal places
    printf("Area: %.4f\n", area);

    return 0;
}
