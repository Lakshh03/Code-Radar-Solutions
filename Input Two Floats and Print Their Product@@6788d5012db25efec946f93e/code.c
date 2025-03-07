#include <stdio.h>

int main() {
    float a, b, product;

    // Input two floating-point numbers
    printf(" ");
    scanf("%f %f", &a, &b);

    // Calculate the product
    product = a * b;

    // Output the product
    printf("Product: %.2f\n",product);

    return 0;
}
