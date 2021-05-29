#include <stdio.h>
#include <stdlib.h>

float tich2giatrilancan(int n,float a[]){
    for(int i=1;i<n-1;i++)
        if(a[i+1]*a[i-1]==a[i])
            return a[i];
    return -1;
}

int main()
{
    int n;
    do{
        printf("\nNhap so cac so thuc:");
        scanf("%d",&n);
    }while(n<1||n>100&&printf("\nLoi! Moi Nhap lai!"));
    float a[n];
    for(int i=0;i<n;i++){
        printf("\nSo thu %d:",i+1);
        scanf("%f",&a[i]);
    }
    printf(" \n%g ",tich2giatrilancan(n,a));
    return 0;
}
