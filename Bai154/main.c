#include <stdio.h>
#include <stdlib.h>
#define Max 100

int kiemTraSoAm(int n,float a[]){
    for(int i=0;i<n;i++)
        if(a[i]<0)
            return i+1;
    return -1;
}

int vtamlonnhat(int n,float a[]){
    int vtmax=0;
    for(int i=0;i<n;i++)
        if(a[i]<0)
            if(a[vtmax]<a[i])
                a[vtmax]=a[i];
    return vtmax+1;
}

int main()
{
    int n;
    do{
        printf("\nNhap n phan tu:");
        scanf("%d",&n);
    }while(n<1&&n>Max&&printf("\nLoi!Moi nhap lai!"));
    float a[n];
    for(int i=0;i<n;i++){
        printf("\nPhan thu thu %d:",i+1);
        scanf("%f",&a[i]);
    }
    printf("\nVi tri gia tri am lon nhat la:");
    if(vtamlonnhat(n,a)<0)
        printf(" %d",vtamlonnhat(n,a));
    else
        printf(" %d",kiemTraSoAm(n,a));
    return 0;
}
