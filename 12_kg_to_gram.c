#include <stdio.h>

int main() {
    float grams, kilograms;
    printf("enter weight in kg");
    scanf("%f", &kilograms);
    grams = kilograms * 1000;
    printf("%.2f g\n",grams);
    return 0;
}
