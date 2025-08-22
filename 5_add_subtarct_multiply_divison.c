#include <stdio.h>

int main() {
    int num1, num2;
    float division;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Addition: %d + %d = %d\n", num1, num2, num1 + num2);

    printf("Subtraction: %d - %d = %d\n", num1, num2, num1 - num2);

    printf("Multiplication: %d * %d = %d\n", num1, num2, num1 * num2);

        division = (float)num1 / num2; 
        printf("Division: %d / %d = %f\n", num1, num2, division);

    return 0;
}
