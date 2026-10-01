#include <stdio.h>
int main()
{
    char c;
    int a;
    scanf("%c %d",&c,&a);
    for(int i = 0 ; i < a ; i++){
        int b ;
        scanf("%d",&b);
        for (int j = 1 ; j <= b; j++ ){
            printf("%c",c);
        }
        printf("\n");
    }
}
