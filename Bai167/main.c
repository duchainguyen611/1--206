#include <stdio.h>
#include <stdlib.h>

int soToanChuSoLe(int x){
    int themang=x;
    int S=1;
    while(themang!=0){
        int i=themang%10;
        S*=i;
        themang/=10;
    }
    if(S%2!=0)
        return 1;
    else
        return 0;
}

int kiemTraMax(int n,int a[]){
    int max=a[0];
    for(int i=1;i<n;i++){
        if(soToanChuSoLe(a[i])==1){
            if(max<a[i])
                max=a[i];
        }
        if(soToanChuSoLe(a[i])==0){
            return 0;
        }
    }
    return max;
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
    printf("\nSo toan chu so le lon nhat la: %d",kiemTraMax(n,a));
    return 0;
}
