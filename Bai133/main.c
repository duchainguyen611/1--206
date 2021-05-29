#include <stdio.h>
#include <stdlib.h>
#define Max 100

void nhapLieu(int *n,float a[]){
    do{
        printf("\nNhap so cac so thuc:");
        scanf("%d",&*n);
    }while(*n<1&&*n>Max&&printf("\nLoi!Moi ban nhap lai"));
    for(int i=0;i<*n;i++){
        printf("\nSo thu %d:",i+1);
        scanf("%f",&a[i]);
    }
}

void xuatLieu(int n,float a[]){
    printf("\nCac so thuc la:");
    for(int i=0;i<n;i++){
        printf(" %g ",a[i]);
    }
}

void viTriAm(int n,float a[]){
    printf("\nNhung vi tri am la:");
    for(int i=0;i<n;i++){
        if(a[i]<0){
            printf(" %d ",i+1);
        }
    }
}

int main()
{
    int n;
    float a[Max];
    nhapLieu(&n,a);
    xuatLieu(n,a);
    viTriAm(n,a);
    return 0;
}
