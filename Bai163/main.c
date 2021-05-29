#include <stdio.h>
#include <stdlib.h>

int soChinhPhuong(int n,int a[]){
    for(int i=0;i<n;i++)
        for(int j=1;j<=sqrt((float)a[i]);j++)
            if(j*j==a[i])
                return a[i];
    return 0;
}

int main()
{
    int n;
    do{
        printf("\nNhap n cac so thuc:");
        scanf("%d",&n);
    }while(n<1||n>100&&printf("\nLoi! Moi nhap lai!"));
    int a[n];
    for(int i=0;i<n;i++){
        printf("\nSo thu %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nSo chinh phuong dau tien: %d",soChinhPhuong(n,a));
    return 0;
}
