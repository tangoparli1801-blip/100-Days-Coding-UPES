#include <stdio.h>

int main() {
    long long num;
    scanf("%lld", &num);
    if (num < 0) num = -num;

    int freq[10] = {0};
    if (num == 0) freq[0] = 1;
    while (num > 0) {
        freq[num % 10]++;
        num /= 10;
    }

    int maxFreq = 0, ans = 0;
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            ans = i;
        }
    }
    printf("%d\n", ans);
    return 0;
}
