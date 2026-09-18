#include <stdio.h>
int main()
{
    int n;
    scanf("%d\n",&n);
    for (int i=1;i<=n;i++){
        int x ;
        scanf("%d",&x);
        long long res = 1;
        for(int y=1;y<=x;y++){
            res = y*res;
        }
    printf("%lld\n",res);
    }
}
