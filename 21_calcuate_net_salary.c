#include <stdio.h>

int main() {
    float gross, allowance, deduction, net;

    printf("Enter gross salary: ");
    scanf("%f", &gross);
    
    allowance = 0.10 * gross;
    deduction = 0.03 * gross;
    net = gross + allowance - deduction;
    
    printf("Net salary: %f\n", net);
    
    return 0;
}
