#include <stdio.h>
#include <stdlib.h>

int timMax(int n,int a[]){
    int max=a[0];
    for(int i=1;i<n;i++)
        if(max<a[i])
            max=a[i];
    return max;
}

int kiemTraBoiChung(int n,int a[],int boiChung){
    for(int i=0;i<n;i++){
        if(boiChung%a[i]!=0){
            return 0;
        }
    }
    return 1;
}

int tichCacSoTrongMang(int n,int a[]){
    int S=1;
    for(int i=0;i<n;i++){
        S*=a[i];
    }
    return S;
}

int BoiChungNhoNhat(int n,int a[]){
    for(int boiChung=timMax(n,a);boiChung<=tichCacSoTrongMang(n,a);boiChung++){
        if(kiemTraBoiChung(n,a,boiChung)==1){
            return boiChung;
        }
    }
    return 1;
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
        do{
            printf("\nSo thu %d:",i+1);
            scanf("%d",&a[i]);
        }while(a[i]<=0);
    }
    printf("\nBoi chung nho nhat la: %d",BoiChungNhoNhat(n,a));
    return 0;
}
