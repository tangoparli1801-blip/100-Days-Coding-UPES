#include <stdio.h>

int main() {
    int n;
    long long product = 1;
    int has_even = 0;

    
    if (scanf("%d", &n) != 1 || n < 2) {
        printf("0\n");
        return 0;
    }

    
    for (int i = 2; i <= n; i += 2) {
        product *= i;
    }

    
    printf("%lld ", product);

    
    printf("(");
    for (int i = 2; i <= n; i += 2) {
        printf("%d", i);
        if (i + 2 <= n) {
            printf(" * ");
        }
    }
    printf(")\n");

    return 0;
}