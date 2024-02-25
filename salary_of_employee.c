// XYZ Company pays salary to their employees once in 15 days. Find the monthly salary of an employee by writing C program.

#include <stdio.h>

int main() {
    float salary_15_days, monthly_salary;

    printf("Enter the salary paid every 15 days: ");
    scanf("%f", &salary_15_days);

    monthly_salary = salary_15_days * 2;

    printf("Monthly salary: %.2f\n", monthly_salary);

    return 0;
}