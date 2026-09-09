#include <stdio.h>
int main()
{
    char a;
    scanf(" %c",&a);
    if (a == 'z'){
        char next = 'a';
        printf("%c",next);
    }
    else {
        char next = (a += 1);
        printf("%c",next);
    }
}
