#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int lastSpace = -1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') lastSpace = i;
    }

    for (int i = 0; i < lastSpace; i++) {
        if (i == 0 || (str[i - 1] == ' ' && str[i] != ' ')) {
            printf("%c.", str[i]);
        }
    }
    if (lastSpace != -1) {
        printf(" %s\n", &str[lastSpace + 1]);
    } else {
        printf("%s\n", str);
    }
    return 0;
}
