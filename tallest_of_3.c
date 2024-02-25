//Questions
// Rahul, Rohit, & Vishal are three students in a class. 
// The teacher wants to identify the tallest student among these three. Write a program to help the teacher.

#include <stdio.h>
#include <string.h>
int main() {
    int rahul_height, rohit_height, vishal_height;

    printf("Enter Rahul's height in centimeters: ");
    scanf("%d", &rahul_height);

    printf("Enter Rohit's height in centimeters: ");
    scanf("%d", &rohit_height);

    printf("Enter Vishal's height in centimeters: ");
    scanf("%d", &vishal_height);

    int tallest_height = 0;
    char tallest_student[20] = "";

    if (rahul_height > tallest_height) {
        tallest_height = rahul_height;
        strcpy(tallest_student, "Rahul");
    }

    if (rohit_height > tallest_height) {
        tallest_height = rohit_height;
        strcpy(tallest_student, "Rohit");
    }

    if (vishal_height > tallest_height) {
        tallest_height = vishal_height;
        strcpy(tallest_student, "Vishal");
    }

    printf("The tallest student is %s with a height of %d cm.\n", tallest_student, tallest_height);

    return 0;
}
