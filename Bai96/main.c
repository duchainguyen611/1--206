#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("\nNhap x:");
    scanf("%d",&x);
    if(x>=5){
        int fx=2*pow(x,2)+5*x+9;
        printf("f(x)=%d",fx);
    }else{
        int fx=-2*pow(x,2)+4*x-9;
        printf("f(x)=%d",fx);
    }
    return 0;
}
