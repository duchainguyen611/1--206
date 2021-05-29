#include <stdio.h>
#include <stdlib.h>
#define Max 100

int kiemTraSoChan(int n,int a[]){
    for(int i=0;i<n;i++)
        if(a[i]%2==0)
            return a[i];
    return -1;
}

int chanNhoNhat(int n,int a[]){
    int min=a[0];
    for(int i=1;i<n;i++)
        if(a[i]%2==0)
            if(min>a[i])
                min=a[i];
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
    printf("\nSo chan nho nhat la:");
    if(chanNhoNhat(n,a)%2==0)
        printf(" %d",chanNhoNhat(n,a));
    else
        printf(" %d",kiemTraSoChan(n,a));
    return 0;
}
