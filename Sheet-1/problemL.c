#include <stdio.h>
#include <string.h>
int main(){
    char f1[100], l1[100];
    char f2[100], l2[100];
    scanf("%s %s\n %s %s", &f1 ,&l1 ,&f2 ,&l2);
    if (strcmp(l1,l2) == 0)
        {printf("ARE Brothers");}
     else
        {printf("NOT");}
}