#include <stdio.h>

void decimal_to_binary(int n) {
    int binary[32]; 
    int i = 0;

    if (n == 0) {
        printf("Binary number: 0\n");
        return;
    }

    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("Binary number: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    decimal_to_binary(n);
    return 0;
}
