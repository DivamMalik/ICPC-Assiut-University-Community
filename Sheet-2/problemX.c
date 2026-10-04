#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    while (n--) {
        long long x;
        scanf("%lld", &x);
        int ones = 0;
        long long temp = x;
        while (temp > 0) {
            if (temp % 2 != 0) {
                ones++;
            }
            temp /= 2;
        }
        long long res = (1LL << ones) - 1;

        printf("%lld\n", res);
    }
}
