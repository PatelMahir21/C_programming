#include <stdio.h>

int main() {
    float p, r, n, i;
    printf("Enter the value of P:");
    scanf("%f", &p);
    printf("Enter the value of R:");
    scanf("%f", &r);
    printf("Enter the value of N:");
    scanf("%f", &n);

    i = (p * r * n) / 100;
    
    printf("Interest: %.2f\n", i);
    
    return 0;
}
