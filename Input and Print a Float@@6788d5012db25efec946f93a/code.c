#include <stdio.h>

int main() {
    float number;
    
    // Asking for user input
    printf("Enter a float: ");
    
    // Reading the float value
    scanf("%f", &number);
    
    // Printing the float value
    printf("You entered: %.2f\n", number);
    
    return 0;
}
