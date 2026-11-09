#include <stdio.h>

int main() {
    int number;
    int started = 0; // Flag to skip leading zeros

    printf("Enter an integer: ");
    
    // Validate input
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Binary representation: ");

    // For a standard 32-bit integer, check bits from position 31 down to 0
    for (int i = 31; i >= 0; i--) {
        // Shift right by i positions and mask with 1 to get the current bit
        int bit = (number >> i) & 1;

        if (bit == 1) {
            started = 1; // Found the first non-zero bit
        }

        if (started) {
            printf("%d", bit);
        }
    }

    // Edge case: if the number is exactly 0, the loop won't print anything
    if (!started) {
        printf("0");
    }

    printf("\n");

    return 0;
}