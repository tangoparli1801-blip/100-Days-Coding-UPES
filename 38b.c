#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int mat[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    if (r != c) {
        printf("False\n");
        return 0;
    }

    int isSym = 1;
    for (int i = 0; i < r; i++) {
        for (int j = i + 1; j < c; j++) {
            if (mat[i][j] != mat[j][i]) {
                isSym = 0;
                break;
            }
        }
    }
    printf(isSym ? "True\n" : "False\n");
    return 0;
}
