#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], target;
    fgets(str, sizeof(str), stdin);
    scanf(" %c", &target);

    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) count++;
    }
    printf("%d\n", count);
    return 0;
}
