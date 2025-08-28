#include <stdio.h>

int main() {
    float subject1, subject2, subject3, total, average;

    printf("Enter marks for subject 1: ");
    scanf("%f", &subject1);

    printf("Enter marks for subject 2: ");
    scanf("%f", &subject2);

    printf("Enter marks for subject 3: ");
    scanf("%f", &subject3);

    total = subject1 + subject2 + subject3;
    average = total / 3;

    printf("Total marks: %f\n", total);
    printf("Average marks: %f\n", average);

    return 0;
}
