#include <stdio.h>
int main()
{
int x,y;
	scanf("%d %d",&x,&y);
	if(x%y==0){
		for(int i=x/y;i>0;i--){
			long long count=1000000000;
			for(int z=1;z<=y;z++){
				int input;
					scanf("%d",&input);
				if(input<=count){
					count = input;
				}
			}
			printf("%lld ",count);
		}
	}else{
		for(int i=x/y;i>=0;i--){
			long long count=1000000000;
			for(int z=1;z<=y;z++){
				int input;
				scanf("%d",&input);
				if(input<=count){
					count = input;
				}
			}
			printf("%lld ",count);
		}
	}
}
