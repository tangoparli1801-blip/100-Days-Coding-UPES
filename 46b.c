#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int seen[26] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            if (seen[str[i] - 'a']) {
                printf("%c\n", str[i]);
                return 0;
            }
            seen[str[i] - 'a'] = 1;
        }
    }
    printf("-1\n");
    return 0;
}
