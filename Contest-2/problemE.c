#include <stdio.h>
int main()
{
    long long seat;
    scanf("%lld",&seat);
    long long row = seat/4;
    long long col ;
    if(row%2==0){
        col = seat%4;
    }else if(row%2!=0){
        col = 3 - (seat%4);
    }
    printf("%lld %lld",row,col);
}
