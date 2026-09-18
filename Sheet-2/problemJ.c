#include <stdio.h>
#include<stdbool.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i =2;i<=n;i++){
        int num = i;
        bool f = false;
        for(int j = 2 ; j <= num-1 ; j++){
           if(num % j == 0){
              f = true;
              break;
           }
        }
        if(f == false){
            printf("%d " , num);
        }
    }
}
