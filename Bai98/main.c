#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,d,e,f;
    printf("\nNhap a:");scanf("%f",&a);
    printf("\nNhap b:");scanf("%f",&b);
    printf("\nNhap c:");scanf("%f",&c);
    printf("\nNhap d:");scanf("%f",&d);
    printf("\nNhap e:");scanf("%f",&e);
    printf("\nNhap f:");scanf("%f",&f);
    float x=(c*e-b*f)/(a*e-b*d);
    float y=(a*f-c*d)/(a*e-b*d);
    printf("\nx=%g\ny=%g",x,y);
    return 0;
}
