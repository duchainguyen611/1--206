#include <stdio.h>
#include <stdlib.h>

int dautientrongdoan(int n,int a[],int x,int y){
    for(int i=0;i<n;i++)
        if(a[i]<y&&a[i]>x)
            return a[i];
    return 0;
}

int main()
{
    int x,y;
    do{
    printf("\nNhap x:");scanf("%d",&x);
    printf("\nNhap y:");scanf("%d",&y);
    }while(x>=y&&printf("\nx phai be hon y"));
    int n;
    do{
        printf("\nNhap n cac so thuc:");
        scanf("%d",&n);
    }while(n<1||n>100&&printf("\nLoi! Moi nhap lai!"));
    int a[n];
    for(int i=0;i<n;i++){
        printf("So thu %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nGia tri dau tien trong khoang (%d,%d) la: %d",x,y,dautientrongdoan(n,a,x,y));
    return 0;
}
