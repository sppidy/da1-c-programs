// Identifying a compressed gas cylinder is based on the first letter of the cylinder’s color printed on the cylinder. For Example ‘Y’ or ‘y’ for yellow, ’O’ or ‘o’ for orange and so on. Cylinder colors and associated contents are as follows.
// •	Orange--Ammonia
// •	Brown--Carbon monoxide
// •	Yellow--Hydrogen
// •	Green--Oxygen.
// Write a C program using switch case to identify the type of gas compressed in a given cylinder.

#include <stdio.h>

int main() {
    char color;

    printf("Enter the first letter of the cylinder's color: ");
    scanf(" %c", &color);

    switch(color) {
        case 'O':
        case 'o':
            printf("The gas is Ammonia\n");
            break;
        case 'B':
        case 'b':
            printf("The gas is Carbon monoxide\n");
            break;
        case 'Y':
        case 'y':
            printf("The gas is Hydrogen\n");
            break;
        case 'G':
        case 'g':
            printf("The gas is Oxygen\n");
            break;
        default:
            printf("Invalid color\n");
    }

    return 0;
}