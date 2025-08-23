#include <stdio.h>

int main() {
    float f, c;
    printf("Enter value of temprature(*F):");
    scanf("%f", &f);
    c = (f - 32) * 5 / 9;
    printf("%f *C\n", c);
    return 0;
}
