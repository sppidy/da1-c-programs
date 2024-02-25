// Write a program to convert a decimal number to binary number.

#include <stdio.h>
void decimal_to_binary(int n)
{
    int binary[]={}, rem, i=0;
    while (n > 0)
    {
        binary[i]=n%2;//binary = binary + (n % 2) * i;
        n = n / 2;
        i++;
    }
    for(int j=sizeof(binary);j>=0;j--)
    {
        printf("%d",binary[j]);
    }
}
int main()
{
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    printf("Binary number: ");
    decimal_to_binary(n);
    return 0;
}   
