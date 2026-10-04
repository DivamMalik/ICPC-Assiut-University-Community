#include <stdio.h>

int main() {
    int a, b;
    if (scanf("%d %d", &a, &b) != 2) return 0;

    int count = 0;

    for (int x = 0; x <= a; x++) {
        for (int y = 0; y <= a; y++) {
            int z = b - (x + y);
            if (z >= 0 && z <= a) {
                count++;
            }
        }
    }
    printf("%d\n", count);
}
