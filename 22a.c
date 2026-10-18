#include <stdio.h>

int main() {
    int num, originalNum, lastDigit, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Strong numbers must be positive integers
    if (num <= 0) {
        printf("%d is not a strong number.\n", num);
        return 0;
    }

    originalNum = num;

    // Extract each digit and add its factorial to sum
    while (num > 0) {
        lastDigit = num % 10;

        // Calculate factorial of lastDigit
        int fact = 1;
        for (int i = 1; i <= lastDigit; i++) {
            fact *= i;
        }

        sum += fact;
        num /= 10;
    }

    // Compare the sum of factorials with the original number
    if (sum == originalNum) {
        printf("%d is a strong number.\n", originalNum);
    } else {
        printf("%d is not a strong number.\n", originalNum);
    }

    return 0;
}