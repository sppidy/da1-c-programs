// Green Peace Constructions in Chennai employs labourers to do the daily activities and charge them based on the number of hours worked. The labours are paid based on the following set of rules:
// Less than 8 hrs = Rs. 200
// 8 – 12 hrs = Rs. 100/- per hour extra
// 12 – 16 hrs = Rs. 200/- per hour extra
// Greater than 16 hrs = Rs. 250/- per hour extra
// Write a C program to calculate and display the number of hours worked and the wage earned for each labourer.

#include <stdio.h>

int main() {
    int hours;
    int wage;

    printf("Enter the number of hours worked: ");
    scanf("%d", &hours);

    if (hours <= 8) {
        wage = 200;
    } else if (hours <= 12) {
        wage = 200 + (hours - 8) * 100;
    } else if (hours <= 16) {
        wage = 200 + 4 * 100 + (hours - 12) * 200;
    } else {
        wage = 200 + 4 * 100 + 4 * 200 + (hours - 16) * 250;
    }

    printf("Hours worked: %d\n", hours);
    printf("Wage earned: Rs. %d\n", wage);

    return 0;
}