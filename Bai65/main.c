#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\nGiai phuong trinh bac 2: ax^2+bx+c=0");
    float a,b,c;
    printf("\nNhap a:");
    scanf("%f",&a);
    printf("\nNhap b:");
    scanf("%f",&b);
    printf("\nNhap c:");
    scanf("%f",&c);
    if(a==0){
        if(b!=0){
            float x0=-c/b;
            printf("\n PT co 1 nghiem x=%g",x0);
        }else{
            printf("\nPT vo nghiem");
        }
    }else{
        float dental=b*b-4*a*c;
        if(dental<0){
            printf("\nPT vo nghiem");
        }else if(dental==0){
            float x3=-b/(2*a);
            printf("\nPT co 1 nghiem x=%g",x3);
        }else if(dental>0){
            float x1=(-b+sqrt(dental))/(2*a);
            float x2=(-b-sqrt(dental))/(2*a);
            printf("\nPT co 2 ngiem:\nx1=%g\nx2=%g",x1,x2);
        }
    }

    return 0;
}
