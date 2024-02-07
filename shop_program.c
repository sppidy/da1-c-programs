
// An online retailer sells five different products, whose retail prices are shown in the following table:
// |________________________________|
// |Product number |	Retail price|
// |--------------------------------|
// |             1 |	$2.98       |
// |             2 |	$4.50       |
// |             3 |	$9.98       |
// |             4 |    $4.49       |
// |             5 |	$6.87       |
// |________________________________|
// Write a C program that reads a series of pairs of input as follows:
// a.	Product number
// b.	Quantity sold for one day
// Write a program to help and determine the retail price for each product. Calculate and display the total retail value of all products sold last week.

#include<stdio.h>
int main()
{
    int product_number,quantity;
    double price1,price2,price3,price4,price5;
    double total1,total2,total3,total4,total5;
    quantity=0;
    product_number=0;
    price1=2.98;
    price2=4.50;
    price3=9.98;
    price4=4.49;
    price5=6.87;
    do{
    printf("Enter product number (1-5) or 0 to terminate: ");
    scanf("%d",&product_number);
    if(product_number==1)
    {
        printf("Enter quantity: ");
        scanf("%d",&quantity);
        total1=price1*quantity;
        printf("Total price: $%.2lf\n",total1);
    }
    else if(product_number==2)
    {
        printf("Enter quantity: ");
        scanf("%d",&quantity);
        total2=price2*quantity;
        printf("Total price: $%.2lf\n",total2);
    }
    else if(product_number==3)
    {
        printf("Enter quantity: ");
        scanf("%d",&quantity);
        total3=price3*quantity;
        printf("Total price: $%.2lf\n",total3);
    }
    else if(product_number==4)
    {
        printf("Enter quantity: ");
        scanf("%d",&quantity);
        total4=price4*quantity;
        printf("Total price: $%.2lf\n",total4);
    }
    else if(product_number==5)
    {
        printf("Enter quantity: ");
        scanf("%d",&quantity);
        total5=price5*quantity;
        printf("Total price: $%.2lf\n",total5);
    }
    else if(product_number==0)
    {
        printf("Program terminated!\n\n");
    }
    else
    {
        printf("Invalid product number!\n");
    }
    }while(product_number!=0);
    //total retail value
    printf("Total retail value: %.2lf\n",total1+total2+total3+total4+total5);
    return 0;   
}