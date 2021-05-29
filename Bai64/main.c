#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\nGiai phuong trinh bac 1: ax+b=0");
    int a,b;
    printf("\nNhap a:");
    scanf("%d",&a);
    printf("\nNhap b:");
    scanf("%d",&b);
    float c=(float)-b/a;
    printf("\nx=%g",c);
    return 0;
}
