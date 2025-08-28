#include <stdio.h>

int main() {
    float gross, discount, net;

    printf("Enter gross sales: ");
    scanf("%f", &gross);

    if (gross < 0) {
        printf("Invalid input. Gross sales must be non-negative.\n");
        return 1;
    }

    discount = 0.10 * gross;
    net = gross - discount;

    printf("Net sales: %.2f\n", net);

    return 0;
}
