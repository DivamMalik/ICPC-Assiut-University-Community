#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 1 ; i <= n ; i++){
        long long a,b,temp;
        long long sum;
        scanf("%lld %lld",&a,&b);
        if(a>b){
            temp = a;
            a = b;
            b = temp;
        }
        sum = (b-a+1)*(a+b) /2;
    printf("%lld\n",sum);
    }
    return 0;
}
