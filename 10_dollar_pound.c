#include <stdio.h>

int main() {
    float dollar, rupees, pounds;

    printf("Enter amount in Dollars: ");
    scanf("%f", &dollar);

    rupees = dollar * 48;
    pounds = rupees / 70;

    printf("Amount in Pounds: %.2f\n", pounds);

    return 0;
}
