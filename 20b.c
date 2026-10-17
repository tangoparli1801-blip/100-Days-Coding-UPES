#include <stdio.h>

int main() {
    char ch;
    printf("Enter the binary number: ");

    // Read character by character until Enter is pressed
    while ((ch = getchar()) != '\n' && ch != EOF) {
        if (ch == '0') {
            putchar('1');
        } else if (ch == '1') {
            putchar('0');
        } else {
            printf("\nInvalid input.");
            return 0;
        }
    }

    printf("\n");
    return 0;
}