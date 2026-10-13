#include <stdio.h>

int main(){
        int n,temp;
        scanf("%d",&n);
        int array[n];
        for(int i=0;i<n;i++){
            scanf("%d",&array[i]); 
        }
        for(int i=0;i<n/2;i++){
            if(array[i]!=array[n-i-1]){
                printf("NO");
                return 0;
            }
        }
    printf("YES");
    return 0;
}
