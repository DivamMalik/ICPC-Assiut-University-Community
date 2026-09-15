#include <stdio.h>

int main() 
{
    int n;
    long long max = -1;
    scanf("%d",&n);
    for(int i=0 ;i<n ;i++){
        long long a;
        scanf("%lld",&a);
        if(a > max){
        max = a;
        }
    }
    printf("%lld",max);
}
