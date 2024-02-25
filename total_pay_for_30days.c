// A man takes a job for 30 days. His pay for the first day is calculated as square of his joining date.
// Assume he’s joining on 3rd of the month, then his starting pay is Rs 9/. 
// After that his pay for the consecutive days are twice the pay of previous day .i.e. each day’s pay is twice the pay of previous day.
// Write a c program using functions to find his total pay for 30 days.

#include <stdio.h>

int total_pay(int joining_date) {
    int pay = joining_date * joining_date;
    int total = pay;

    for (int i = 1; i < 30; i++) {
        pay *= 2;
        total += pay;
    }

    return total;
}

int main() {
    int joining_date, total;

    printf("Enter the joining date: ");
    scanf("%d", &joining_date);

    total = total_pay(joining_date);

    printf("Total pay for 30 days: Rs. %d\n", total);

    return 0;
}