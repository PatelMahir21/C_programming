#include <stdio.h>

int main() {
    int a, b, c, largest, smallest;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c);

    // Finding largest
    if (a >= b && a >= c)
        largest = a;
    else if (b >= a && b >= c)
        largest = b;
    else
        largest = c;

    printf("Largest number: %d\n", largest);


    // Finding smallest
    if (a <= b && a <= c)
        smallest = a;
    else if (b <= a && b <= c)
        smallest = b;
    else
        smallest = c;

    printf("Smallest number: %d\n", smallest);

    // if (a==b&&b==c)
    // {
    //     printf("All 3 Numbers are Equal.\n");
    // }
    

    return 0;
}
