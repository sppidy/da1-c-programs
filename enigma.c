#include <stdio.h>
#include <math.h>

double multiply(double a, double b) {
    return a * b;
}

double square_root(double a) {
    return sqrt(a);
}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double divide(double a, double b) {
    return a / b;
}

double calculate_discriminant(double a, double b, double c) {
    return subtract(multiply(b, b), multiply(4, multiply(a, c)));
}

void calculate_roots(double a, double b, double discriminant, double* x1, double* x2) {
    *x1 = divide(add(-b, square_root(discriminant)), multiply(2, a));
    *x2 = divide(subtract(-b, square_root(discriminant)), multiply(2, a));
}

int main() {
    double a, b, c, discriminant, x1, x2;

    printf("Enter a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("The coefficient 'a' must be non-zero for a quadratic equation.\n");
        return 1;
    }

    discriminant = calculate_discriminant(a, b, c);

    if (discriminant < 0) {
        printf("The roots are imaginary.\n");
        return 0;
    }

    calculate_roots(a, b, discriminant, &x1, &x2);

    printf("The roots are: %.6lf and %.6lf\n", x1, x2);

    return 0;
}
