#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\nGiai phuong trinh ax+b=0");
    int a,b;
    do{
    printf("\nNhap a:");
    scanf("%d",&a);
    printf("\nNhap b:");
    scanf("%d",&b);
    if(a==0&&b==0){
        printf("\nPhuong trinh vo so nghiem.");
    }else if(a==0&&b!=0){
        printf("\nPhuong trinh vo nghiem.");
    }else{
        float x=(float)-b/a;
        printf("\nx=%g",x);
    }
    }while(1);
    return 0;
}
