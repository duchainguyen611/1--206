#include <stdio.h>
#include <stdlib.h>

int kiemTraNguyenTo(int x){
    if(x<2)
        return 0;
    if(x>2)
        if(x%2==0){
            return 0;
        }
        for(int i=3;i<x;i+=2){
            if(x%i==0)
                return 0;
        }
    return 1;
}

int chuSoDauTien(int x){
    int firstnumber;
    int themang=x;
    while(themang!=0){
        firstnumber=themang%10;
        themang/=10;
    }
    return firstnumber;
}

void soNguyenToCoChuSoDauLaLe(int n,int a[]){
    for(int i=0;i<n;i++){
        if(kiemTraNguyenTo(a[i])==1){
            if(chuSoDauTien(a[i])%2==1){
                printf(" %d",a[i]);
            }
        }
    }
}

int main()
{
    int n;
    printf("\nNhap n:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("\nSo thu %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n");
    soNguyenToCoChuSoDauLaLe(n,a);
    return 0;
}
