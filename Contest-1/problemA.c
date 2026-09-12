#include <stdio.h>
int main()
{
    int discount_percent, price ;
    scanf("%d %d", &discount_percent , &price);
    float discount_sub = (100-discount_percent);
    float discount_conv = (discount_sub/100);
    float orignal_price = (price/discount_conv);
    printf("%.2f",orignal_price);
}
