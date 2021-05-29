#include <stdio.h>
#include <stdlib.h>
#define Max 100

void nhapLieu(int *n,int a[]){
    do{
        printf("\nNhap so cac so nguyen:");
        scanf("%d",&*n);
    }while(*n<1&&*n>Max&&printf("\nLoi!Moi ban nhap lai"));
    for(int i=0;i<*n;i++){
        printf("\nSo thu %d:",i+1);
        scanf("%d",&a[i]);
    }
}

int chancuoi(int n,int a[]){
    for(int i=n-1;i>=0;i--){
        if(a[i]%2==0){
            return a[i];
        }
    }
        return -1;
}

void xuatLieu(int n,int a[]){
    printf("\nCac so nguyen la:");
    for(int i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
}

int main()
{
    int n;
    int a[Max];
    nhapLieu(&n,a);
    xuatLieu(n,a);
    int scc=chancuoi(n,a);
    printf("\nSo chan cuoi cung la: %d",scc);
    return 0;
}
