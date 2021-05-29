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

void lietKeChan(int n,int a[]){
    printf("\nCac so nguyen chan la:");
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            printf(" %d ",a[i]);
        }
    }
}

int main()
{
    int n;
    int a[Max];
    nhapLieu(&n,a);
    lietKeChan(n,a);
    return 0;
}
