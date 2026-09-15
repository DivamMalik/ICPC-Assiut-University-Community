#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);

    long long even = 0;
    long long odd = 0;
    long long positive = 0;
    long long negative = 0;

    for(int i = 0; i < n; i++){
        long long value;
        scanf("%lld", &value);
        if(value > 0){
            positive++;
        } else if(value < 0){
            negative++;
        }
        if (value % 2 == 0){
            even++;
        } else {
            odd++;
        }
    }

    printf("Even: %lld\n", even);
    printf("Odd: %lld\n", odd);
    printf("Positive: %lld\n", positive);
    printf("Negative: %lld\n", negative);
}
