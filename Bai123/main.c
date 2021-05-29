#include <stdio.h>
#include <stdlib.h>
int Max=100;

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

void timMin(int n,float a[]){
    float min=a[0];
    int vtnn=0;
    for(int i=1;i<n;i++){
        if(min>a[i]){
            min=a[i];
            vtnn=i+1;
        }
    }
    printf("\nPhan tu nho nhat la: %g",min);
    printf("\nVi tri phan tu nho nhat la: %d",vtnn);
}

int main()
{
    int n;
    float a[Max];
    nhap(&n,a);
    timMin(n,a);
    return 0;
}
