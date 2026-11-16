#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], longest[1000] = "";
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    char *word = strtok(str, " ");
    while (word != NULL) {
        if (strlen(word) > strlen(longest)) {
            strcpy(longest, word);
        }
        word = strtok(NULL, " ");
    }
    printf("%s\n", longest);
    return 0;
}
