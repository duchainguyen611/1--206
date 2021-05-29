#include <stdio.h>
#include <stdlib.h>

int chuSoDauTienLaLe(int x){
    int chusodau;
    int themang=x;
    while(themang/=10){
        chusodau=themang%10;
    }
    if(chusodau%2!=0)
        return 1;
    else
        return 0;
}

int dauLeDauTien(int n, int a[]){
    for(int i=0;i<n;i++)
        if(chuSoDauTienLaLe(a[i])==1)
            return a[i];
    return 0;
}

int main()
{
    int n;
    do{
        printf("\nNhap n cac so nguyen:");
        scanf("%d",&n);
    }while(n<1||n>100&&printf("\nLoi! Moi nhap lai!"));
    int a[n];
    for(int i=0;i<n;i++){
        printf("\nSo thu %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nSo dau tien la chu so le la: %d",dauLeDauTien(n,a));
    return 0;
}
