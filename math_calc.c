// Write a C Program to simulate the MATH calculator for the following operators (+ ,*, $) by using functions. 
// The program should accept the operator and the operands from the user and display the result.
// ‘+’ Operator does the following:  Accept 2 integers as input and perform the summation of the individual digits of given two numbers and return the sum of digits as answer.
// ‘*’ Operator: Accepts 2 integers as input and multiply the individual digits of given two numbers and return the product as answer.
// ‘$’ Operator: Accept an integer as input and return the reverse of the given number
#include <stdio.h>
int sum_of_digits(int a, int b)
{
    int sum = 0;
    sum = a + b;
    return sum;
}
int product_of_digits(int a, int b)
{
    int product = 0;
    product = a * b;
    return product;
}
int reverse_of_number(int a){ 
    int reverse = 0;
    while(a != 0)
    {
        reverse = reverse * 10;
        reverse = reverse + a%10;
        a = a/10;
    }
    return reverse;   
}
int main ()
{
    char operator;
    int a, b;
    printf("Enter operator: ");
    scanf("%c", &operator);
    if (operator == '+')
    {
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        printf("Sum of digits: %d\n", sum_of_digits(a, b));
    }
    else if (operator == '*')
    {
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        printf("Product of digits: %d\n", product_of_digits(a, b));
    }
    else if (operator == '$')
    {
        printf("Enter a number: ");
        scanf("%d", &a);
        printf("Reverse of number: %d\n", reverse_of_number(a));
    }
    else
    {
        printf("Invalid operator!\n");
    }
    return 0;
}