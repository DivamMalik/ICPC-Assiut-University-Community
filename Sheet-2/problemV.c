#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int temp = 0;
    for(int i = 1 ; ; i++){
        if(i%4==0){
            printf("PUM\n");
            temp += 1;
            if(temp==n){
                break;
            }
        }
        else{
            printf("%d ",i);
        }

    }
}
