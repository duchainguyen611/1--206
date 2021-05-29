#include <stdio.h>
#include <stdlib.h>
#define Max 100

int soHoanHao(int n){
    int S=0;
    for(int i=1;i<n;i++)
        if(n%i==0)
            S+=i;
    if(S==n)
        return 1;
    return 0;
}

int kiemTraSoHoanThien(int n,int a[]){
    for(int i=0;i<n;i++)
        if(soHoanHao(a[i])==1)
            return a[i];
    return 0;
}

int hoanthiennhonhat(int n,int a[]){
    int min=a[0];
    for(int i=1;i<n;i++){
        if(soHoanHao(a[i])==1){
            if(min>a[i]){
                min=a[i];
            }
        }
    }
    return min;
}

int main()
{
    int n;
    do{
        printf("\nNhap n phan tu:");
        scanf("%d",&n);
    }while(n<1&&n>Max&&printf("\nLoi!Moi nhap lai!"));
    int a[n];
    for(int i=0;i<n;i++){
        printf("\nPhan thu thu %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nSo hoan thien nho nhat la:");
    if(soHoanHao(hoanthiennhonhat(n,a))==0){
        printf(" %d",kiemTraSoHoanThien(n,a));
    }else{
        printf(" %d",hoanthiennhonhat(n,a));
    }
    return 0;
}
