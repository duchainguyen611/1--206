#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n,x;
    printf("Nhap x:");
    scanf("%f",&x);
    printf("Nhap n:");
    scanf("%f",&n);
    float T=pow(x,n);
    printf("T(x,n)=x^n=%g",T);
    return 0;
}
