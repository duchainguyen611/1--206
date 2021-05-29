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

void xuatLieu(int n,int a[]){
    printf("\nCac so nguyen la:");
    for(int i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
}


int vitrinhonhat(int n,float a[]){
    int vtnn=0;
    for(int i=1;i<n;i++){
        if(a[vtnn]>a[i]){
            vtnn=i+1;
        }
    }
    return vtnn;
}

int main()
{
    int n;
    int a[Max];
    nhapLieu(&n,a);
    xuatLieu(n,a);
    int minn=vitrinhonhat(n,a);
    printf("\nVi tri nho nhat la: %d",minn);
    return 0;
}
