#include <stdio.h>
#include <stdlib.h>

void lietKe(int n,float a[]){
    printf("\nCac cap gia tri (a,b) sao cho a<=b:");
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]&&a[i]!=a[j]){
                printf(" (%g,%g)",a[i],a[j]);
            }
        }
    }
}

int main()
{
    int n;
    do{
        printf("Nhap n cac so (n>=2):");
        scanf("%d",&n);
    }while(n<2&&n>100&&printf("\nMoi Nhap lai n!"));
    float a[n];
    for(int i=0;i<n;i++){
        printf("\nNhap so %d:",i+1);
        scanf("%f",&a[i]);
    }
    lietKe(n,a);
    return 0;
}
