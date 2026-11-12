#include <stdio.h>

int main() {
    int a, b, max;

    printf("Enter two positive numbers whose LCM you want to find out:\n");
    scanf("%d %d", &a, &b);

    // Start checking from the larger of the two numbers
    max = (a > b) ? a : b;

    while (1) {
        // If max is divisible by both a and b, it is the LCM
        if (max % a == 0 && max % b == 0) {
            printf("The LCM of %d and %d is %d\n", a, b, max);
            break; // Stop the loop once the first (least) common multiple is found
        }
        max++;
    }

    return 0;
}
