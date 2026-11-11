#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int spaces = 0, digits = 0, special = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') spaces++;
        else if (str[i] >= '0' && str[i] <= '9') digits++;
        else if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
            special++;
    }
    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);
    return 0;
}
