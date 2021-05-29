#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,bf;
    printf("\nNhap a:");scanf("%f",&a);
    printf("\nNhap b:");scanf("%f",&b);
    printf("\nNhap c:");scanf("%f",&c);
    if(a>b){
        bf=a;a=b;b=bf;
    }if(a>c){
        bf=a;a=c;c=bf;
    }if(b>c){
        bf=b;b=c;c=bf;
    }
    printf("\nTang dan: %g %g %g",a,b,c);
    return 0;
}
