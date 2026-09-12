#include <stdio.h>
int main()
{
    long long n , k , a ;
    scanf("%lld %lld %lld",&n,&k,&a);
    if ((n*k)%a!=0){
        printf("double");
    }
    else{
        long long res = (n*k)/a;
        if (res >=-2147483648 && res <=2147483648){
            printf("int");
        }
        else {
            printf("long long");
        }
    }
}
