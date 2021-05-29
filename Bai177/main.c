#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,n;
    do{
        printf("\nNhap x:");
        scanf("%d",&x);
        printf("\nNhap y:");
        scanf("%d",&y);
    }while(x>=y&&printf("\nMoi nhap la x,y!"));
    printf("\nNhap n:");
    scanf("%d",&n);
    float a[n];
    for(int i=0;i<n;i++){
        printf("\nSo thu %d:",i+1);
        scanf("%f",&a[i]);
    }
    printf("\nCac gia tri trong khoang (%d,%d) la:",x,y);
    for(int i=0;i<n;i++){
        if(a[i]>=x&&a[i]<=y){
            printf(" %g",a[i]);
        }
    }
    return 0;
}
