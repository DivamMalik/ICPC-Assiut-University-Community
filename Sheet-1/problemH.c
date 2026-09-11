#include <stdio.h>
int main(){
    float x, y ;
    scanf("%f %f", &x ,&y);
    int a = floor(x/y);
    int b = ceil(x/y);
    int c = round(x/y);
    printf("floor %.0f / %.0f = %d\n", x , y , a);
    printf("ceil %.0f / %.0f = %d\n", x , y , b);
    printf("round %.0f / %.0f = %d", x ,y ,c);
}

// -----------------------OR-----------------------

#include <stdio.h>
 
int main (){
    float n1;
    float n2;
    scanf("%f %f",&n1, &n2);
    float div = n1/n2 ;
    int ceil = (int)div +1;
    int floor = (int)div;
    printf("floor %d / %d = %d\n",(int)n1,(int)n2,floor);
    if ((int)div == div)
    {
        printf("ceil %d / %d = %d\n",(int)n1,(int)n2,floor);
    }else{
        printf("ceil %d / %d = %d\n",(int)n1,(int)n2,ceil);
    }
    if((div>=(int)div+0.5)){
        printf("round %d / %d = %d",(int)n1,(int)n2,ceil);
    }else{
        printf("round %d / %d = %d",(int)n1,(int)n2,floor);
    }
}
