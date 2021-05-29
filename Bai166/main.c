#include <stdio.h>
#include <stdlib.h>

int giaTriDang2k(int x){
    int thu=1;
    int count=0;
    while(thu<x){
        thu*=2;
        count++;
    }
    if(x==pow(2,count))
        return 1;
    else
        return 0;

}

int kiemTra(int n,int a[]){
    for(int i=0;i<n;i++)
        if(giaTriDang2k(a[i])==1)
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
    printf("\nGia tri dau tien trong mang co dang 2^k la: %d",kiemTra(n,a));
    return 0;
}
