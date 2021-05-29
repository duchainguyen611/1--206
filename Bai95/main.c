#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("\nNhap a:");
    scanf("%d",&a);
    printf("\nNhap b:");
    scanf("%d",&b);
    printf("\nNhap c:");
    scanf("%d",&c);
    if(a<0||b<0||c<0){
        a=abs(a);
        b=abs(b);
        c=abs(c);
    }
    printf("\n3 so la:%d %d %d ",a,b,c);
    return 0;
}
