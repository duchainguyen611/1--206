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

void tinhTongAm(int n,float a[]){
    float S=0;
    for(int i=0;i<n;i++){
        if(a[i]<0){
            S+=a[i];
        }
    }
    printf("\nTong gia tri am trong mang la:%g",S);
}

int main()
{
    int n;
    float a[Max];
    nhapLieu(&n,a);
    tinhTongAm(n,a);
    return 0;
}
