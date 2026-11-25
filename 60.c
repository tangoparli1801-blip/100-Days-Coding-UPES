#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);

    for (int i = 0; i <= n - k; i++) {
        int maxVal = arr[i];
        for (int j = 1; j < k; j++) {
            if (arr[i + j] > maxVal) maxVal = arr[i + j];
        }
        printf("%d%s", maxVal, (i == n - k) ? "" : " ");
    }
    printf("\n");
    return 0;
}
