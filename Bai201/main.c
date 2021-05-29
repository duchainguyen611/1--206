#include <stdio.h>
#include <stdlib.h>


int tongGiaTriDuong(int n,int a[]){
    int S=0;
    for(int i=0;i<n;i++){
        if(a[i]>0){
            S+=a[i];
        }
    }
    return S;
}

int main()
{
    int n;
    printf("\nNhap n:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("a[%d]:",i+1);
        scanf("%d",&a[i]);
    }
    printf("Tong la: %d",tongGiaTriDuong(n,a));
    return 0;
}
