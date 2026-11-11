#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int i = 0, j = strlen(str) - 1, isPal = 1;
    while (i < j) {
        if (str[i] != str[j]) {
            isPal = 0;
            break;
        }
        i++;
        j--;
    }
    printf(isPal ? "Palindrome\n" : "Not palindrome\n");
    return 0;
}
