#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int mat[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    for (int d = 0; d < r + c - 1; d++) {
        if (d % 2 == 0) {
           
            int row = (d < r) ? d : r - 1;
            int col = d - row;
            while (row >= 0 && col < c) {
                printf("%d ", mat[row--][col++]);
            }
        } else {
            int col = (d < c) ? d : c - 1;
            int row = d - col;
            while (col >= 0 && row < r) {
                printf("%d ", mat[row++][col--]);
            }
        }
    }
    return 0;
}
