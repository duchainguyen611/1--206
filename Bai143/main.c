#include <stdio.h>
#include <stdlib.h>
#define Max 100

void nhapLieu(int *n,int a[]){
    do{
        printf("\nNhap so phan tu:");
        scanf("%d",&*n);
    }while(*n<1&&*n>Max&&printf("\nLoi!Moi nhap lai!"));
    for(int i=0;i<*n;i++){
        printf("\nPhan tu thu %d:",i+1);
        scanf("%d",&a[i]);
    }

}

void xuatLieu(int n,int a[]){
    printf("\nCac phan tu la:");
    for(int i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
}

int chandau(int n,int a[]){
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            return a[i];
        }
    }
    return -1;
}

int main()
{
    int n;
    int a[Max];
    nhapLieu(&n,a);
    xuatLieu(n,a);
    int sc=chandau(n,a);
    printf("\nSo chan dau tien la: %d",sc);
    return 0;
}
