#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    
    while (n--) {
        int x, y;
        scanf("%d %d", &x, &y);
    
        int low = (x < y) ? x : y;
        int high = (x > y) ? x : y;
        
        int total_sum = 0;
    
        for (int i = low + 1; i < high; i++) {
            if (i % 2 != 0) {
                total_sum += i;
            }
        }
        printf("%d\n", total_sum);
    }
    return 0;
}
