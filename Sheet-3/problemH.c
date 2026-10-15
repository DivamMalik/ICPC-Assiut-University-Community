#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arry[n];
    for(int i = 0 ; i<n ; i++){
        scanf("%d",&arry[i]);
    }
    for(int i = 0 ; i < n-1 ; i++){
        int count = 0;

        for(int j = 0 ; j <n-i-1 ; j++){
            if(arry[j]>arry[j+1]){
                int temp = arry[j];
                arry[j] = arry[j+1];
                arry[j+1] = temp;
                count++;
            }
        }
        if(count==0){
            break;
        }
    }
    for(int i = 0 ; i<n ; i++){
        printf("%d ",arry[i]);
    }
}
