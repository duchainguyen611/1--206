#include <stdio.h>
#include <stdlib.h>
#define Max 100

void nhapLieu(int *n,float a[]){
    do{
        printf("\nNhap n so thuc (n nguyen duong):");
        scanf("%d",&*n);
    }while(*n<1&&*n>Max&&printf("\nLoi!Moi Nhap lai n!"));
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

float amdau(int n,float a[]){
    for(int i=0;i<n;i++){
        if(a[i]<0){
            return a[i];
        }
    }
    return 1;
}

int main()
{
    int n;
    float a[Max];
    nhapLieu(&n,a);
    xuatLieu(n,a);
    float ad=amdau(n,a);
    printf("\nSo am dau tien la: %g",ad);
    return 0;
}
