#include <stdio.h>
#include <stdlib.h>
#define Max 100

void nhapLieu(int *n,float a[]){
    do{
        printf("\nNhap so cac so thuc:");
        scanf("%d",&*n);
    }while(*n<1&&*n>Max&&printf("\nLoi! Moi ban nhap lai!"));
    for(int i=0;i<*n;i++){
        printf("\nNhap so %d:",i+1);
        scanf("%f",&a[i]);
    }
}

void xuatLieu(int n,float a[]){
    printf("\nCac so thuc la:");
    for(int i=0;i<n;i++){
        printf(" %g ",a[i]);
    }
}

float duongnhonhat(int n,float a[]){
    float minduong=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>0&&minduong>a[i]){
            minduong=a[i];
        }
        if(a[i]<=0){
            return -1;
        }
    }
    return minduong;
}

int main()
{
    int n;
    float a[Max];
    nhapLieu(&n,a);
    xuatLieu(n,a);
    float dnn=duongnhonhat(n,a);
    printf("\nGia tri duong nho nhat la: %g",dnn);
    return 0;
}
