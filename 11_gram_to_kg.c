#include <stdio.h>

int main() {
    float grams, kilograms;
    printf("enter weight in gram:");
    scanf("%f", &grams);
    kilograms = grams / 1000;
    printf("%.2f kg\n", kilograms);
    return 0;
}
