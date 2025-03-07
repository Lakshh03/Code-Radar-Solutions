#include <stdio.h>

int main() {
    int num1, num2, num3;
    float average;

    // Input three integers
    printf("");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Calculate the average
    average = (num1 + num2 + num3) / 3.0;

    // Print the average with two decimal places
    printf("Average: %.2f\n", average);

    return 0;
}
