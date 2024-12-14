#include <stdio.h>

int main() {
    // Variables
    double hoursWorked, hourlyWage, grossPay, taxes, netPay;
    double regularHours = 40.0, overtimeRate = 1.5, taxRate1 = 0.15, taxRate2 = 0.20;
    double taxThreshold = 600.0;

    // Input: Hours worked and hourly wage
    printf("Enter hours worked in a week: ");
    scanf("%lf", &hoursWorked);
    printf("Enter hourly wage: ");
    scanf("%lf", &hourlyWage);

    // Calculate gross pay
    if (hoursWorked > regularHours) {
        grossPay = (regularHours * hourlyWage) + ((hoursWorked - regularHours) * hourlyWage * overtimeRate);
    } else {
        grossPay = hoursWorked * hourlyWage;
    }

    // Calculate taxes
    if (grossPay <= taxThreshold) {
        taxes = grossPay * taxRate1;
    } else {
        taxes = (taxThreshold * taxRate1) + ((grossPay - taxThreshold) * taxRate2);
    }

    // Calculate net pay
    netPay = grossPay - taxes;

    // Output: Gross pay, taxes, and net pay
    printf("Gross Pay: $%.2f\n", grossPay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", netPay);

    return 0;
}