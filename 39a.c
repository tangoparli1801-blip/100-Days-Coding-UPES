#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int mat[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    int limit = (r < c) ? r : c;
    int distinct = 1;
    for (int i = 0; i < limit; i++) {
        for (int j = i + 1; j < limit; j++) {
            if (mat[i][i] == mat[j][j]) {
                distinct = 0;
                break;
            }
        }
    }
    printf(distinct ? "True\n" : "False\n");
    return 0;
}
