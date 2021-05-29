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

int vtduongnhonhat(int n,float a[]){
    int vtminduong=0;
    for(int i=1;i<n;i++){
        if(a[i]>0&&a[vtminduong]>a[i]){
            vtminduong=i+1;
        }
        if(a[i]<=0){
            return -1;
        }
    }
    return vtminduong;
}

int main()
{
    int n;
    float a[Max];
    nhapLieu(&n,a);
    xuatLieu(n,a);
    int vtdnn=vtduongnhonhat(n,a);
    printf("\nGia tri duong nho nhat la: %d",vtdnn);
    return 0;
}
