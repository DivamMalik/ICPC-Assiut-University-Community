#include <stdio.h>
int main(){
 
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
    int a , b ;
    int temp=0;
    scanf("%d %d",&a,&b);
    for (int i = 1 ; a>=i;i++){
        if (a%i==0 && b%i==0){
            temp = i;
        }
    }
    printf("%d",temp);
}
