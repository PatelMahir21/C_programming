#include <stdio.h>

int main() {

    int hours,minutes;

    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);

    hours = minutes / 60;

    printf("%d minutes is equal to %d hours.\n", minutes,hours);

    return 0; 
}