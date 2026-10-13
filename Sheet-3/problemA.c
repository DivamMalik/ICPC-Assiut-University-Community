#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    long long arry[n];
    long long result = 0;
    for (int i = 0; i<n ; i++){
        scanf("%lld",&arry[i]);
        result += arry[i];
    }
    if(result<0){
        result = -result;
    }

    printf("%lld",result);
    return 0;
}