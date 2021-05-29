#include <stdio.h>
#include <stdlib.h>
#define Max 100

void nhapLieu(int *n,int a[]){
    do{
        printf("\nNhap so cac so nguyen:");
        scanf("%d",&*n);
    }while(*n<1&&*n>Max&&printf("\nLoi! Moi ban nhap lai!"));
    for(int i=0;i<*n;i++){
        printf("\nSo thu %d:",i+1);
        scanf("%d",&a[i]);
    }
}

void xuatLieu(int n,int a[]){
    printf("\nCac so nguyen la:");
    for(int i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
}

int vitrichandau(int n,int a[]){
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            return i+1;
        }
    }
    return -1;
}

int main()
{
    int n;
    int a[Max];
    nhapLieu(&n,a);
    xuatLieu(n,a);
    int chandau=vitrichandau(n,a);
    printf("\nVi tri chan dau tien la: %d",chandau);
    return 0;
}
