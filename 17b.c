#include <stdio.h>

int main() {
    int n;
    printf("Enter a number to check if it is prime or not:\n");
    scanf("%d", &n);

    // Edge case: Numbers less than or equal to 1 are not prime
    if (n <= 1) {
        printf("%d is not a prime number.\n", n);
        return 0;
    }

    int isPrime = 1; // 1 means True (assume it is prime initially)

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            isPrime = 0; // Found a factor, so it is NOT prime
            break;       // No need to check further, exit loop
        }
    }

    if (isPrime == 1) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}
