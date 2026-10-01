#include <stdio.h>
int main()
{
    long long n;
    scanf("%lld",&n);
    long long temp;
    for(long long i = 0 ; i < n ; i++){
        long long x ;
        scanf("%lld",&x);
        do{
            temp = x % 10;
            x /=10;
            printf("%lld ",temp);
        }while(x>0);
        printf("\n");
    }
}
