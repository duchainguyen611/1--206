#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("\nNhap a:");
    scanf("%d",&a);
    printf("\nNhap b:");
    scanf("%d",&b);
    if(a*b>0){
        printf("\n2 so cung dau.");
    }else{
        printf("\n2 so khac dau.");
    }
    return 0;
}
