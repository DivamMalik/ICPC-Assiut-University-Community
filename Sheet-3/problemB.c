#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    long long arry[n];
    for (int i = 0; i<n ; i++){
        scanf("%lld",&arry[i]);
    }
    int x;
    scanf("%d",&x);
    for (int i = 0 ; i<n ; i++){
        if(arry[i]==x){
            printf("%d\n",i);
            return 0;
        }
    }

    printf("-1");
    return 0;
}
