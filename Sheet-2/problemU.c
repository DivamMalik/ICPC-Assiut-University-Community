#include <stdio.h>
int main()
{
    int n , a , b;
    scanf("%d %d %d",&n ,&a ,&b);
    int total_sum=0;
    for(int i = 1 ; i<= n ;i++){
        int temp = i;
        int sum = 0;
        while(temp>0){
            sum = temp % 10 + sum;
            temp /=10;
        }
        if(sum >= a && sum <=b){
            total_sum += i;
        }
    }
    printf("%d\n",total_sum);
}
