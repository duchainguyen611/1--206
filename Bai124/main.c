#include <stdio.h>
#include <stdlib.h>
#define Max 100

void nhap(int *n,float a[]){
    do{
        printf("\nNhap so phan tu:");
        scanf("%d",&*n);
    }while(1>=*n&&*n>=Max&&printf("\nMoi ban nhap lai!"));
    for(int i=0;i<*n;i++){
        printf("\nPhan tu thu %d:",i+1);
        scanf("%f",&a[i]);
    }
}

void kiemTraSo(int n,float a[]){
    printf("\nPhan tu chan be hon 2004 la:");
    for(int i=0;i<n;i++){
        if((int)a[i]%2==0&&a[i]<2004){
            printf(" %g ",a[i]);
        }
    }
}

int main()
{
    int n;
    float a[Max];
    nhap(&n,a);
    kiemTraSo(n,a);
    return 0;
}
