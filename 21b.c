#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Perfect numbers must be positive integers greater than 1
    if (num <= 1) {
        printf("%d is not a perfect number.\n", num);
        return 0;
    }

    // Find all proper divisors and add them up
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Compare sum of divisors with the original number
    if (sum == num) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}