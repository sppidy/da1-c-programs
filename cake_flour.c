// 4.	A cylindrical cake oven with 20 cm as diameter and 10 cm as depth is given to the baker.
// How much of flour is needed for the baker to prepare the cake batter.
// Write a C program to calculate the amount of flour needed for the cake batter. 
#include <stdio.h>
#include <math.h>
int main()
{
    double diameter,depth,flour,pi=3.14;
    diameter=20;
    depth=10;
    flour=pi*pow((diameter/2),2)*depth;
    printf("Amount of flour needed: %.2lf cm^3\n",flour);
    return 0;
}