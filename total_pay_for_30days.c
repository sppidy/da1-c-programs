// A man takes a job for 30 days. His pay for the first day is calculated as square of his joining date.
// Assume he’s joining on 3rd of the month, then his starting pay is Rs 9/. 
// After that his pay for the consecutive days are twice the pay of previous day .i.e. each day’s pay is twice the pay of previous day.
// Write a c program using functions to find his total pay for 30 days.

#include <stdio.h>
#include <math.h>
double calculatePay(int day, int startingDay)
{
    if (day == 1)
        return pow(startingDay, 2);
    else
        return 2 * calculatePay(day - 1, startingDay);
}
int main()
{
    int days = 30;
    int startingDay;
    double totalPay = 0;
    printf("Enter the joining date (day): ");
    scanf("%d", &startingDay);
    for (int i = 1; i <= days; i++)
    {
        totalPay += calculatePay(i, startingDay);
    }
    printf("Total pay for 30 days: Rs %.2lf\n", totalPay);

    return 0;
}
