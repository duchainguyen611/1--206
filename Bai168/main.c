#include <stdio.h>
#include <stdlib.h>

int SoDang5k(int x)
{
    int thu=1;
    int count=0;
    while(thu<x){
        thu*=5;
        count++;
    }
    if(thu==x)
        return 1;
    else
        return 0;
}

int kiemTraXemCoSoDang5k(int n,int a[]){
    for(int i=0;i<n;i++){
        if(SoDang5k(a[i])==1)
            return a[i];
    }
    return 0;
}

int kiemTraMaxCoDang5k(int n,int a[]){
    int max=a[0];
    for(int i=1;i<n;i++){
        if(SoDang5k(a[i])==1)
            if(max<a[i])
                max=a[i];
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
    if(SoDang5k(kiemTraMaxCoDang5k(n,a))==1)
        printf("\nSo co dang 5k lon nhat la:%d",kiemTraMaxCoDang5k(n,a));
    if(SoDang5k(kiemTraMaxCoDang5k(n,a))==0)
        printf("\nSo co dang 5k lon nhat la:%d",kiemTraXemCoSoDang5k(n,a));
    return 0;
}
