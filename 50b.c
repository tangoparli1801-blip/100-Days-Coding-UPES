#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str), first = 1;
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            if (!first) printf(",");
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            first = 0;
        }
    }
    printf("\n");
    return 0;
}
