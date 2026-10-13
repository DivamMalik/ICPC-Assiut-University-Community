#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    long long arry[n];
    for (int i = 0; i<n ; i++){
        scanf("%lld",&arry[i]);
        if (arry[i]>0){
            arry[i]=1;
            printf("%d ",arry[i]);
        }
        else if(arry[i]<0){
            arry[i]=2;
            printf("%d ",arry[i]);
        }
        else{
            arry[i]=0;
            printf("%d ",arry[i]);
        }
    }
    return 0;
}
