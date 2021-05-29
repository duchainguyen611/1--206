#include <stdio.h>
#include <stdlib.h>

int n;
float x;
float S=0;

void nhapLieu(){
    printf("\nNhap x:");
    scanf("%f",&x);
    do{
    printf("\nNhap n(n nguyen duong):");
    scanf("%d",&n);
    }while(n<1&&printf("\nBan nhap sai dieu kien!"));
}

void tong(){
    for(int i=1;i<=n;i++){
        S+=pow(x,i);
    }
}

void xuat(){
    printf("\nTong la:%g",S);
}

int main()
{
    nhapLieu();
    tong();
    xuat();
    return 0;
}
