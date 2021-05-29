#include <stdio.h>
#include <stdlib.h>
#define Max 100

void nhapLieu(int *n,float a[]){
    do{
        printf("\nNhap so phan tu:");
        scanf("%d",&*n);
    }while(*n<1&&*n>Max&&printf("\nLoi!Moi ban nhap lai!"));
    for(int i=0;i<*n;i++){
        printf("\nPhan tu thu %d:",i+1);
        scanf("%f",&a[i]);
    }
}

void sapXepTangDan(int n,float a[]){
    float tg;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                tg=a[i];
                a[i]=a[j];
                a[j]=tg;
            }
        }
    }
}

void xuat(int n,float a[]){
    printf("\nSap xep mang theo thu tu tang dan la:");
    for(int i=0;i<n;i++){
        printf(" %g ",a[i]);
    }
}

int main()
{
    int n;
    float a[Max];
    nhapLieu(&n,a);
    sapXepTangDan(n,a);
    xuat(n,a);
    return 0;
}
