#include <stdio.h>

int main() {
    int n, r = 1, rem, org = 0, rev = 0, hasOdd = 0, first = 1;

    printf("Enter the number:\n");
    scanf("%d", &n);

    if (n > 0) {
        org = n;

        // 1. Calculate the product AND reverse the number at the same time
        while (n != 0) {
            rem = n % 10;
            if (rem % 2 != 0) {
                r = rem * r;
                hasOdd = 1;
            }
            rev = rev * 10 + rem; // Reverses 'org' so we can print left-to-right later
            n = n / 10;
        }

        // 2. Check if any odd digit was found
        if (hasOdd == 0) {
            printf("No odd digit detected.\n");
        } else {
            printf("%d (", r);
            
            // 3. Extract digits from the reversed number to print in original order
            while (rev != 0) {
                rem = rev % 10;
                if (rem % 2 != 0) {
                    if (!first) {
                        printf("*");
                    }
                    printf("%d", rem);
                    first = 0; // Ensures '*' is only printed before subsequent digits
                }
                rev = rev / 10;
            }
            printf(")\n");
        }
    }
    else if (n == 0) { // Fixed '=' to '=='
        printf("No odd digit detected.\n");
    }
    else {
        printf("Invalid Input.\n");
    }

    return 0;
}