 #include <stdio.h>

int main() {
    float gross, allowances, deductions, net;

    printf("Enter Gross Salary: ");
    scanf("%f", &gross);

    if (gross > 10000) {
        allowances = gross * 0.10;
        deductions = gross * 0.03;
    }
    else if (gross > 5000) {
        allowances = gross * 0.07;
        deductions = gross * 0.02;
    }
    else {
        allowances = gross * 0.05;  
        deductions = gross * 0.01;  
    }

    net = gross + allowances - deductions;

    printf("Net Salary = %.2f\n", net);

    return 0;
}