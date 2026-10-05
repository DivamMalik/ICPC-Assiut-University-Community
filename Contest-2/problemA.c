#include <stdio.h>
int main()
{
    long long a , b;
    scanf("%lld %lld",&a,&b);
    long long res = a - b;
    if(res >= 0){
        printf("%lld",res);
    }
    else{
        printf("0");
    }
}