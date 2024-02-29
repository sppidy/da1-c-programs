// Write a C Program to simulate the MATH calculator for the following operators (+ ,*, $) by using functions. 
// The program should accept the operator and the operands from the user and display the result.
// ‘+’ Operator does the following:  Accept 2 integers as input and perform the summation of the individual digits of given two numbers and return the sum of digits as answer.
// ‘*’ Operator: Accepts 2 integers as input and multiply the individual digits of given two numbers and return the product as answer.
// ‘$’ Operator: Accept an integer as input and return the reverse of the given number
#include <stdio.h>
int adder(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
int multiplier(int num)
{
    int product = 1;
    while (num > 0)
    {
        product *= num % 10;
        num /= 10;
    }
    return product;
}
int reverser(int num)
{
    int reversed = 0;
    while (num > 0)
    {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}
int main()
{
    char command;
    int n1, n2, result;
    printf("Enter command (+, *, $): ");
    scanf(" %c", &command);
    switch(command)
    {
        case '+':
            printf("Enter two integers: ");
            scanf("%d %d", &n1, &n2);
            result = adder(n1) + adder(n2);
            printf("Result: %d\n", result);
            break;
        case '*':
            printf("Enter two integers: ");
            scanf("%d %d", &n1, &n2);
            result = multiplier(n1) * multiplier(n2);
            printf("Result: %d\n", result);
            break;
        case '$':
            printf("Enter an integer: ");
            scanf("%d", &n1);
            result = reverser(n1);
            printf("Result: %d\n", result);
            break;
        default:
            printf("Invalid command\n");
    }
    return 0;
}
