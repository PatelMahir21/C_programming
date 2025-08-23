#include <stdio.h>

int main() {
    double bytes, kb, mb, gb;
    printf("Enter value of Byte:");
    scanf("%lf", &bytes);
    kb = bytes / 1024;
    mb = bytes / (1024 * 1024);
    gb = bytes / (1024 * 1024 * 1024);
    printf("%f KB\n", kb);
    printf("%f MB\n", mb);
    printf("%f GB\n", gb);
    return 0;
}
