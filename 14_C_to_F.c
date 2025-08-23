#include <stdio.h>

int main() {
    float c, f;
    printf("Enter value of temprature(*C):");
    scanf("%f", &c);
    f = (c * 9 / 5) + 32;
    printf("%f F\n", f);
    return 0;
}
