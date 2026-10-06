#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int centre = n/2;
    for(int i = 0 ; i<=n-1 ; i++){
        for(int j = 0 ; j <= n-1 ; j++){
            if(i == centre && j == centre){
                printf("X");
            }
            else if(i==j){
                printf("\\");
            }
            else if((i+j)==(n-1)){
                printf("/");
            }
            else{
                printf("*");
            }
        }
    printf("\n");
    }
}
