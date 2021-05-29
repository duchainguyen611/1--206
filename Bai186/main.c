#include <stdio.h>
#include <stdlib.h>

float giaTriAmDauTien(int n,float a[]){
    for(int i=0;i<n;i++){
        if(a[i]<0){
            return a[i];
        }
    }
    return -1;
}

void viTriBangGiaTriAmDauTien(int n,float a[]){
    printf("\n");
    float amdau=giaTriAmDauTien(n,a);
    for(int i=0;i<n;i++){
        if(amdau==a[i]){
            printf("\n %d",i+1);
        }
    }
    return 0;
}

int main()
{
    int n;
    printf("\nNhap n:");
    scanf("%d",&n);
    float a[n];
    for(int i=0;i<n;i++){
        printf("\nSo thu %d:",i+1);
        scanf("%f",&a[i]);
    }
    viTriBangGiaTriAmDauTien(n,a);
    return 0;
}
