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

float nhonhat(int n,float a[]){
    float min=a[0];
    for(int i=1;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    return min;
}

int main()
{
    int n;
    float a[Max];
    nhapLieu(&n,a);
    xuatLieu(n,a);
    float nn=nhonhat(n,a);
    printf("\nGia tri nho nhat la: %g",nn);
    return 0;
}
