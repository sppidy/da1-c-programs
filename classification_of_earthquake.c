// The national earthquake information center characterizes the effect of earthquakes based on Richter scale numbers. Write a C program to implement the following decision table.

// Ritcher scale number (n)	Characterization
// n<5.0					Little or no damage
// 5.0 <= n < 5.5			Some damage
// 5.5 <= n < 6.5			Serious damage: Walls may crack or fall
// 6.5 <= n < 7.5			Disaster: houses and buildings may collapse
// Higher				    Catastrophic: most buildings destroyed
#include <stdio.h>

int main() {
    float n;

    printf("Enter the Richter scale number: ");
    scanf("%f", &n);

    if (n < 5.0) {
        printf("Little or no damage\n");
    } else if (n < 5.5) {
        printf("Some damage\n");
    } else if (n < 6.5) {
        printf("Serious damage: Walls may crack or fall\n");
    } else if (n < 7.5) {
        printf("Disaster: houses and buildings may collapse\n");
    } else {
        printf("Catastrophic: most buildings destroyed\n");
    }

    return 0;
}