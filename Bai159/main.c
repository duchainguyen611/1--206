#include <stdio.h>
#include <stdlib.h>

float dautien(int n,float a[]){
    for(int i=0;i<n;i++)
        if(a[i]>2003)
            return a[i];
    return 0;
}

int main()
{
    int n;
    do{
        printf("\nNhap n cac so thuc:");
        scanf("%d",&n);
    }while(n<1||n>100&&printf("\nLoi! Moi nhap lai!"));
    float a[n];
    for(int i=0;i<n;i++){
        printf("So thu %d:",i+1);
        scanf("%f",&a[i]);
    }
    printf("\nSo dau tien lon hơn 2003 la: %g",dautien(n,a));
    return 0;
}
