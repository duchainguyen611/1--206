#include <stdio.h>
#include <stdlib.h>

void timx(int n,float a[],float b[]){
    for(int i=0;i<n;i++)
        b[i]=abs(a[i]);
    float x=b[0];
    for(int i=1;i<n;i++)
        if(x<b[i])
            x=b[i];
    printf("Doan chua tat ca gia tri trong mang la:[%g,%g]",-x,x);
}

int main()
{
    int n;
    do{
        printf("\nNhap n cac so nguyen:");
        scanf("%d",&n);
    }while(n<1&&n>100&&printf("\nLoi! Moi nhap lai!"));
    float a[n];
    float b[n];
    for(int i=0;i<n;i++){
        printf("\nSo thu %d:",i+1);
        scanf("%f",&a[i]);
    }
    timx(n,a,b);
    return 0;
}
