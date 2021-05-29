#include <stdio.h>
#include <stdlib.h>

void timdoan(int n,float a[]){
    int min=a[0];
    for(int i=0;i<n;i++)
        if(min>a[i])
            min=a[i];
    int max=a[0];
    for(int i=0;i<n;i++)
        if(max<a[i])
            max=a[i];
    printf("Doan chua tat ca gia tri trong mang la:[%d,%d]",min,max);
}

int main()
{
    int n;
    do{
        printf("\nNhap n cac so nguyen:");
        scanf("%d",&n);
    }while(n<1&&n>100&&printf("\nLoi! Moi nhap lai!"));
    float a[n];
    for(int i=0;i<n;i++){
        printf("\nSo thu %d:",i+1);
        scanf("%f",&a[i]);
    }
    timdoan(n,a);
    return 0;
}
