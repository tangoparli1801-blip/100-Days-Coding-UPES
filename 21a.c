#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, swappedNum;

    printf("Enter any number: ");
    scanf("%d", &num);

    // Handle single-digit numbers
    if (num >= -9 && num <= 9) {
        printf("Swapped number: %d\n", num);
        return 0;
    }

    // Store sign if negative and work with absolute value
    int isNegative = (num < 0);
    if (isNegative) {
        num = -num;
    }

    // Find the last digit
    lastDigit = num % 10;

    // Count total digits minus 1 (e.g., for 1234, digits = 3)
    digits = (int)log10(num);

    // Find the first digit
    int power = (int)round(pow(10, digits));
    firstDigit = num / power;

    // Reconstruct the number with swapped digits
    swappedNum = lastDigit * power;          // Place last digit at the start
    swappedNum += num % power;               // Add the middle digits + old last digit
    swappedNum -= lastDigit;                 // Remove the old last digit
    swappedNum += firstDigit;                // Place first digit at the end

    if (isNegative) {
        swappedNum = -swappedNum;
    }

    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}