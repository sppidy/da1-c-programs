// Your local bank has many customers who often visit the branch to perform FOREX exchange. 
// A customer can bring any coins (quarters, dimes, nickels, pennies and US dollars) of any numbers.
// Write a C program to calculate the value of money in terms of rupees for each customer.
#include <stdio.h>
int main() {
    int quarters, dimes, nickels, pennies, dollars;
    float total_rupees;
    printf("Enter the number of quarters: ");
    scanf("%d", &quarters);
    printf("Enter the number of dimes: ");
    scanf("%d", &dimes);
    printf("Enter the number of nickels: ");
    scanf("%d", &nickels);
    printf("Enter the number of pennies: ");
    scanf("%d", &pennies);
    printf("Enter the number of US dollars: ");
    scanf("%d", &dollars);
    total_rupees = quarters * 18.75 + dimes * 7.5 + nickels * 3.75 + pennies * 0.75 + dollars * 75;
    printf("Total value in rupees: %.2f\n", total_rupees);
    return 0;
}