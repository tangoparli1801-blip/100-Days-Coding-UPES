#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n], ans[n];
    for (int i = 0; i < n; i++) scanf("%d", &nums[i]);

    int prefix = 1;
    for (int i = 0; i < n; i++) {
        ans[i] = prefix;
        prefix *= nums[i];
    }

    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        ans[i] *= suffix;
        suffix *= nums[i];
    }

    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d%s", ans[i], (i == n - 1) ? "" : ",");
    }
    printf("]\n");
    return 0;
}
