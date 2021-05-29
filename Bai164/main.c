#include <stdio.h>
#include <stdlib.h>

int soGanh(int x){
    int SoDao=0;
    int themang=x;
        while(themang!=0){
            SoDao = SoDao * 10 + themang % 10;
            themang /= 10;
        }
        if(x==SoDao)
            return 1;
        else
            return 0;
}

int soGanhDauTien(int n,int a[]){
    for(int i=0;i<n;i++)
        if(soGanh(a[i])==1)
            return a[i];
    return -1;
}

int main()
{
    int n;
    do{
        printf("\nNhap n cac so thuc:");
        scanf("%d",&n);
    }while(n<1||n>100&&printf("\nLoi! Moi nhap lai!"));
    int a[n];
    for(int i=0;i<n;i++){
        printf("\nSo thu %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nSo doi xung la: %d",soGanhDauTien(n,a));
    return 0;
}
