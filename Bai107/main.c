#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float x;
    do{
    printf("\nNhap x(x>0):");
    scanf("%f",&x);
    }while(n<0&&printf("\nBan nhap k dung dieu kien!"));
    do{
    printf("\nNhap n(n nguyen duong):");
    scanf("%d",&n);
    }while(n<1&&printf("\nBan nhap k dung dieu kien!"));
    float S=pow(x,(float)1/n);
    printf("S=%g",S);
    return 0;
}
