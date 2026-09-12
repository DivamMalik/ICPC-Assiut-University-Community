#include <stdio.h>
int main()
{
    long long n , m ,k;
    scanf("%lld %lld %lld",&n ,&m ,&k);
    if (n==0 && k==0){
        printf("0");
        return 0;
    }
    long long x = n;
    if (m<x) x = m;
    if (k<x) x = k;
    n-=x;
    m-=x;
    k-=x;
    long long a = n /2 ;
    if (k<a) a = k;
    x += a;
    printf("%lld",x);
}
