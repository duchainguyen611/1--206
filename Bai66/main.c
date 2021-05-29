#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    printf("\nGiai phuong trinh trung phuong:ax^4+bx^2+c=0");
    float a,b,c;
    printf("\nNhap a:");
    scanf("%f",&a);
    printf("\nNhap b:");
    scanf("%f",&b);
    printf("\nNhap c:");
    scanf("%f",&c);
    if(a==0){
        if(b!=0){
            float m=sqrt(-c/b);
            if(-c/b>0){
                printf("\nPT co 2 nghiem:\nx1=%g\nx2=%g",m,-m);
            }else if(-c/b==0){
                printf("\nPT co 1 nghiem:x=%g",m);
            }else{
                printf("\nPT vo nghiem");
            }
        }
    }else{
        float dental=b*b-4*a*c;
        if(dental<0){
            printf("\nPT vo nghiem");
        }else if(dental==0){
            float m1=sqrt(-b/(2*a));
            if(-b/(2*a)>0){
                printf("\nPT co 2 nghiem:\nx1=%g\nx2=%g",m1,-m1);
            }else if(-b/(2*a)==0){
                printf("\nPT co 1 nghiem: x=%g",m1);
            }else{
                printf("\nPT vo nghiem");
            }
        }else if(dental>0){
            float m4=(-b-sqrt(dental))/(2*a);
            float m5=(-b+sqrt(dental))/(2*a);
            float m2=sqrt(m4);
            float m3=sqrt(m5);
            if(m4>0&&m5>0){
                printf("\nPT co 4 nghiem:\nx1=%g\nx2=%g\nx3=%g\nx4=%g",m2,-m2,m3,-m3);
            }else if(m4>0&&m5==0){
                printf("\nPT co 3 nghiem:\nx1=0\nx2=%g\nx3=%g",m2,-m2);
            }else if(m5>0&&m4==0){
                printf("\nPT co 3 nghiem:\nx1=0\nx2=%g\nx3=%g",m3,-m3);
            }else if(m4<0&&m5==0){
                printf("\nPT co 1 nghiem: x=0");
            }else if(m5<0&&m4==0){
                printf("\nPT co 1 nghiem: x=0");
            }else if(m5<0&&m4<0){
                printf("\nPT vo nghiem");
            }else if(m4>0&&m5<0){
                printf("\nPT co 2 nghiem:\nx1=%g\nx2=%g",m2,-m2);
            }else if(m5>0&&m4<0){
                printf("\nPT co 2 nghiem:\nx1=%g\nx2=%g",m3,-m3);
            }
        }
    }
    return 0;
}
