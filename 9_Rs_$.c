#include <stdio.h>

int main() {
    float rupees, dollar;

    printf("Enter amount in Rupees: ");
    scanf("%f", &rupees);

    dollar = rupees / 48;

    printf("Amount in Dollars: %.2f\n", dollar);

    return 0;
}
