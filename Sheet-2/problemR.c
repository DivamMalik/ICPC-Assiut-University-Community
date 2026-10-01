#include <stdio.h>
int main()
{
    int a , b, temp ;
    int res = 0;
    for(;;){
        if(scanf("%d %d\n",&a,&b)==2){
			res =0;
        if(a<=0 || b<=0){
            break;
        }else{
            if (b>a){
                temp = a;
                a = b;
                b = temp;
            }
                for(int i = b; i<=a; i++){
                    res += i;
                    printf("%d ",i);
                }
            printf("sum =%d\n",res);
            }
        }
    }
    return 0;
}
