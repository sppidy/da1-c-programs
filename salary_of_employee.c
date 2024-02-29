// XYZ Company pays salary to their employees once in 15 days. Find the monthly salary of an employee by writing C program.

#include <stdio.h>

int main() {
    float salary_15_days, monthly_salary, salary_per_day;
    int days;
    printf("Enter the salary paid every 15 days: ");
    scanf("%f", &salary_15_days);
    printf("Enter the number of days in a month: ");
    scanf("%d", &days);
    salary_per_day = salary_15_days/15;
    monthly_salary = salary_per_day * days;
    printf("Monthly salary: %.2f\n", monthly_salary);
    return 0;
}