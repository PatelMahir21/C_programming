#include <stdio.h>

int main() {
    int n, digit;
    
    printf("Enter a n: ");
    scanf("%d", &n);
    printf("Digits are:");
    while (n > 0) {
        digit = n % 10;
        printf("%d", digit);
        n = n/10;
        if (n > 0) {
            printf(", ");
        }
    }
    
    printf("\n");
    return 0;
}
