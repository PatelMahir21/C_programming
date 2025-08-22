#include <stdio.h>

int main() {

    int hours,minutes;

    printf("Enter the number of hours: ");
    scanf("%d", &hours);

    minutes = hours * 60;

    printf("%d hours is equal to %d minutes.\n", hours, minutes);

    return 0; 
}