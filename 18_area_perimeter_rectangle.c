#include <stdio.h>

int main() {
    int length, width, area, perimeter;

    printf("Enter Length:");
    scanf("%d", &length);
    printf("Enter Width:");
    scanf("%d", &width);

    area = length * width;
    perimeter = 2 * (length + width);

    printf("Area: %d\n", area);
    printf("Perimeter: %d\n", perimeter);
    
    return 0;
}
